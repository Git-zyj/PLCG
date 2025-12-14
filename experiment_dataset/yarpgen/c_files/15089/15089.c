/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = -60;
                    arr_8 [i_0] [i_0] [i_2] = ((((min((arr_4 [i_0]), var_8)))) ? ((((16777215 ? (arr_5 [17] [17] [17]) : var_2)) % (~var_1))) : (((((var_2 ? var_9 : var_4))) ? ((((arr_4 [i_2]) > (arr_5 [i_0] [i_1] [i_1])))) : (((arr_0 [i_1] [i_0]) << (((arr_3 [1] [i_0]) + 1379511538)))))));
                }
            }
        }
    }
    var_20 = (max(var_20, var_1));
    var_21 = var_16;
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            {
                var_22 *= (max(((((arr_11 [i_3] [i_4]) == var_14))), -var_8));
                var_23 = (min(var_23, ((max(((31741320 <= (((var_13 + (arr_12 [15] [i_4] [9])))))), ((((min((arr_14 [i_4]), -5))) || (arr_9 [i_3]))))))));
                arr_15 [i_3] [i_4] = ((((5 ? (arr_9 [i_4 + 1]) : (arr_9 [i_4 + 2]))) > -119));
            }
        }
    }
    #pragma endscop
}
