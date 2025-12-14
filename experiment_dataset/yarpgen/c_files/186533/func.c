/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186533
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
    var_20 = var_19;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1962496384U))))) == (((/* implicit */int) ((short) 2332470912U)))));
                var_22 = ((/* implicit */signed char) ((min((((/* implicit */long long int) var_0)), (4486007441326080LL))) << ((((~(((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */int) (unsigned short)54927)) : (((/* implicit */int) var_0)))))) + (54967)))));
            }
        } 
    } 
}
