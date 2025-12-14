/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [0] [i_0] = (((((((min(32768, (arr_2 [i_1] [i_0])))) ? (((arr_0 [i_1]) ? 32785 : (arr_3 [i_1]))) : ((-8330 ? var_7 : 631776817))))) ? 32791 : (arr_1 [i_1])));
                var_21 = var_2;
            }
        }
    }
    #pragma endscop
}
