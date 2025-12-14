/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((-(min((((36 ? 65 : var_11))), 0))));
    var_21 = ((((~((min(var_1, var_18)))))) ? var_15 : (-32767 - 1));
    var_22 = -var_13;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_23 = (((!(~var_18))) ? (min(65, 2893065201)) : var_16);
        var_24 ^= (((1 ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0]))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            {
                arr_9 [i_1] [i_2] [i_2] = ((((max((((!(arr_6 [i_2])))), (arr_6 [i_1])))) * 196));
                var_25 -= ((-((var_6 ? 0 : (arr_7 [i_1])))));
                var_26 = (1 * 0);
                var_27 ^= (min(var_13, var_4));
            }
        }
    }
    #pragma endscop
}
