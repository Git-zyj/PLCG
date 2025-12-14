/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187622
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_17)))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned char) 4699391174202026302ULL))) > (min((((/* implicit */int) var_5)), (var_4)))))) : (((/* implicit */int) ((short) (-(var_7)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) (-(min((min((var_10), (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_1])))), (((/* implicit */long long int) var_18))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_2 [i_2 + 2] [i_2 + 2]))));
                    var_23 -= ((/* implicit */short) (-(max((((/* implicit */int) (unsigned char)233)), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) var_12))))))));
                    arr_8 [i_1] [i_1] [9LL] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) max((max((var_3), (var_15))), (arr_3 [i_1] [i_2 - 1]))))));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_10);
                }
                /* vectorizable */
                for (long long int i_3 = 1; i_3 < 16; i_3 += 1) /* same iter space */
                {
                    arr_12 [7LL] [i_1 - 1] [i_1] = ((/* implicit */unsigned int) arr_5 [i_0] [i_1]);
                    arr_13 [i_1] [1ULL] [i_3] = ((/* implicit */unsigned long long int) var_7);
                }
                for (unsigned int i_4 = 3; i_4 < 17; i_4 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0])) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)85)) && (((/* implicit */_Bool) var_4)))))));
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            arr_21 [i_1] [i_1] [i_4] [i_5] [i_6] = ((((/* implicit */int) ((((/* implicit */unsigned int) ((int) var_8))) < (arr_11 [i_1 - 1] [i_1] [(short)1] [i_1])))) << (((/* implicit */int) var_15)));
                            arr_22 [i_1] [3ULL] [(unsigned char)10] [i_5] [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */int) arr_18 [i_0] [i_1] [i_0] [i_5] [1LL])) - (((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_5)) - (38924)))))))));
                        }
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned int) arr_20 [i_7] [i_7] [i_7]);
                            var_26 -= ((/* implicit */signed char) (((((+(((/* implicit */int) var_1)))) > (((((/* implicit */_Bool) arr_18 [(signed char)7] [i_1] [i_4 - 3] [i_5] [i_7])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_14 [i_7] [(short)1] [i_7])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (min((((/* implicit */unsigned int) arr_14 [i_0] [i_4 - 1] [i_1 - 1])), (arr_4 [14LL] [i_4 - 1] [i_0])))));
                            var_27 = ((/* implicit */unsigned char) arr_20 [(signed char)11] [i_5] [i_7]);
                        }
                        arr_25 [i_0] [i_1] [8U] = arr_19 [(short)10] [i_1] [(unsigned short)16] [i_5] [13ULL];
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) var_8))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_1] [i_8] [(short)12] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_16 [i_1] [i_8])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_16 [i_1] [i_4 - 1])))) : (((/* implicit */int) (unsigned char)150))));
                        arr_29 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (+(arr_23 [i_4 - 3] [i_4] [i_4 - 2])));
                    }
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
                    {
                        var_29 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_4 [i_1 - 1] [i_4 + 1] [i_0])))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_1))));
                        arr_34 [i_1] [i_4 - 2] [i_1] [i_1] = ((long long int) min((((/* implicit */unsigned short) (unsigned char)105)), (var_5)));
                    }
                    var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_32 [i_4 + 1] [i_1 - 1] [i_1] [i_0])), (arr_24 [11ULL] [i_0] [i_0] [i_1] [i_4] [i_4])))) ? (((/* implicit */int) arr_2 [i_0] [i_4 - 2])) : (((((/* implicit */int) (unsigned char)102)) << (((((/* implicit */int) arr_31 [16] [i_0] [i_1 - 1] [i_4])) - (181)))))))), (4194107945443476820LL)));
                }
            }
        } 
    } 
}
