/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121672
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (unsigned char)246)))), ((((+(0))) % ((+(((/* implicit */int) (unsigned char)246))))))));
                var_12 = ((/* implicit */int) min((var_12), (((((/* implicit */_Bool) min(((unsigned char)187), ((unsigned char)64)))) ? (((arr_3 [i_0 - 1] [i_1]) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_1])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0])))) : (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) arr_3 [i_0 - 3] [i_1])))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 3; i_2 < 22; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) arr_7 [i_0] [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [i_0] [i_1] [i_3] [i_0] [i_0] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned char)88)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (arr_7 [i_1] [i_2]) : (4294967295U)))));
                                arr_13 [i_0] [i_1] [i_0] [i_4] [i_4] = ((/* implicit */unsigned int) ((long long int) arr_11 [i_3] [i_1 - 3] [i_2 - 2] [i_0] [i_4]));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_1 + 2] [i_2]));
                }
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_8 [i_0] [i_1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (7U) : (arr_5 [i_0] [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (7134664627964226777ULL) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_1]))))))) ? (((((/* implicit */_Bool) ((6U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)167)))))) ? (3750896830084085862ULL) : (((((/* implicit */unsigned long long int) 7U)) | (17517324213751611936ULL))))) : (((/* implicit */unsigned long long int) (-(arr_8 [i_0] [i_1])))))))));
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_0 - 1] [i_1]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 1] [i_0])) ? (arr_10 [i_0] [i_0 - 2] [i_1] [i_1] [i_1]) : (arr_10 [i_0] [i_0 - 2] [i_0] [i_1] [i_1]))) : ((-(arr_10 [i_0] [i_0 + 1] [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_15 = max((((((/* implicit */_Bool) min((var_2), (((/* implicit */int) var_7))))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) min((18U), (((/* implicit */unsigned int) (_Bool)1))))));
    var_16 = ((long long int) ((((((/* implicit */_Bool) 1978177731U)) && (((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) var_4)) ? (1912362723041740502ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) var_0)))))));
}
