/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188379
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
    var_15 = max((-2147483638), ((-2147483647 - 1)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 4; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_16 -= ((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)0)))) >= (((/* implicit */int) min((((1069547520U) >= (((/* implicit */unsigned int) 0)))), ((!(((/* implicit */_Bool) var_2)))))))));
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((var_4) != (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (1393475378) : (((/* implicit */int) (_Bool)1))))), ((-(var_9))))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) ((((((min(((-2147483647 - 1)), (var_0))) + (2147483647))) + (2147483647))) >> (((/* implicit */int) ((((((/* implicit */_Bool) -2147483638)) ? (((/* implicit */long long int) var_4)) : (var_14))) == (max((var_7), (((/* implicit */long long int) 1220468713)))))))));
                }
            } 
        } 
    } 
}
