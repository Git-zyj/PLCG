/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168073
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_8);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), ((+(arr_0 [i_0])))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_1 [(_Bool)1]))));
        arr_4 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_15)), (((((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) / (var_18)))))));
    }
    var_21 = ((/* implicit */unsigned short) var_5);
}
