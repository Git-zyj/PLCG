/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125660
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
    var_20 = ((/* implicit */short) ((long long int) var_8));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)15)), (532676608)))) ? (((/* implicit */int) var_15)) : ((~(((/* implicit */int) (short)3792))))));
                    var_22 += ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1)))));
                }
                var_23 = ((/* implicit */unsigned short) var_5);
                var_24 = ((/* implicit */long long int) arr_4 [i_0] [i_0]);
            }
        } 
    } 
}
