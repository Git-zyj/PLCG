/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139113
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
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((_Bool) ((short) (unsigned short)65520))))));
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_14)) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_17))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) (!(((_Bool) arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_23 += ((/* implicit */signed char) ((short) max((arr_0 [2U] [i_2]), (((/* implicit */unsigned int) (_Bool)1)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_9 [i_0] [i_1] [i_1] [i_0] [i_3]), (((/* implicit */unsigned long long int) arr_6 [i_1]))))) && (((/* implicit */_Bool) min((arr_7 [i_0] [i_1] [i_3]), (arr_7 [i_0] [i_1] [i_0]))))));
                        arr_10 [i_0] [(unsigned short)0] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_9 [i_0] [i_0] [i_1] [i_2] [i_3]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)178)) ^ (((/* implicit */int) arr_6 [i_0])))))))) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])) : ((-(((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_7)))))))));
                        var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3] [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_5 [i_0] [i_1])))) & (((((((/* implicit */int) arr_5 [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_0] [i_1])) + (26716)))))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_2])) ? (((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (arr_1 [i_3]) : (((/* implicit */int) (unsigned char)229)))) : ((-(((/* implicit */int) arr_5 [(unsigned short)4] [i_3]))))))) ? (((((/* implicit */_Bool) arr_2 [i_2] [i_0])) ? (((/* implicit */int) arr_2 [i_3] [i_2])) : (((/* implicit */int) arr_2 [i_0] [i_1])))) : (((/* implicit */int) max((min((((/* implicit */unsigned short) arr_2 [i_2] [i_3])), (var_2))), (((/* implicit */unsigned short) ((signed char) var_0))))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0]))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (-681661712)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)19)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [4ULL] [i_0] [0ULL] [i_1] [i_1] [i_4])))))) : (arr_9 [i_0] [i_0] [i_1] [i_2] [i_4])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_4] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_4] [i_0]))))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)12)) << (((((/* implicit */int) arr_3 [i_2] [i_1])) - (15)))))), (min((((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_4] [i_0])), (3706379141U)))))));
                        arr_15 [i_1] [i_1] [i_1] [i_1] [i_2] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */unsigned int) -557009449)) : (666989689U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-52)))))));
                        arr_16 [i_0] [4ULL] [i_1] [i_4] = ((/* implicit */_Bool) 1497493363U);
                        arr_17 [i_1] [i_1] = ((/* implicit */unsigned char) (-(max((var_6), (((/* implicit */unsigned long long int) arr_12 [9] [i_1] [i_1] [i_1] [i_4]))))));
                    }
                    var_29 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_11 [i_0] [i_2] [(unsigned char)2] [i_2] [i_2]))));
                }
            } 
        } 
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (~(((/* implicit */int) (short)7959)))))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            for (unsigned char i_6 = 1; i_6 < 11; i_6 += 2) 
            {
                {
                    arr_24 [i_0] [i_6] = ((/* implicit */short) (+(((/* implicit */int) arr_23 [i_6] [(short)9] [i_6] [i_0]))));
                    var_31 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_11 [i_0] [i_0] [i_5] [i_6] [i_6])) > (((/* implicit */int) (unsigned char)156)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_14 [i_0] [i_6 + 2] [i_6] [i_6] [i_5] [i_6 + 2]))))), (min((arr_9 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) >> (((/* implicit */int) var_13)))))))));
                }
            } 
        } 
        var_32 += ((/* implicit */unsigned short) ((max((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0])), (arr_18 [i_0] [i_0] [i_0]))) | (((((/* implicit */long long int) ((/* implicit */int) arr_8 [(short)2] [i_0] [i_0] [(unsigned short)2]))) ^ (arr_18 [i_0] [i_0] [i_0])))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_27 [i_7]), (((/* implicit */unsigned long long int) arr_26 [i_7]))))) ? (min((((/* implicit */unsigned long long int) (short)896)), (arr_27 [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_26 [i_7]), (arr_26 [i_7])))))));
        var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)224)))))));
    }
}
