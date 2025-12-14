/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186555
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_0 [i_0]))))));
        var_19 = ((/* implicit */_Bool) ((int) var_2));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (signed char)102))))));
        var_21 = max((((/* implicit */unsigned int) ((unsigned char) ((unsigned int) 3324265380U)))), (min((((/* implicit */unsigned int) min(((short)-360), (var_14)))), (3648161712U))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) var_8);
        var_22 = ((_Bool) max(((+(0))), (((/* implicit */int) var_0))));
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) arr_1 [i_2]);
        arr_12 [i_2] = ((/* implicit */unsigned int) ((short) (_Bool)1));
        arr_13 [i_2] = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-371))))))), ((((-2147483647 - 1)) != (((/* implicit */int) (_Bool)0))))));
    }
    var_23 = ((/* implicit */unsigned char) ((int) var_2));
    var_24 = ((/* implicit */unsigned char) var_14);
}
