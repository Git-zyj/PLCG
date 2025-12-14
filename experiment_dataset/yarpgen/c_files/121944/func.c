/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121944
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
    var_18 += ((/* implicit */_Bool) var_7);
    var_19 *= var_3;
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0]))))) <= (((/* implicit */int) (short)28675)))) ? (min((((/* implicit */long long int) (short)19967)), ((~(-7188616312049012236LL))))) : (arr_1 [i_0] [i_0 - 2]))))));
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned int) ((signed char) (-(arr_1 [i_0 - 2] [i_0 - 1]))));
    }
    var_21 = ((/* implicit */long long int) var_14);
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max(((~(var_8))), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (442094521731448867ULL))))))))));
}
