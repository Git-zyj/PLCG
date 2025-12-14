/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = max((((+((3503841290 ? (arr_0 [i_0]) : var_9))))), (((((var_7 ? -32767 : var_5))) - var_6)));
                arr_5 [i_0] = (min(var_7, ((min((arr_2 [i_1 - 1] [i_0]), (arr_1 [i_0 + 1]))))));
                arr_6 [13] [i_0] [i_1 + 3] = ((~((((min(var_2, var_9))) ? (arr_1 [i_1]) : var_0))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            {
                var_13 *= ((((max((var_9 + var_3), var_10))) ? ((((((min(var_7, (arr_8 [i_3])))) && (((var_9 ? (arr_7 [i_3 - 1]) : 1))))))) : (((arr_12 [18] [i_3 - 2]) ? (arr_12 [i_3] [i_3 + 4]) : -1898903903023449517))));
                arr_13 [i_2] [i_2] |= max(((((arr_7 [i_3 + 2]) + (arr_7 [i_3 + 1])))), (((-32767 - 1) ? var_2 : var_6)));
            }
        }
    }
    #pragma endscop
}
