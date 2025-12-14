/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10005
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        var_12 = ((/* implicit */long long int) arr_1 [(unsigned char)7]);
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) && (((/* implicit */_Bool) arr_1 [i_0]))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((((/* implicit */_Bool) 20)) ? (((/* implicit */int) arr_0 [i_0])) : (1717765990)))));
    }
    var_14 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((var_11) & (0))), (((/* implicit */int) ((signed char) (signed char)-47)))))), (0ULL)));
}
