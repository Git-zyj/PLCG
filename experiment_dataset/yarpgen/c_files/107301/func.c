/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107301
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
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned char) (~((-(var_6)))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) (~((~(var_2)))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 19; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */int) (~(var_2)));
                            var_14 ^= ((/* implicit */int) ((unsigned char) (~(var_2))));
                            var_15 = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) ((short) (+(var_1))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */short) ((unsigned long long int) var_0));
    var_18 = ((/* implicit */long long int) var_0);
}
