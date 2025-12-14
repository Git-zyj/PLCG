/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    var_19 = var_16;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((((((0 ? var_14 : var_3))) ? var_4 : (arr_2 [i_0] [i_0]))));
        arr_4 [14] |= var_13;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((~(arr_2 [i_0] [i_0])));
                    var_20 = (arr_0 [i_1] [i_0]);
                    var_21 &= -13424;
                    var_22 = ((~(((arr_6 [i_0]) ? var_8 : (((arr_9 [i_0] [i_1] [i_2 - 2] [i_0]) ? var_14 : (arr_0 [i_0] [i_1])))))));
                    var_23 = ((347689340 ? 3947277955 : (((211 << (158 < 44756))))));
                }
            }
        }
    }
    #pragma endscop
}
