/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120362
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) > (var_9)));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) ((var_12) << (((var_13) - (7117007490361599191LL))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) 2695024097U);
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((1599943212U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_21 ^= ((/* implicit */_Bool) (unsigned short)12288);
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((((((34359738352LL) - (((/* implicit */long long int) 2090767272U)))) - (34359738358LL))) + (9223372036854775807LL))) >> (((/* implicit */int) ((34359738352LL) != (((/* implicit */long long int) 1599943198U))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
