/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_3;
    var_15 = max((var_0 != var_3), (((min(var_8, var_10)))));
    var_16 = var_1;
    var_17 = (min(var_17, 18446744073709551601));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_0] = ((((((var_7 ? 1 : var_2)))) ? (((2167521720 >= (max(519322850, (arr_1 [i_1])))))) : var_9));
                    var_18 = (max(var_18, (((3775644437 ? ((min(3775644428, 1))) : (arr_8 [i_0] [18] [12]))))));
                }
            }
        }
    }
    #pragma endscop
}
