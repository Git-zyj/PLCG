/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175585
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
    var_16 ^= ((/* implicit */_Bool) ((min((min((var_3), (((/* implicit */int) var_0)))), (var_15))) * (var_3)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 4; i_4 < 13; i_4 += 2) 
                        {
                            var_17 -= ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 12847287986598914874ULL))))));
                            var_18 -= ((arr_11 [i_4 + 3] [i_4] [i_4 - 2] [i_4] [i_4 + 1]) ? (0ULL) : (arr_8 [i_4 - 3] [i_4 + 2] [i_3] [i_4] [12ULL]));
                            var_19 = var_8;
                        }
                        for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            var_20 = arr_8 [i_0] [i_1] [i_1] [i_3] [i_5];
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_1] [i_1] [i_3] [i_5]) * (((/* implicit */unsigned long long int) var_7))))) ? (((arr_11 [i_5] [i_3] [i_1] [i_1] [8ULL]) ? (arr_8 [i_0] [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))))))) : (((/* implicit */int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) 2147483647)))))));
                            var_22 |= ((((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_5])) >= (arr_1 [i_5]))) ? (((/* implicit */unsigned long long int) var_3)) : (min((((((/* implicit */_Bool) var_5)) ? (arr_8 [i_5] [i_0] [i_2] [i_0] [i_0]) : (arr_2 [i_2] [i_5]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [15ULL])) == (var_6)))))));
                            arr_14 [i_0] [i_1] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) + (var_12));
                        }
                        var_23 ^= ((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_3])) < (((/* implicit */int) var_0))));
                        var_24 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (var_3)))) ? (max((arr_13 [i_0] [i_1] [i_1] [i_2] [i_3]), (var_13))) : (((var_5) << (0ULL)))));
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (((-(var_11))) >> (((var_13) - (4464014140598708531ULL))))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        arr_18 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((var_3) ^ (var_3)));
                        var_26 = ((((/* implicit */unsigned long long int) 982824544)) ^ (2334343912384189255ULL));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((int) arr_17 [i_6] [i_6] [i_6] [i_6]));
                            var_27 = ((unsigned long long int) ((((/* implicit */_Bool) -809794393)) ? (18446744073709551615ULL) : (8951217974957934935ULL)));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            var_28 += ((arr_6 [i_0] [i_2] [i_6]) - (((((/* implicit */unsigned long long int) 1320992658)) - (0ULL))));
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) var_7))));
                            arr_26 [i_0] [i_1] [i_2] [i_1] [i_6] [i_8] = ((/* implicit */_Bool) var_14);
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_6] [10ULL] [i_0] [i_0])))))));
                        }
                        arr_27 [i_1] [i_1] [i_1] [i_0] [i_1] = ((((/* implicit */unsigned long long int) var_3)) * (((((/* implicit */_Bool) 982824544)) ? (var_8) : (arr_5 [i_2]))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) ((((arr_8 [i_0] [i_0] [i_1] [i_0] [i_0]) << (((arr_1 [i_0]) + (2126728852))))) < (((unsigned long long int) (!(var_10))))));
                        arr_31 [i_1] [i_1] = ((/* implicit */_Bool) ((max((18446744073709551615ULL), (min((((/* implicit */unsigned long long int) arr_0 [i_9])), (12437834750029082687ULL))))) - (min((arr_24 [i_0] [i_1] [i_2] [i_9] [i_1] [i_1] [i_9]), (max((var_14), (((/* implicit */unsigned long long int) 2147483647))))))));
                    }
                    var_32 = 6357501625592052409ULL;
                }
            } 
        } 
    } 
}
