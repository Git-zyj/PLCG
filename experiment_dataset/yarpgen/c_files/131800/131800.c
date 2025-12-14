/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((((max(((var_17 ? var_14 : var_2)), (!var_9)))) ? ((var_5 ^ (max(var_11, var_11)))) : (~var_16)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (min(var_19, (arr_0 [i_0])));
        var_20 = (((((-(arr_2 [5] [i_0]))) + ((max(var_9, (arr_0 [i_0])))))) - (+-7));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 -= ((((-709343932 ? (arr_5 [0] [i_2]) : (arr_1 [4]))) * 16128));
                    arr_7 [i_0] [9] &= ((!((((~var_3) ? var_10 : (arr_4 [3] [3]))))));
                    var_22 = (max(var_22, ((max(-66, 17179869183)))));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        arr_10 [i_3] = (max((arr_8 [i_3] [i_3 - 3]), ((~(arr_8 [i_3] [i_3 - 2])))));
        var_23 = var_0;
    }
    #pragma endscop
}
