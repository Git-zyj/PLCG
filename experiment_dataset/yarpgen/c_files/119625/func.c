/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119625
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_10 &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((arr_3 [17U] [i_2]), (((/* implicit */long long int) var_2))))) || ((!(var_9))))), (var_7)));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 24; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) var_0);
                                arr_15 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [i_0 + 1] [i_4] [i_1] = ((/* implicit */unsigned char) var_1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_3))))), (var_3)));
    var_13 = ((/* implicit */unsigned char) var_1);
}
