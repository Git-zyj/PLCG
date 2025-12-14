/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [2] = 1;
        arr_3 [i_0] = (((min(1, 0))) ? (((var_11 + var_6) + 126)) : ((max(10531, 1))));
        arr_4 [i_0] [i_0] = (max(1, 61360));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 12;i_3 += 1)
            {
                {
                    arr_12 [i_3 - 4] [i_1] [1] = 1;
                    var_19 = (min(var_19, (arr_8 [i_1 - 1] [8] [9])));
                    var_20 = (i_1 % 2 == 0) ? (((((((((arr_5 [i_1]) << (124 - 122))) + ((-(arr_5 [i_1])))))) ? (((var_9 / 1) >> ((((-(arr_9 [i_1]))) + 32)))) : (((((min(1, var_4)) || ((1 <= (arr_7 [1] [1])))))))))) : (((((((((arr_5 [i_1]) << (124 - 122))) + ((-(arr_5 [i_1])))))) ? (((var_9 / 1) >> ((((((-(arr_9 [i_1]))) + 32)) - 26)))) : (((((min(1, var_4)) || ((1 <= (arr_7 [1] [1]))))))))));
                }
            }
        }
        var_21 = (max(var_21, ((max((((!var_6) ? 2 : (arr_11 [7] [i_1 + 2] [i_1 - 1] [i_1]))), ((((arr_1 [i_1 - 2]) && (arr_1 [i_1 - 2])))))))));
    }
    for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = arr_5 [6];
        arr_16 [i_4] = (max(1, -1576047449));
    }
    var_22 = (min(1, -var_4));
    var_23 = (((var_12 ? var_16 : ((min(1, 1))))));
    #pragma endscop
}
