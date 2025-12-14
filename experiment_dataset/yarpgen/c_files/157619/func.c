/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157619
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 &= ((/* implicit */unsigned char) max(((+(var_1))), (((/* implicit */long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0])) + (7224))))))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            var_11 += ((/* implicit */unsigned char) ((unsigned short) max((((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [6LL])) : (var_9)))))));
            arr_5 [i_0] [(signed char)10] [i_1 + 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((112U) >> (((var_6) - (390183943U))))), (((/* implicit */unsigned int) max((arr_2 [i_0] [i_0] [i_1]), (((/* implicit */short) (_Bool)1))))))))));
            arr_6 [(signed char)0] [i_1] = ((/* implicit */int) 112U);
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_13 [i_2] [1LL] [i_2] [i_3] = min((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_2)))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_3 + 2] [i_1] [i_0])) << (((arr_9 [i_0]) - (17201225664733072585ULL))))))))), (max((((/* implicit */unsigned int) ((signed char) arr_10 [i_0] [i_0] [i_1] [i_2] [i_3 + 1]))), (var_2))));
                        var_12 = ((/* implicit */unsigned char) (-(min((((/* implicit */int) arr_1 [i_2] [i_3])), (min((var_3), (((/* implicit */int) var_8))))))));
                        var_13 = ((/* implicit */long long int) max((min((arr_9 [i_3 + 2]), (arr_9 [i_3 - 1]))), (arr_9 [i_0])));
                    }
                } 
            } 
            arr_14 [(unsigned short)21] [(unsigned short)21] [i_1 + 2] = ((/* implicit */unsigned int) arr_12 [i_1 + 2] [i_1] [i_0] [i_0]);
        }
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((((unsigned int) (-(var_4)))), (((/* implicit */unsigned int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (signed char i_4 = 1; i_4 < 18; i_4 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) (short)-15405);
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4] [i_4] [i_4]))) >= (var_4))))));
        var_17 &= ((((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [i_4] [18]))) : (310437030U))) >> (((/* implicit */int) ((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4] [i_4] [i_4]))) : ((+(var_4)))));
            var_19 *= ((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) < (((((/* implicit */int) arr_7 [i_5] [3U] [i_5])) * (((/* implicit */int) (short)-31228))))));
            var_20 = ((/* implicit */_Bool) var_3);
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) var_9)))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_22 [i_6] = ((/* implicit */short) (_Bool)1);
            var_22 += ((/* implicit */short) -872113759);
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            arr_25 [i_4] [(signed char)11] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4U)) ? (((/* implicit */int) arr_7 [i_4 + 1] [i_4] [1])) : (((/* implicit */int) arr_12 [i_4] [i_4] [i_4] [i_4])))) * (((/* implicit */int) arr_11 [i_4 - 1]))));
            var_23 = ((/* implicit */short) ((((unsigned long long int) var_2)) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_7] [i_7]))))))));
        }
        arr_26 [i_4] [i_4] = ((/* implicit */unsigned short) arr_2 [i_4] [i_4] [i_4]);
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 3; i_8 < 20; i_8 += 3) 
    {
        arr_31 [i_8] = ((/* implicit */int) ((((int) var_3)) == ((-(var_9)))));
        arr_32 [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_30 [i_8 + 1]))));
        var_24 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_27 [i_8 + 2])) ? (((/* implicit */unsigned long long int) 1569636107)) : (1275760903746089223ULL))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))));
    }
    var_25 = ((/* implicit */unsigned int) -8656744704841922457LL);
    var_26 &= ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)2734)) | (((/* implicit */int) (unsigned char)253))))), (((var_5) >> (((((/* implicit */int) (unsigned short)27425)) - (27390))))))), (min((((var_5) & (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13738179565166316711ULL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53))))))))));
    var_27 = ((/* implicit */_Bool) (unsigned short)27425);
}
