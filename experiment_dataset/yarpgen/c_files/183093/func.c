/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183093
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) min((var_15), (((/* implicit */unsigned short) var_17)))))) ? (((/* implicit */int) ((min((((/* implicit */long long int) -975617066)), (var_19))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (975617073))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (-975617050) : (975617069))) >= (((/* implicit */int) ((var_19) > (((/* implicit */long long int) var_16))))))))));
    var_21 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_10)))) ^ (min((var_2), (((/* implicit */unsigned long long int) 975617065)))))) >> (((var_16) - (1124126255)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_22 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0]))) > (9115458638968321958LL))) ? (1375246616709145825ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_3 [i_0] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))))));
                        /* LoopSeq 4 */
                        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_1] [i_4]);
                            arr_14 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_12 [i_0]);
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_8 [i_5] [i_5]))));
                            arr_17 [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) arr_1 [i_0] [i_2]);
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(9917446691465931532ULL)))) ? (17071497457000405785ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (-9115458638968321964LL))))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((unsigned long long int) arr_10 [i_0] [i_3])))));
                        }
                        for (unsigned char i_6 = 2; i_6 < 15; i_6 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_1])) ^ (((/* implicit */int) arr_12 [i_3]))))) : (((unsigned int) -9115458638968321962LL))))));
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6 - 2] [i_6 - 2] [i_1] [(unsigned short)12] [(unsigned short)12] [(unsigned short)12] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) : (arr_11 [i_2] [i_3] [i_6] [i_3] [i_2])))) ? (((unsigned long long int) ((unsigned int) var_1))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) ^ (var_16))) ^ (((/* implicit */int) ((((/* implicit */int) arr_12 [i_3])) > (((/* implicit */int) arr_8 [i_6 - 2] [i_2])))))))))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            var_28 = ((/* implicit */int) ((min((-9115458638968321968LL), (((/* implicit */long long int) ((((-1906778792) + (2147483647))) >> (((/* implicit */int) (unsigned char)31))))))) % (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_2] [i_3] [i_3] [(short)12])))))));
                            arr_24 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -9115458638968321968LL)) > (18446744073709551615ULL))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_2] [i_3] [14])) : (((/* implicit */int) (signed char)-1))))) % (((arr_9 [6ULL] [i_1] [i_1] [i_0]) << (((var_3) - (14080893701726071261ULL)))))))));
                            var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (max((((/* implicit */unsigned int) (unsigned short)9304)), (var_11)))));
                        }
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0]);
        var_31 -= ((long long int) ((((((/* implicit */_Bool) -9115458638968321976LL)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_0] [14])))) ^ (((/* implicit */int) (unsigned short)41189))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned short) ((arr_11 [i_8] [i_8] [i_8] [i_8] [(unsigned short)10]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
        arr_27 [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */long long int) arr_15 [0] [i_8] [i_8] [i_8])) - (((((/* implicit */_Bool) arr_21 [i_8] [(unsigned char)4])) ? (arr_1 [2] [2]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
        var_33 -= ((/* implicit */unsigned short) arr_16 [8LL] [i_8] [i_8] [i_8] [i_8] [8LL]);
        arr_28 [i_8] = ((/* implicit */int) ((long long int) ((10325572097015246857ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
    }
    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
    {
        var_34 *= ((/* implicit */unsigned long long int) ((long long int) (unsigned short)65535));
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_9] [i_9]))))) ? (((var_17) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9] [i_9]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_10))))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_9])) ? (((/* implicit */int) var_8)) : (-1217084480)))), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9]))) - (var_18))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_18 [i_9] [3U] [i_9] [i_9] [i_9] [i_9]))))));
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_5)))))))) ^ (((long long int) ((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)197)))))));
        var_37 *= ((/* implicit */short) (unsigned char)48);
    }
}
