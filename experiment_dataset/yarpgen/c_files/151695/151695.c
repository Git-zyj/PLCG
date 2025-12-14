/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (min(65533, -1));
                arr_5 [i_0] [i_1] [i_0] = (arr_0 [i_0]);
                var_16 -= ((((min((arr_3 [i_0] [1]), (1346510271 == 116)))) ? ((var_14 ? (var_4 == var_3) : (var_7 == var_8))) : (!65533)));
            }
        }
    }
    var_17 = (max((max(var_9, (min(10, var_11)))), (-55693 == -var_10)));
    var_18 = (min(((var_11 ? 55693 : 1023)), var_5));
    var_19 = var_4;
    var_20 = var_6;
    #pragma endscop
}
