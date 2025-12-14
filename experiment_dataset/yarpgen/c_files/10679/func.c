/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10679
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
    var_14 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
                {
                    arr_9 [i_1] [i_1] [i_1 - 1] [i_2] = ((/* implicit */short) arr_2 [i_1]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((max((7582604875751708867LL), (((/* implicit */long long int) (signed char)27)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_5 [i_2]), (var_9))))) * (min((2790098904U), (((/* implicit */unsigned int) (unsigned short)0))))))))))));
                                var_16 = ((/* implicit */unsigned short) min((max((arr_0 [i_0 - 2]), (arr_3 [i_1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0 - 2])))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0 + 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)33)) | (((/* implicit */int) (unsigned char)8))));
                }
                for (long long int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                {
                    arr_19 [i_0 + 1] [i_1] [i_5] [i_1] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_1)), (arr_3 [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)209)) >> (((1990727003U) - (1990726976U))))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((max((min((arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) ((var_3) && (((/* implicit */_Bool) var_1))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_5]))))))))));
                                var_18 ^= ((/* implicit */unsigned short) (+(max((((/* implicit */int) var_2)), (arr_17 [i_7] [i_1 - 1] [i_6 + 1] [i_1])))));
                                arr_25 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))))), (min((arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]), (arr_22 [i_7] [i_6 + 1] [i_5] [i_1 - 1] [i_0]))))))));
                                arr_26 [i_1] [i_1] = ((/* implicit */short) min((min((arr_22 [i_0] [i_0 + 1] [i_0 - 2] [i_1 - 1] [i_6 + 1]), (arr_22 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_1 - 1] [i_6 + 1]))), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_7] [i_6] [i_5] [i_1 - 1] [i_0])) || (((/* implicit */_Bool) arr_3 [i_1]))))) <= (((/* implicit */int) var_0)))))));
                                var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)-20466)) ? (((/* implicit */int) arr_12 [i_7] [i_1] [i_5] [i_1] [i_0 - 2])) : (((/* implicit */int) (signed char)9))))));
                            }
                        } 
                    } 
                }
                for (long long int i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
                {
                    arr_30 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) && (((((/* implicit */int) var_6)) == (((/* implicit */int) arr_1 [i_0 - 2]))))));
                    arr_31 [i_1] = ((/* implicit */unsigned char) max(((+(min((((/* implicit */unsigned long long int) var_11)), (arr_28 [i_8] [i_1] [i_0 - 1]))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_18 [i_0 - 2])))) ? (((/* implicit */int) ((arr_16 [i_0] [i_1] [i_8]) == (arr_21 [i_8] [i_1] [i_1] [i_1] [i_1] [i_0 - 1])))) : (((/* implicit */int) var_1)))))));
                }
                arr_32 [i_1] = min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111))) - (10416601265750639393ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)95))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (arr_4 [i_1 - 1] [i_0])))), ((+(10416601265750639406ULL))))));
            }
        } 
    } 
}
