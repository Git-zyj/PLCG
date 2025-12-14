/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16345
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min(((~(arr_0 [i_1 - 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_2 [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 2])))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [(signed char)9] [4LL] [i_2] [6ULL] [i_4] = ((/* implicit */signed char) arr_10 [i_4] [5] [5] [i_4 - 1] [i_4] [i_4 - 1]);
                                var_18 = max((max((((/* implicit */unsigned long long int) arr_1 [i_2])), (((var_1) / (var_12))))), (max((((/* implicit */unsigned long long int) var_15)), (min((arr_10 [4ULL] [i_1 + 1] [(signed char)4] [(_Bool)0] [i_4] [i_1]), (((/* implicit */unsigned long long int) var_0)))))));
                                var_19 = ((/* implicit */unsigned long long int) var_4);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((((unsigned char) ((_Bool) (signed char)(-127 - 1)))), (((/* implicit */unsigned char) var_8))));
}
