/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120330
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
    for (signed char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0 - 2] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_6)), (((0LL) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2])))))));
        var_13 = ((/* implicit */int) var_4);
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_11)))) ? (((((/* implicit */_Bool) 5598997009106579975ULL)) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (-1589367794))) : ((+(((/* implicit */int) arr_0 [i_0 + 2]))))));
    }
    var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2110))) : (5598997009106579974ULL))) << (((12847747064602971642ULL) - (12847747064602971603ULL)))))));
}
