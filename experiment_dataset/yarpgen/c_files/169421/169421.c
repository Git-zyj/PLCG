/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 -= ((-((max(var_7, var_5)))));
                var_13 = (((arr_3 [i_0] [i_1] [i_1]) ? (((arr_4 [i_1] [i_0]) ? var_2 : var_10)) : (var_3 != var_9)));
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_7 [i_2] = var_4;
        arr_8 [i_2] = ((var_5 && (((((((-9223372036854775807 - 1) ? (-9223372036854775807 - 1) : var_9))) ? var_4 : (arr_5 [3]))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            {
                var_14 = (min(((min(((((arr_10 [11] [3]) && 15877))), (max(-1323899787, (arr_11 [i_3])))))), (((((-(arr_14 [i_3] [i_3] [i_3])))) ? ((-1323899769 ? var_1 : var_5)) : var_10))));
                var_15 ^= var_5;
                arr_15 [i_3] [i_4] = 1323899786;
                arr_16 [i_3] = (max((arr_12 [i_4 - 1]), (((!((max(18446744073709551615, var_10))))))));
            }
        }
    }
    #pragma endscop
}
