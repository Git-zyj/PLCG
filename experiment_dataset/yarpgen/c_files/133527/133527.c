/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((((((arr_5 [i_1]) ? (arr_4 [i_0] [i_0]) : var_6))) ? -var_10 : -var_2));
                var_12 = ((((((((~(arr_0 [i_1] [i_0])))) ? (((arr_5 [i_0]) ^ (arr_5 [i_0]))) : 1))) ? ((-((var_3 | (arr_3 [i_0]))))) : 173));
            }
        }
    }
    var_13 = ((((var_2 ? 1912535455 : ((var_7 ? var_6 : var_6)))) <= (((((var_5 - var_8) && var_10))))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            {
                arr_12 [i_3] = 31273;
                var_14 *= (11314548787659315217 ? (min((arr_8 [i_3]), (arr_5 [i_2]))) : ((-61743 ? var_6 : (((arr_1 [i_2] [i_2]) ? 1 : var_0)))));
                var_15 = ((!((((((arr_1 [i_3] [i_2]) ^ 198))) <= (((arr_1 [i_3] [i_2]) | -4454497353538312478))))));
                var_16 -= (arr_1 [i_2] [i_3]);
            }
        }
    }
    #pragma endscop
}
