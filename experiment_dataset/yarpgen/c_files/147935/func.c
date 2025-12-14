/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147935
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_17 = ((((/* implicit */_Bool) 610381667605754970LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (610381667605754978LL))))))) : (((/* implicit */int) (unsigned short)50591)));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_13 [i_1] [i_3] [i_0] [i_3] [i_0] = ((/* implicit */int) arr_4 [i_0]);
                                var_18 = ((/* implicit */unsigned short) max((((/* implicit */int) (signed char)-64)), (268435456)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (+(522174977U)));
    var_20 += ((/* implicit */unsigned long long int) var_0);
}
