/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_2 - var_15) + (((50 ? var_7 : var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((((((arr_6 [i_1] [i_1] [i_2]) + var_12))) + ((((((((arr_0 [i_0]) * (arr_5 [i_0])))) >= (min(var_11, (arr_9 [i_1])))))))));
                    arr_11 [i_0] [1] [i_1] [i_2] = (((((48 ? 9848 : -32663))) && ((min(var_2, 1)))));
                    arr_12 [i_0] [i_1] = arr_2 [i_0];
                    var_17 = (((((min(var_8, (min((arr_3 [i_0] [i_1]), (arr_7 [i_0] [i_0] [7]))))))) * (min((5436372056095306857 / 9859), (arr_1 [i_0])))));
                    var_18 = (max(var_18, 9859));
                }
            }
        }
    }
    var_19 -= (((((var_12 < 48) + ((0 ? var_14 : var_9)))) ^ ((((var_6 || (((var_5 ? var_8 : var_13)))))))));
    var_20 = ((-9868 ? ((5436372056095306874 / (((min(var_1, 9848)))))) : (var_15 / var_14)));
    #pragma endscop
}
