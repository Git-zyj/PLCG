/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149122
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
    var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((int) var_8)) >> (((((/* implicit */int) max((((/* implicit */short) var_8)), (var_4)))) - (104)))))), (((((/* implicit */_Bool) var_11)) ? (130664536U) : (4294967295U)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (min((130664536U), (((/* implicit */unsigned int) -235247109))))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (var_15))) : (((/* implicit */unsigned long long int) (-(max((var_14), (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_19 += ((/* implicit */short) ((long long int) ((unsigned long long int) ((int) var_11))));
                            arr_9 [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (var_0))))) : (min((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_0] [i_1])), (var_11))))), (((/* implicit */unsigned long long int) var_14))));
                            var_20 += ((/* implicit */unsigned short) max((((unsigned long long int) ((var_16) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))), (((/* implicit */unsigned long long int) var_10))));
                            var_21 = ((/* implicit */signed char) var_3);
                        }
                    } 
                } 
                var_22 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_1) > (var_1)))), (((((/* implicit */_Bool) 4057292340168609439LL)) ? (((/* implicit */unsigned long long int) 4164302760U)) : (16273882467014812222ULL)))))) ? (min((((/* implicit */long long int) var_9)), (max((var_6), (arr_7 [i_0] [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */long long int) ((int) var_2))));
                /* LoopSeq 2 */
                for (long long int i_4 = 1; i_4 < 21; i_4 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_5 = 1; i_5 < 24; i_5 += 2) 
                    {
                        arr_15 [i_0] [i_1] [i_4] [i_5 - 1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_12)) ^ (((arr_6 [i_0] [i_0] [i_0] [i_0]) >> (((var_15) - (13709389263010335829ULL)))))));
                        var_23 |= ((/* implicit */unsigned short) ((unsigned char) ((short) var_12)));
                        arr_16 [2U] [(short)8] [i_4] |= var_7;
                        arr_17 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) / (var_5)))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        arr_21 [17U] [17] [i_4] [19LL] [i_0] = ((/* implicit */int) ((unsigned short) var_8));
                        arr_22 [i_0] [i_0] [i_1] [i_0] [i_4] [i_1] = ((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) arr_1 [i_6])) - (106)))))), (max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_1] [i_1])), (var_3))))));
                    }
                    arr_23 [i_0] [i_0] [i_4 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0])) >= (((/* implicit */int) ((short) ((var_16) ? (var_15) : (((/* implicit */unsigned long long int) arr_18 [i_1]))))))));
                    var_24 = ((/* implicit */unsigned short) max((max((((var_16) ? (((/* implicit */int) var_8)) : (var_1))), (((var_5) ^ (((/* implicit */int) var_8)))))), (((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_7))) != (((/* implicit */int) arr_14 [i_4 + 2] [i_4 + 3] [i_4 + 2] [i_4 + 4] [i_4 + 3] [i_4 - 1])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 3; i_7 < 21; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 23; i_8 += 2) 
                        {
                            {
                                arr_31 [i_0] [(short)14] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_4] [i_1] [i_8]))))) ? (max((((/* implicit */long long int) var_2)), (var_13))) : (((/* implicit */long long int) max((arr_20 [i_8] [i_7] [i_4 + 4] [i_1] [i_0]), (((/* implicit */int) var_16))))))))));
                                var_25 -= ((/* implicit */long long int) ((unsigned short) max((((/* implicit */int) var_4)), (((int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                                var_26 &= ((/* implicit */short) ((((var_1) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_1] [i_4] [i_4] [i_8])) : (((/* implicit */int) var_4)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_28 [i_4 - 1] [i_4 - 1] [i_7] [24] [i_7] [i_8 - 1])) >= (arr_4 [i_4 + 2] [i_4 + 2] [i_4 + 2])))) : (((/* implicit */int) arr_1 [i_4 + 3]))));
                                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) var_5))));
                            }
                        } 
                    } 
                }
                for (long long int i_9 = 1; i_9 < 21; i_9 += 1) /* same iter space */
                {
                    var_28 = arr_8 [i_0] [i_0] [5LL] [5LL];
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (var_11)));
                }
            }
        } 
    } 
}
