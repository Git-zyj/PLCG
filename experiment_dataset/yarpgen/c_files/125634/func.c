/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125634
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
    var_10 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -542391026)) ? (980126726937745240ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
    var_11 -= ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1152921504606842880ULL)) ? (((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)95))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned short)4]))) : (1152921504606842876ULL)))) ? (-3400786619244420308LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                arr_4 [17U] [i_1] [(unsigned char)14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [5U]))));
                var_13 = ((/* implicit */int) (~(min((((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (1152921504606842880ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (var_4))))))));
            }
        } 
    } 
}
