/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173247
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
    var_17 = ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)58315)));
    var_18 = ((/* implicit */signed char) min((((-4844263538233755575LL) / (max((-4844263538233755577LL), (((/* implicit */long long int) var_2)))))), (((/* implicit */long long int) var_6))));
    var_19 = ((/* implicit */unsigned char) var_1);
    var_20 &= ((/* implicit */unsigned int) 684124777);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) (+(var_13)));
        arr_4 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) arr_2 [i_0 - 1])), (min((-4844263538233755563LL), (4844263538233755576LL)))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
        arr_6 [(signed char)4] [i_0] = ((/* implicit */unsigned long long int) 2047U);
    }
}
