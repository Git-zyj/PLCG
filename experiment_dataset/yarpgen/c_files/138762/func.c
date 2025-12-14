/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138762
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) var_12)) : (((((((/* implicit */_Bool) var_12)) ? (var_7) : (var_1))) / ((-(var_2)))))));
    var_21 = (+(2403567872U));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 7; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((arr_7 [i_2]) - (arr_7 [i_2]))) != (max((((/* implicit */long long int) arr_9 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 + 1])), (arr_1 [i_1 + 1])))));
                        /* LoopSeq 4 */
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3 + 3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8323072U)) ? (7590116939332052060LL) : (min((((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_7 [i_2]) : (((/* implicit */long long int) 8323075U)))), (((/* implicit */long long int) arr_3 [i_0] [i_1 + 1] [i_2]))))));
                            var_22 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 1] [0LL] [i_1] [0LL]))) ? (min((arr_10 [i_3] [i_0] [i_0]), (1072693248U))) : (var_4)))) > (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [2U])) ? (((1LL) * (((/* implicit */long long int) 4294967291U)))) : (((/* implicit */long long int) ((unsigned int) 1277761745U)))))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */long long int) var_9)) < (min(((-(arr_7 [i_2]))), (((/* implicit */long long int) ((arr_14 [i_1] [i_0] [i_2]) < (3172270004U))))))));
                            arr_16 [i_0] [i_1 + 1] [9LL] [i_2] [i_4] [i_0] [i_3 + 1] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_14 [i_3 + 2] [i_1 - 1] [i_1 - 1])) ? (arr_14 [i_3 + 1] [5LL] [i_1 - 1]) : (arr_4 [i_1 + 1] [i_1 - 1] [i_1 + 1]))));
                            arr_17 [i_0] [i_0] [i_2] [i_0] [i_4] &= ((/* implicit */unsigned int) (+(max((max((((/* implicit */long long int) var_11)), (arr_1 [6U]))), (var_19)))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
                        {
                            arr_20 [i_0] [i_2] [i_0] [i_0] [i_0] = (~(arr_12 [i_5] [i_1] [i_5] [i_5] [i_3 + 3] [i_1]));
                            var_24 = ((/* implicit */long long int) var_5);
                            var_25 |= ((((unsigned int) 4294967284U)) >> (((((((/* implicit */_Bool) arr_19 [i_3 + 1] [i_3 + 3] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 3])) ? (arr_19 [i_3 + 1] [i_3 + 3] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 3]) : (arr_19 [i_3 + 1] [i_3 + 3] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 3]))) - (326734440U))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) -6497483691628840741LL)) && (((/* implicit */_Bool) 4294967284U)))))) ? (((/* implicit */long long int) arr_9 [3U] [i_1 - 1] [i_3 + 3] [i_6])) : (4LL)));
                            var_27 = ((/* implicit */unsigned int) ((var_18) <= (((/* implicit */long long int) (-(min((var_13), (arr_9 [i_0] [i_1 + 1] [i_1] [i_1 + 1]))))))));
                            var_28 = ((((((/* implicit */_Bool) (~(arr_13 [1LL] [i_1] [i_2] [i_1 - 1] [i_1] [i_1 + 1])))) ? (((long long int) -1936224635056322687LL)) : (((/* implicit */long long int) min((5U), (4294967295U)))))) / (((long long int) max((1891399423U), (var_14)))));
                            arr_23 [i_0] [i_1] [i_2] [i_1] [i_0] [i_6] &= ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((3180008317829692201LL) + (((/* implicit */long long int) var_12))))) ? (((((/* implicit */_Bool) var_18)) ? (arr_13 [i_6] [i_1] [i_2] [i_1 - 1] [i_1] [i_0]) : (arr_4 [i_6] [i_3] [i_1]))) : (((unsigned int) arr_3 [i_3] [i_2] [i_0]))))));
                        }
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (arr_1 [i_1 - 1]) : (var_2))))));
                            var_30 = ((/* implicit */unsigned int) arr_26 [i_1] [i_2] [i_1] [i_3 - 1] [i_1] [i_2]);
                            var_31 = ((/* implicit */unsigned int) (~(511LL)));
                            var_32 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((1665719665875457250LL), (((/* implicit */long long int) arr_22 [i_0] [i_1] [i_2] [9U] [i_2] [i_3] [i_7]))))) ? (((((/* implicit */_Bool) var_15)) ? (1191769711441504220LL) : (((/* implicit */long long int) arr_9 [i_0] [i_0] [6U] [i_0])))) : (((/* implicit */long long int) var_12))))));
                        }
                    }
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned int) (-(arr_29 [i_0])));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 1; i_9 < 9; i_9 += 1) 
                        {
                            var_34 = ((/* implicit */long long int) max((var_34), ((-(((((/* implicit */_Bool) arr_2 [i_9 - 1] [i_1 - 1] [8LL])) ? (arr_2 [i_9 + 1] [i_1 - 1] [i_9 + 1]) : (arr_2 [i_9 + 1] [i_1 + 1] [i_1])))))));
                            arr_33 [i_1] [i_9] [i_9] [i_9] [i_2] [4U] = ((/* implicit */unsigned int) ((min(((-(arr_29 [i_0]))), (max((((/* implicit */long long int) arr_13 [3LL] [i_2] [i_2] [8LL] [i_9 + 1] [i_9 - 1])), (var_17))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) 120974697U)) ? (arr_10 [i_0] [i_1 + 1] [i_9 + 1]) : (var_8))))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            arr_37 [i_0] [i_2] [i_2] [i_2] [3LL] = ((/* implicit */long long int) arr_10 [i_0] [i_1] [i_2]);
                            arr_38 [i_2] [i_1] [i_0] [i_10] [i_8] [i_2] [7LL] = 1210284798U;
                        }
                    }
                    arr_39 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) 3241221426U)), ((-(((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) var_9)) : (arr_29 [i_0])))))));
                }
            } 
        } 
    } 
}
