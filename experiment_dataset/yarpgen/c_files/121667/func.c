/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121667
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
    var_15 = ((/* implicit */int) max((min((min((var_3), (((/* implicit */unsigned int) var_0)))), (max((((/* implicit */unsigned int) (signed char)123)), (var_14))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) != (var_10)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */signed char) var_4);
        var_16 = ((/* implicit */unsigned char) ((arr_0 [i_0 + 2]) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1] [i_0 + 1] [i_0 + 2]))));
                    var_18 = ((/* implicit */signed char) ((short) arr_3 [i_2 - 1] [i_1 - 1] [i_0 + 2]));
                }
            } 
        } 
    }
}
