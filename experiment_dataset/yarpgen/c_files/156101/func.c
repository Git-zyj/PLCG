/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156101
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967270U)) && (((max((var_18), (var_8))) < (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (var_7))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((short) ((_Bool) arr_3 [i_0 + 1]))))));
                var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0 + 2]))))) ? (((2ULL) - (((/* implicit */unsigned long long int) arr_0 [i_0 + 1])))) : (((((unsigned long long int) arr_0 [i_0 - 1])) % (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
                var_22 = ((/* implicit */unsigned char) ((unsigned long long int) 2147483647));
            }
        } 
    } 
    var_23 = ((/* implicit */short) (signed char)116);
    var_24 = ((/* implicit */signed char) max((var_18), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((var_16) + (9223372036854775807LL))) >> (0U)))))));
}
