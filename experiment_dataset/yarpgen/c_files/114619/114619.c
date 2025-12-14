/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_11 += (((((-26784 - (arr_4 [i_2] [i_1])))) ? (arr_0 [i_0] [i_1]) : ((min((arr_5 [2] [i_0]), -26784)))));
                    var_12 = var_3;
                    var_13 += (arr_6 [i_2 - 1] [i_2 - 1] [i_2 + 2]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                var_14 = (((-26788 + 2147483647) >> (3997849232 - 3997849207)));
                var_15 = (max(var_15, (((((((~(arr_11 [i_4] [i_3]))) + 2147483647)) << (((arr_12 [i_4]) - 16635)))))));
                var_16 += (arr_13 [i_4]);
            }
        }
    }
    var_17 = (-(max(((727608701785781350 ? var_2 : var_5)), var_6)));
    var_18 = (((((((126 ? -26784 : 137)) ^ 54182))) - ((min(var_6, 3997849232)))));
    var_19 = ((((!(!297118063))) ? var_1 : (((((!var_8) != (!var_4)))))));
    #pragma endscop
}
