/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155360
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
    var_15 += ((((/* implicit */unsigned long long int) var_3)) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (12398065529218684705ULL) : (var_13)))) ? (((/* implicit */unsigned long long int) (~(var_14)))) : (max((var_9), (var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_16 = ((((((/* implicit */_Bool) arr_4 [i_1 - 3] [i_3 + 1])) ? (arr_4 [i_1 - 3] [i_3 + 1]) : (arr_4 [i_1 - 3] [i_3 + 1]))) - (max((arr_4 [i_1 - 3] [i_3 + 1]), (arr_4 [i_1 - 3] [i_3 + 1]))));
                            var_17 = ((/* implicit */unsigned long long int) ((int) max(((!(((/* implicit */_Bool) 7997104806608109871ULL)))), ((!(((/* implicit */_Bool) 11388258152247981862ULL)))))));
                            /* LoopSeq 2 */
                            for (int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                            {
                                arr_13 [i_0] [5ULL] [i_2] [i_3 + 3] [i_3] [i_4] = max((((((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_2] [9] [i_0])) ? (7058485921461569753ULL) : (((/* implicit */unsigned long long int) 2147483647)))), (max((((/* implicit */unsigned long long int) arr_11 [6] [i_2] [i_2] [i_3 + 3] [i_4])), (7997104806608109871ULL))));
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_2 [i_0] [i_2] [i_4])))) ? ((-(arr_3 [9]))) : (((/* implicit */unsigned long long int) arr_12 [i_2] [i_1 - 3] [i_0]))));
                                var_19 += ((/* implicit */unsigned long long int) -1808534088);
                                arr_14 [i_0] [7] [i_2] [i_3] [i_4] = var_1;
                                arr_15 [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((arr_8 [i_3 + 3] [i_1 - 3] [i_1 - 2]) + (2147483647))) >> ((((~(var_6))) - (2011251822)))))) > (7997104806608109871ULL)));
                            }
                            for (int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
                            {
                                arr_18 [i_0] [i_1 + 1] [0ULL] = max((var_9), (((((/* implicit */_Bool) max((10449639267101441745ULL), (arr_9 [i_5] [4ULL])))) ? (arr_7 [i_3 - 1] [i_3] [i_5] [i_3 - 1]) : (var_12))));
                                var_20 += ((/* implicit */int) ((((/* implicit */_Bool) 11388258152247981862ULL)) || (((/* implicit */_Bool) -1808534088))));
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_17 [i_1 - 1] [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_5]) : (arr_12 [i_1 + 2] [i_3 + 1] [i_3 + 3])))) ? (((18446744073709551615ULL) / (var_12))) : (((/* implicit */unsigned long long int) arr_8 [i_1 - 3] [i_3 + 3] [i_3 + 1]))));
                            }
                        }
                    } 
                } 
                var_22 -= (~(((13260131793462758927ULL) + ((-(7058485921461569753ULL))))));
                arr_19 [i_0] = ((((11512423656701189347ULL) | (((/* implicit */unsigned long long int) arr_11 [i_0] [12ULL] [i_0] [i_0] [i_1 - 2])))) ^ (((/* implicit */unsigned long long int) (-(8388592)))));
            }
        } 
    } 
}
