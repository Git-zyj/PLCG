/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119299
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
    var_12 = ((/* implicit */long long int) (_Bool)1);
    var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned int) 1516300423)) & (var_5)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_4 = 3; i_4 < 13; i_4 += 3) 
                            {
                                var_14 = ((((/* implicit */_Bool) (unsigned short)3)) ? (8558025846751783748LL) : (-8558025846751783748LL));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */int) ((short) (_Bool)1))) << (((((((/* implicit */_Bool) arr_16 [i_4 - 3] [i_4 - 1] [i_1] [i_2 + 3] [i_1] [i_1])) ? (arr_16 [i_4 + 1] [4LL] [i_2] [i_2 + 3] [i_2 - 1] [(short)12]) : (arr_15 [i_4 - 2] [(_Bool)1] [10] [i_4 - 3] [i_2 + 2] [(_Bool)1] [8LL]))) - (8825675837956662597LL))))))));
                                var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (short)127)), (524287))))));
                                arr_17 [i_3] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) arr_0 [i_4]);
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_2))));
                            }
                            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                arr_22 [(short)7] [i_3] [i_2] [i_3] [i_5] [i_1] [5LL] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_18 [i_0] [(short)9] [4LL] [i_2 + 3] [i_3 + 1] [i_3])) / (-524285)))));
                                arr_23 [i_0] [(signed char)13] [i_1 - 1] [i_3] [i_3] [i_5 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [6U] [i_2 + 3] [i_3 + 1])) ? (((/* implicit */long long int) 3177598427U)) : (max((arr_21 [i_2] [i_1 - 1] [i_2] [i_3] [i_3] [0]), (((/* implicit */long long int) var_6))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((arr_2 [i_5 - 1]) && (((/* implicit */_Bool) arr_10 [i_3] [(_Bool)1] [3LL] [i_5 - 1] [i_0] [i_2 + 3])))) && (((/* implicit */_Bool) 1121501860331520LL)))))) : (min((2849296571506843099LL), (((/* implicit */long long int) (_Bool)1)))));
                            }
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                var_18 = ((/* implicit */unsigned int) arr_13 [i_0] [i_3] [i_3] [i_3] [i_6]);
                                arr_28 [i_3] [i_6] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_3] [i_3 + 1] [i_2 + 3] [i_3] [i_1 - 1])) ? (arr_9 [i_6] [i_3] [i_3 + 1] [i_2 + 3] [i_3] [i_1 - 1]) : (((/* implicit */unsigned int) -341210283)))), (((/* implicit */unsigned int) ((arr_5 [i_1 - 1]) ? ((~(((/* implicit */int) arr_5 [3])))) : (((((-524287) + (2147483647))) >> (15U))))))));
                                arr_29 [i_0] [i_1] [i_3] [i_3 + 1] [i_1] = ((/* implicit */int) 1624522825U);
                                arr_30 [i_0] [i_1] [i_2 + 1] [i_3] [i_3] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) 341210305)) ? (1095726619U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-87)))));
                            }
                            var_19 = ((/* implicit */long long int) (~(arr_3 [i_2 + 1])));
                            arr_31 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_15 [i_1 - 1] [i_3] [i_2 + 3] [(_Bool)1] [14U] [10U] [i_2 + 1]), (((/* implicit */long long int) arr_10 [i_3] [i_3] [i_0] [i_2 - 1] [(signed char)5] [14LL]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 31U)))))) : (max((arr_15 [i_1 - 1] [i_3] [i_2] [(unsigned short)8] [(unsigned short)8] [i_2] [i_2 + 1]), (((/* implicit */long long int) 2123930346U))))));
                            /* LoopSeq 1 */
                            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                            {
                                var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-27126)) ? (((/* implicit */unsigned int) 488540250)) : (1624522819U)));
                                var_21 = ((/* implicit */int) min((1624522825U), (1095726619U)));
                            }
                        }
                    } 
                } 
                var_22 = (+((+(((/* implicit */int) (short)25603)))));
                var_23 += ((/* implicit */_Bool) 0U);
            }
        } 
    } 
}
