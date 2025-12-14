/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144203
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 += ((/* implicit */short) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2918141048U)) ? (-142976256) : (((/* implicit */int) (_Bool)0))))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(short)4])) ? (9223372036854775807LL) : (((/* implicit */long long int) var_14)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_16 = arr_5 [i_1];
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0])) != (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_12 [i_0] [i_0] [i_4] [i_3] [i_4] [i_0])) / (-9152506771429874340LL)))) ? (var_13) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2918141056U)) ? (1601490036) : (((/* implicit */int) (short)4080)))))))));
                            }
                        } 
                    } 
                    var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) 1601490036))))), (var_3)))) || (((min((((/* implicit */unsigned int) var_0)), (arr_5 [i_0]))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 1] [i_1] [i_1 + 1] [i_1] [i_0] [i_1 + 1])))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) min((max((min((2900214703469792719LL), (((/* implicit */long long int) var_1)))), (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33942))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) (short)4080)), (var_4)))))))));
}
