/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132567
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) var_14);
        var_19 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)28))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0] [i_0]))) ? (((((/* implicit */_Bool) (unsigned short)27736)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37799))) : (8274446598057784691LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_0]))))));
        arr_4 [(signed char)2] |= ((/* implicit */_Bool) arr_1 [i_0]);
    }
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_17))))), ((+(var_0)))))) && (((/* implicit */_Bool) var_13)))))));
}
