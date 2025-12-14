/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, var_7));
                    var_20 -= max(((var_1 ? ((-1 ? 3916765977801531324 : var_16)) : (((-1 ? 29442 : -1))))), ((max((((!(arr_5 [i_1] [i_1] [i_1])))), ((-7024650954681307569 ? var_2 : 24867))))));
                    var_21 -= ((var_1 ? 1 : (max((!var_4), var_3))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                arr_10 [i_3] [i_4] = (max(var_0, var_6));
                arr_11 [i_3] [i_3 - 1] = (((((max((arr_3 [i_3 - 1] [i_4]), var_9)))) % ((((var_17 ? 1 : 140737488355327))))));
            }
        }
    }
    #pragma endscop
}
