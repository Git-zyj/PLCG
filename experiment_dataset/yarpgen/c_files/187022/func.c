/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187022
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
    var_14 = ((/* implicit */signed char) (((~(0U))) ^ (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) ^ (max((((/* implicit */unsigned long long int) var_10)), (arr_1 [i_0])))))));
                            arr_9 [i_0] [i_1 - 1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_1 - 3] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4096))) : (var_7))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_12)))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) max((var_16), (arr_2 [i_0] [i_1] [i_1 + 1])));
            }
        } 
    } 
}
