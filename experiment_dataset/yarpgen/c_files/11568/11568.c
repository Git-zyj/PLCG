/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [4] = (((((var_1 ? (((!(arr_1 [i_0])))) : (((1 != (arr_2 [5] [i_1] [i_1]))))))) ? (((!11) ? -var_4 : (min(1, 2242254234)))) : var_9));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_7 [i_1] = (max((min(var_9, 1)), ((min((~var_3), 1)))));
                    arr_8 [7] [3] [2] [i_2] = 18032491789821352053;
                    arr_9 [i_2] [i_2] [7] = (arr_5 [20] [i_1] [i_2]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                arr_15 [12] [i_4] [i_4] = (min((((var_7 + var_4) - (min(-7007173381416477528, var_4)))), ((((((-15853 ? 62092 : var_5))) ? (((arr_11 [8]) ? var_3 : (arr_12 [i_3] [i_4]))) : 41)))));
                arr_16 [i_3] [i_4] = ((((!(arr_1 [i_3]))) ? (min((arr_3 [10] [i_4] [i_4]), (arr_1 [i_3]))) : (((0 || (arr_3 [0] [3] [i_4]))))));
                arr_17 [i_3] = (((arr_0 [i_3]) >= (((arr_6 [i_3]) ? var_11 : var_7))));
                arr_18 [1] [i_3] [13] = 1;
                arr_19 [i_3] [i_3] [5] &= -261387186;
            }
        }
    }
    #pragma endscop
}
