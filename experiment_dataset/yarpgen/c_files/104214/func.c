/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104214
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
    var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned char) 4265236543U);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (long long int i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (+(((/* implicit */int) (signed char)27)))))));
                            var_14 = ((/* implicit */int) (~(max((((((/* implicit */_Bool) 8U)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) (~(var_4))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_5))));
}
