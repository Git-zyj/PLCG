/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_15 = (0 + 1);
            arr_6 [i_1] = var_1;
        }
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_16 = (min(var_16, ((((arr_5 [i_0] [i_0] [i_0]) ? 0 : -16777216)))));
            var_17 = (-10742 + -16777193);
        }
        var_18 |= ((403107955 ? (arr_5 [i_0 + 2] [i_0 - 1] [i_0 + 1]) : var_12));
        var_19 |= ((~((1 ? 3221225472 : (arr_5 [i_0] [i_0] [i_0])))));
        arr_9 [i_0] = (((((((arr_5 [i_0] [i_0] [i_0]) < 198)))) ^ (arr_0 [i_0] [i_0])));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                var_20 = var_2;
                var_21 = (max(var_21, (arr_8 [i_4] [i_3])));
                var_22 = ((((((arr_10 [i_3]) ? 844536583 : (arr_10 [i_4])))) || (arr_12 [i_3])));
            }
        }
    }
    #pragma endscop
}
