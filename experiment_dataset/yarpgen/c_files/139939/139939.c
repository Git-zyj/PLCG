/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max((((var_15 - 24473) % (var_13 + var_12))), ((max(1721, (arr_4 [i_0] [i_0] [i_0]))))));
                var_21 |= ((((min(92, (arr_0 [8] [22])))) ? (((max(128, (arr_3 [1]))))) : (max((min(var_2, var_0)), ((((-32767 - 1) >= 63812)))))));
                arr_6 [i_1] [i_0] [i_0] = var_7;
            }
        }
    }
    var_22 = (min((((var_9 ? -1 : var_1))), 1720));
    #pragma endscop
}
