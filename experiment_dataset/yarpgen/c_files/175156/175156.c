/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 ^= ((var_6 ? var_8 : (max((min(var_1, var_3)), var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = ((((min(324994774612750612, (min(1347103143213353505, 3477283161))))) ? (max(((var_2 ? var_0 : var_3)), ((var_5 ? var_8 : var_10)))) : var_4));
                var_16 = min(var_3, var_0);
                arr_5 [i_0] [i_0] [i_1] = (var_1 ? ((((min(var_12, var_8))) ? var_6 : ((var_11 ? var_10 : var_11)))) : var_7);
            }
        }
    }
    #pragma endscop
}
