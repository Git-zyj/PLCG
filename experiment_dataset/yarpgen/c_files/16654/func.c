/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16654
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
    var_12 -= ((/* implicit */unsigned long long int) (short)-32240);
    var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_3)) != (6035191992287156615ULL)));
    var_14 = ((/* implicit */short) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_3))));
        var_16 = ((/* implicit */long long int) ((var_6) << (((((/* implicit */int) ((short) 14088075046481260500ULL))) - (28568)))));
        arr_3 [i_0] [i_0 - 1] = arr_1 [i_0 - 1];
        var_17 = ((/* implicit */unsigned char) (!(var_5)));
    }
    var_18 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_6) : (var_10)))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4))))))));
}
