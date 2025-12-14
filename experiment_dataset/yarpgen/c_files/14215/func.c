/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14215
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
    var_10 = ((/* implicit */short) var_0);
    var_11 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 207248290U)) || (((/* implicit */_Bool) var_5))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_12 = ((((((/* implicit */_Bool) arr_0 [i_0])) ? (max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (-7840748889578586169LL))) : (((/* implicit */long long int) 1337574706U)))) <= (9223372036854775807LL));
        var_13 = ((max((((/* implicit */unsigned long long int) 1337574706U)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) | (arr_0 [i_0]))))) % (arr_0 [i_0]));
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_1 [(unsigned char)10] [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 2957392590U))))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
}
