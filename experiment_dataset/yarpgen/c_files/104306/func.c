/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104306
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
    var_16 = ((unsigned long long int) max((min((var_15), (var_3))), (var_9)));
    var_17 = min((7634143345967736654ULL), (min((max((18446744073709551615ULL), (0ULL))), (((var_15) * (var_13))))));
    var_18 = var_9;
    var_19 += var_12;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 = ((((((/* implicit */_Bool) arr_3 [15ULL] [i_1])) ? (arr_1 [14ULL] [i_1]) : (arr_3 [i_1] [i_1]))) + (((unsigned long long int) arr_1 [i_0] [i_1])));
                var_21 = max((var_0), (((((var_13) * (var_9))) >> (((((((/* implicit */_Bool) var_11)) ? (arr_3 [i_0] [i_0]) : (arr_1 [i_0] [i_1]))) - (13837328704872770620ULL))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_22 = max((max((arr_7 [i_2]), (arr_7 [i_2]))), (((((/* implicit */_Bool) arr_7 [i_2])) ? (var_9) : (var_0))));
                            var_23 = (((+(max((arr_9 [i_0] [i_3]), (14016588905007282419ULL))))) + (max((var_15), (((unsigned long long int) 18446744073709551615ULL)))));
                        }
                    } 
                } 
                var_24 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_10 [i_1] [i_1] [i_0] [1ULL] [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) > (10055237835789493940ULL))))))))));
                var_25 = (-(min((var_4), (var_14))));
            }
        } 
    } 
}
