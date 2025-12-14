/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133875
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned int) var_3);
                            var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((var_4) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))))) : (var_5))))));
                        }
                    } 
                } 
                var_12 = (-(((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_2))))) : (var_1))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (+((~(var_7)))));
    var_14 = ((/* implicit */unsigned long long int) ((long long int) var_4));
}
