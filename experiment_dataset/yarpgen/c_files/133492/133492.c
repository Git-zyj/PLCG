/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((min(-var_13, var_3)));
    var_18 = var_8;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = ((min((arr_0 [i_0 + 1] [i_1 + 3]), (arr_0 [i_0 + 2] [i_1 + 1]))));
                    arr_6 [i_0 - 1] [i_0] = ((((((((arr_0 [i_1 - 1] [i_2]) != 21)) ? (((arr_0 [i_2] [i_1]) ? (arr_2 [12] [i_1] [i_2]) : (arr_0 [i_2] [6]))) : ((((arr_2 [i_0 + 1] [i_1 + 4] [i_2]) ? 21 : (arr_3 [i_0 + 2] [i_1] [i_2]))))))) ? (((min(242, (arr_1 [i_1]))))) : (min((((arr_5 [17] [i_1] [i_1]) ? -69 : (arr_3 [i_0] [i_0 + 1] [i_0]))), ((-(arr_3 [i_1 - 3] [i_1] [i_2])))))));
                }
            }
        }
        arr_7 [10] [7] = ((((240 == (var_16 < 48602))) ? ((((min(15, 14385931359797701669))) ? 2300379966 : 7891548983923000241)) : (((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (min(-14, 665553902196258021)) : ((((((arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2]) + 9223372036854775807)) << (11578538471673413849 - 11578538471673413849))))))));
    }
    #pragma endscop
}
