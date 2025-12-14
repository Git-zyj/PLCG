/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((min(var_7, (((var_4 ? var_3 : var_1))))), ((max(var_0, ((max(var_6, var_1))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_2] [i_0] = ((min((arr_2 [i_0 + 1] [i_0 + 2]), (((!(arr_2 [i_2] [i_1])))))));
                            arr_11 [i_0] [i_0] [9] [i_1] [i_1] [i_3] = (((((!((max(var_3, 1)))))) | -var_8));
                            arr_12 [i_3] [i_0] [i_1] [i_0] [i_0] = var_5;
                        }
                    }
                }
                arr_13 [i_1] [i_1] = (arr_2 [i_0] [i_0]);
                arr_14 [i_0 + 1] [i_1] [i_1] = ((((1661917631 ? -283440250 : 9669157587771413087)) >= (((arr_4 [i_0]) * (((743481891 * (arr_6 [i_1] [i_1] [i_0]))))))));
            }
        }
    }
    var_12 = -283440241;
    var_13 = var_2;
    var_14 = (!1799100905);
    #pragma endscop
}
