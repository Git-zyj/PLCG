/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178786
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
    for (int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_12 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((((/* implicit */_Bool) 3226117265U)) ? (1068850038U) : (0U))), (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]))))))), (((((/* implicit */_Bool) (-(1068850030U)))) ? (((/* implicit */long long int) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0]))))) : (min((((/* implicit */long long int) arr_1 [i_1] [i_1])), (arr_3 [i_0])))))));
                var_13 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0 + 4] [i_0 - 1] [i_0 - 1]))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_0 [i_0])), (min((arr_2 [i_0 + 3] [i_0 + 3] [i_0 - 3]), (arr_2 [i_0 - 1] [i_0 - 1] [i_0 + 3])))));
                var_14 = ((/* implicit */_Bool) max((((/* implicit */int) (!(arr_4 [i_0 + 4])))), ((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) arr_7 [i_0] [i_0 + 3] [i_0] [i_0])), (arr_10 [i_3] [i_0 + 4] [i_3]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0 + 4] [i_0 + 4])) ? (arr_9 [i_0] [i_0 - 1] [i_0] [i_0]) : (arr_9 [i_3] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 1; i_4 < 10; i_4 += 1) 
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                                var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_3])) + (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */unsigned int) (+(arr_9 [i_0] [i_0] [i_0] [i_0])))) : ((-(arr_10 [i_1] [i_1] [i_1]))))) == (((/* implicit */unsigned int) ((arr_9 [i_1] [i_1] [i_1] [i_1]) % (((/* implicit */int) ((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))))))))));
                            }
                            for (unsigned short i_5 = 2; i_5 < 8; i_5 += 4) /* same iter space */
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0 + 4]))) % (arr_15 [i_5] [i_5 + 3] [i_5 + 3] [i_5 - 2] [i_5 - 2] [i_5 - 2]))), (((/* implicit */long long int) arr_10 [i_5 - 2] [i_0 + 3] [i_0 - 3]))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5 + 3])) ? (arr_15 [i_5 + 4] [i_5 + 4] [i_5 + 4] [i_5 + 4] [i_5 + 4] [i_5 + 4]) : (arr_15 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])))) ? (((((/* implicit */_Bool) min((arr_10 [i_1] [i_1] [i_1]), (arr_8 [i_0] [i_0])))) ? (((arr_9 [i_0] [i_0] [i_0] [i_0]) ^ (((/* implicit */int) arr_0 [i_1])))) : (arr_9 [i_0 + 3] [i_5 - 2] [i_0 + 3] [i_0 + 3]))) : (min((((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_0 + 4] [i_0])), (arr_2 [i_5 - 1] [i_0 - 3] [i_0 + 4])))));
                            }
                            for (unsigned short i_6 = 2; i_6 < 8; i_6 += 4) /* same iter space */
                            {
                                var_18 = ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0]))) <= (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))))) / (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((arr_7 [i_0] [i_0 - 1] [i_6 - 2] [i_6 + 1]) ? (((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_6 + 3] [i_6 + 2])) : (((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_6 + 1] [i_6 - 1]))))), (((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */unsigned int) arr_9 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 1])) : (arr_8 [i_0 + 2] [i_0 + 2])))));
                            }
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_0])) * (((/* implicit */int) ((((/* implicit */int) arr_17 [i_0])) < (((/* implicit */int) arr_17 [i_0])))))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((((-1152921504606846976LL) + (9223372036854775807LL))) >> (((-2243182108408101472LL) + (2243182108408101497LL))))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0 - 1]) >= (((/* implicit */long long int) max((arr_8 [i_2] [i_2]), (((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_1] [i_1]))))))))))))));
                            var_20 = (((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])))) ? (arr_10 [i_0 + 4] [i_0 + 4] [i_0 + 4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_0)))) && (((/* implicit */_Bool) var_3))))) >= (((/* implicit */int) var_5))));
    var_22 = (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_9)), (var_0))), (var_0)))));
    var_23 = min((((/* implicit */unsigned int) var_9)), (var_0));
}
