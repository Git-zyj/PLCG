/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161620
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
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) (+((~(arr_10 [i_0 + 1] [i_2] [i_2] [i_4] [i_4] [i_4])))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (max((arr_10 [i_0 + 2] [i_0] [i_0 - 1] [i_1 - 2] [i_1 - 2] [i_2]), (arr_10 [i_0 - 1] [i_0 + 3] [i_0 - 1] [(short)7] [i_1 - 2] [i_2])))));
                                var_23 = ((/* implicit */short) (+(((/* implicit */int) (signed char)6))));
                                var_24 = ((/* implicit */unsigned int) 259868051);
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) ((((long long int) var_14)) / (((/* implicit */long long int) ((/* implicit */int) max((arr_8 [i_1] [i_1] [i_1] [i_1 - 1]), (arr_8 [i_1] [i_1] [i_1] [i_1 - 1])))))));
            }
        } 
    } 
}
