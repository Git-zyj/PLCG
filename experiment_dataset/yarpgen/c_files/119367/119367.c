/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = -807140655;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] = ((-807140655 ? 1 : -3963811711866374638));
                    var_14 = (min(var_14, ((-(arr_1 [i_1])))));
                }
            }
        }
        var_15 = (max(var_15, (((!(((((max(var_4, (arr_0 [i_0] [i_0])))) ? (max(3963811711866374647, (arr_2 [1]))) : (((807140675 ? (arr_4 [i_0] [2] [i_0]) : (arr_1 [i_0]))))))))))));
    }
    var_16 = (((~var_3) ? var_0 : var_3));
    var_17 = var_11;
    #pragma endscop
}
