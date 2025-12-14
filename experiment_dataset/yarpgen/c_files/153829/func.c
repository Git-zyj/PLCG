/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153829
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
    var_10 &= ((/* implicit */unsigned int) max((((/* implicit */short) min(((signed char)-124), (((/* implicit */signed char) ((_Bool) 31ULL)))))), (var_0)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = arr_2 [i_0] [i_0] [i_1];
                var_11 |= min((arr_2 [(_Bool)1] [i_1] [i_1]), (min((var_0), (((/* implicit */short) (signed char)-93)))));
                var_12 = ((/* implicit */short) (((_Bool)1) ? ((+((+(((/* implicit */int) var_1)))))) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))));
                arr_7 [i_0] [(short)3] [i_1] = ((/* implicit */_Bool) min((((max((((/* implicit */long long int) (short)128)), (7370472930659881043LL))) - (((/* implicit */long long int) ((/* implicit */int) max(((short)24576), (((/* implicit */short) arr_1 [12ULL])))))))), (((/* implicit */long long int) var_4))));
            }
        } 
    } 
}
