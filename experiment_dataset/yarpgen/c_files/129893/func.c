/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129893
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_1 [14U]))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((int) (+(((int) arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (~((~(arr_0 [i_0])))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_18 -= ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (signed char)-51)))));
        arr_6 [i_1] = ((/* implicit */_Bool) var_5);
    }
    var_19 = ((/* implicit */int) ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */long long int) ((/* implicit */int) var_16))) / (4559391957853102353LL))) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))));
    var_20 = (+(((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_16)))))));
    var_21 = var_16;
}
