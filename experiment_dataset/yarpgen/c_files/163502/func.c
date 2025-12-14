/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163502
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 += ((/* implicit */long long int) arr_0 [7ULL]);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_18 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_15)))))) | (((((var_15) - (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_3]))))) << (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)12463)))) + (19)))))));
                            var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [i_2] [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_9);
}
