/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((!(((-1697305552 && 1367565273081728529) && var_4))));
    var_20 = ((((max(-94, var_2))) ? (min((min(var_14, 67108800)), 15836978)) : ((min((1697305570 || var_6), var_7)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (max((min((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))), (((var_3 ? 62 : var_2))))), (min(((min(1920, 3932160))), ((128 ? (arr_0 [i_0]) : (arr_1 [4])))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_21 = ((((((arr_3 [i_1]) ? (min(var_3, -1697305571)) : (((!(arr_8 [i_2] [i_1] [i_2]))))))) ? (((3754868720 ? (arr_6 [i_1 - 1] [i_1] [i_2]) : (((arr_6 [i_0] [i_1] [i_2]) ? 3287963669305450413 : (arr_3 [i_1])))))) : (max((arr_5 [i_0]), (((-9223372036854775807 - 1) ? 0 : 3664874309343494271))))));
                        var_22 = (max(var_22, (((((((!(arr_8 [i_3] [i_0] [i_3]))))) * (arr_0 [i_3]))))));
                        arr_10 [i_0] [8] [i_2] [i_1] = ((arr_6 [i_0] [i_1] [i_1 - 1]) - ((((arr_7 [i_0] [i_1] [i_1 + 1]) || (arr_7 [i_0] [4] [i_1 - 1])))));
                    }
                }
            }
        }
        var_23 -= (arr_5 [15]);
    }
    #pragma endscop
}
