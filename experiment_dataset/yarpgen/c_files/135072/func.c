/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135072
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) / (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (arr_0 [i_0])));
        var_18 ^= ((/* implicit */_Bool) min((max(((-(arr_0 [i_0]))), (arr_0 [i_0]))), (arr_1 [i_0] [i_0])));
        var_19 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (max((((/* implicit */unsigned int) (signed char)-108)), (3979609144U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 2; i_3 < 20; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        {
                            arr_13 [i_2] [i_1] [i_3 - 1] [i_4] = ((/* implicit */long long int) ((unsigned int) arr_9 [i_2]));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(arr_4 [i_1 + 2]))))));
                            arr_14 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_10 [i_3 - 2] [i_3 - 2] [i_2]), (arr_10 [i_3 + 1] [i_3] [i_2])))) ? (((arr_4 [i_1 + 3]) ? (((/* implicit */long long int) arr_6 [i_1 + 1])) : (max((((/* implicit */long long int) arr_4 [i_1])), (arr_3 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_10 [i_1] [i_2] [i_2]), (arr_10 [i_2] [i_3] [i_2])))))));
                            var_21 = arr_9 [i_2];
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) arr_3 [i_1 + 2]);
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */unsigned long long int) var_5)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))), (max((((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) var_10))))));
}
