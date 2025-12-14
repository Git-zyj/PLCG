/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110182
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_2 [i_1 + 1]))) * (((/* implicit */int) (((~(arr_5 [i_0] [i_0] [i_1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 2]))))))));
                arr_9 [i_0] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (2252854585U) : (608841070U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16882))) : (3398560750U))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((var_9) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_13))) >= (var_9))))))))))));
    var_15 = ((/* implicit */signed char) var_6);
}
