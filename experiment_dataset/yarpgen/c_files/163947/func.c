/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163947
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) max((min((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) - (var_18))), (((/* implicit */long long int) arr_1 [i_1 - 1] [i_1 + 1])))), (((/* implicit */long long int) arr_2 [i_0] [(signed char)5]))));
                arr_7 [9U] [i_0] [9U] = ((/* implicit */short) arr_6 [i_0] [i_0] [i_1]);
                var_20 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_6 [i_1 - 2] [i_1 + 3] [i_1 + 3]))))));
                arr_8 [i_0] [(signed char)7] [i_1] = ((/* implicit */long long int) (-((~(((/* implicit */int) ((short) (short)-32755)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
}
