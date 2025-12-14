/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = ((var_2 ? (((!((min((arr_5 [i_0] [i_0] [i_0]), (arr_4 [i_1] [i_1] [i_0]))))))) : ((max(((-6 || (arr_4 [i_0] [i_1] [i_2]))), (arr_0 [i_0]))))));
                    var_19 = ((-1 ? (arr_2 [i_0] [i_0]) : var_11));
                    var_20 = (((((arr_3 [i_2]) & (arr_1 [i_0] [i_0]))) > ((((!(arr_7 [i_0] [i_0] [i_0])))))));
                }
            }
        }
        arr_9 [i_0] |= (~0);
    }
    var_21 += ((((((((max(var_5, var_0))) && ((max(-4096, var_8))))))) - (max((0 && var_5), ((var_16 ? 1152921504573292544 : var_14))))));
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                {
                    arr_16 [i_5] |= 4255655252;
                    var_22 = (((((-(arr_2 [i_5 + 1] [i_5 + 2])))) <= ((~(arr_10 [i_4] [i_3 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
