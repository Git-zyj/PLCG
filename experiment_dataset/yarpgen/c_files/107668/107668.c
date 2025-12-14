/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_16 >= var_16);
    var_20 |= 63;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((((((arr_5 [i_0 - 2]) ? (max(var_1, (arr_6 [i_0] [i_0] [7]))) : 198)) / (arr_3 [12]))))));
                var_22 = 29885;
            }
        }
    }
    var_23 = (max(var_23, ((var_2 | ((min(((max(-26632, 1))), var_10)))))));
    #pragma endscop
}
