/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138641
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) (~(1371919161U)));
                var_21 &= ((short) (-((+(var_18)))));
                var_22 ^= ((/* implicit */short) (+(((/* implicit */int) var_8))));
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)1)))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_15);
    var_24 = ((/* implicit */short) ((((/* implicit */int) ((2923048138U) < (2923048149U)))) >= (((/* implicit */int) ((((/* implicit */_Bool) (signed char)100)) || (((/* implicit */_Bool) (signed char)-1)))))));
    var_25 = ((/* implicit */long long int) var_18);
    var_26 = ((/* implicit */signed char) var_2);
}
