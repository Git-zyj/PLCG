/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13659
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2424684931U)) ? (1902660613) : (((/* implicit */int) (signed char)-24))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 0LL)))) : (((unsigned long long int) (-2147483647 - 1)))))));
        arr_4 [i_0] [0U] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) (short)-1))) * (arr_2 [i_0]))))))));
    }
    var_17 = var_0;
    /* LoopNest 3 */
    for (long long int i_1 = 2; i_1 < 17; i_1 += 2) 
    {
        for (short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) (((~(max((((/* implicit */unsigned long long int) arr_16 [i_4] [i_3] [i_2] [i_1])), (0ULL))))) >> (((max((arr_15 [i_1 - 2] [i_2] [i_1 + 1] [(short)2]), ((~(arr_10 [i_1]))))) - (17421399733480715325ULL)))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_5] = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) arr_17 [i_1] [11ULL] [i_1] [i_1] [i_1 - 1])))), (((((((/* implicit */_Bool) -334005837)) ? (18446744073709551587ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114))))) >= (arr_13 [i_3])))));
                            arr_20 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned short) arr_6 [i_1] [i_4]);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 4294967295U)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)25408)) : (((/* implicit */int) arr_5 [i_1 + 1])))) : (((/* implicit */int) ((unsigned char) 6401283611837669480ULL)))));
                            arr_24 [i_1] [i_2] [i_6] [i_6] = ((((((/* implicit */int) (signed char)-35)) + (2147483647))) >> (((14246474710281992223ULL) - (14246474710281992213ULL))));
                        }
                        arr_25 [i_1] [i_2] [i_3] = ((/* implicit */short) (unsigned short)62800);
                        arr_26 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_4]))) & (arr_17 [i_1 + 1] [i_1] [i_1] [i_1] [i_1 - 2])))) ? (arr_13 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1668416258U))))))));
                    }
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_3))));
                    var_21 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) ((int) (short)-14480))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1] [i_3])))))))), (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_12 [i_1] [i_2] [i_3])) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) var_5))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) ? (var_4) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3)))) : (11ULL))))));
}
