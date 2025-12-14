/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((-var_1 && (((var_8 ? var_8 : var_16))))) ? ((~((var_0 ? var_17 : var_0)))) : (max(-var_10, -var_18)));
    var_20 = (max(var_20, (((((1 < 726320559) ? (var_18 >= var_0) : (min(726320562, 726320565))))))));
    var_21 = (max(((((max(var_18, var_9))) ? var_11 : 726320553)), (min(726320553, 726320553))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_22 = ((((min(((min(var_1, var_2))), ((var_12 ? var_4 : var_10))))) ? var_18 : ((var_17 ? var_9 : var_2))));
                arr_5 [i_0] = (((var_10 ? var_10 : (~var_2))));
                arr_6 [i_0 + 3] [i_0] [i_1] = (((726320549 ? 3568646727 : 3568646736)));
            }
        }
    }
    #pragma endscop
}
