/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168575
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
    var_15 = ((/* implicit */_Bool) max(((-(((/* implicit */int) (short)-28996)))), (max((((((/* implicit */int) var_0)) + (((/* implicit */int) var_11)))), (((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max(((-(arr_2 [i_1]))), (arr_2 [i_1])));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                            var_17 ^= ((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) max((var_6), (((/* implicit */short) arr_3 [(unsigned short)19] [i_1] [i_2]))))), (arr_5 [i_3]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
