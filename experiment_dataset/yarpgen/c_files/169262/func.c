/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169262
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */int) arr_1 [i_1]);
                var_11 = ((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31398))) != (arr_3 [i_0])))));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
                arr_8 [i_1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) min(((short)31398), (var_2))))));
                arr_9 [i_0] = (signed char)-20;
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-((-(((/* implicit */int) (short)-31398))))))) & (min((((((/* implicit */long long int) ((/* implicit */int) var_3))) & (-9194851504922227389LL))), (((/* implicit */long long int) var_7))))));
    var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
}
