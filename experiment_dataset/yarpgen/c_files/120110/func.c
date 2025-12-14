/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120110
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
    var_18 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) (_Bool)1);
        var_20 = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = max(((((_Bool)1) ? (((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) arr_2 [i_0] [i_0])))), (arr_0 [i_0]));
    }
    for (int i_1 = 3; i_1 < 18; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) var_14);
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((var_4) <= (((/* implicit */long long int) var_0))));
    }
    var_22 -= ((/* implicit */short) var_14);
}
