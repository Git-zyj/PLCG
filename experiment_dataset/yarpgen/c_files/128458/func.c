/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128458
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
    var_20 ^= ((/* implicit */short) var_8);
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((short) (_Bool)1)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_22 += var_18;
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        {
                            var_23 += ((/* implicit */int) (_Bool)1);
                            var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) ((int) -1464279944))) ? ((~(((/* implicit */int) arr_0 [i_3 - 1])))) : ((~(((/* implicit */int) arr_0 [i_2]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
