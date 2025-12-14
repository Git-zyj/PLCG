/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104945
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
    var_17 = ((long long int) 897699655);
    var_18 = ((unsigned int) ((((/* implicit */_Bool) var_11)) ? (var_11) : (((var_10) ? (((/* implicit */long long int) 1964174977)) : (9215475011662212701LL)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_4);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_19 = ((long long int) min((2826594778625464865LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) var_6)) / (3032809402U))))));
                                arr_14 [i_0] [i_4] [i_4] [i_4] [i_4] [i_3] = ((/* implicit */_Bool) var_1);
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_4] |= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) -1964174978)) && (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_3] [i_2 - 2] [i_2 - 2])))))));
                                arr_16 [i_0] [i_4] = ((/* implicit */int) ((unsigned int) 16LL));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
