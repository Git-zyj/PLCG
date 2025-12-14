/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_2));
    var_11 |= (((((1191323334 ? 15764 : (-127 - 1)))) ? ((((min(-15748, 18446744073709551615))) ? var_0 : -15774)) : ((30 ? var_8 : (((var_1 ? -15748 : var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [8] [i_1] |= (arr_0 [i_0]);
                var_12 = (max(var_12, (((((var_0 ? 1 : var_2)) ^ (arr_3 [i_1 - 1] [i_1] [i_1 - 1]))))));
            }
        }
    }
    var_13 = (min(var_13, var_9));
    #pragma endscop
}
