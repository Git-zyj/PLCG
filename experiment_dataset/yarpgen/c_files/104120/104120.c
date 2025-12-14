/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_12 ? (((var_8 ? var_16 : var_6))) : var_4)) % ((((((var_2 ? var_14 : var_10))) ? -var_1 : var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (arr_0 [i_0 + 2]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [1] [i_1] [i_1] [i_1] [i_1 - 1] = ((arr_10 [i_0 + 4] [i_2] [i_3]) ? (((!(arr_10 [i_0 + 1] [i_1] [i_2])))) : -65526);
                            var_19 = -var_16;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_20 += ((~(((arr_16 [i_5] [i_4] [i_1] [i_0 - 1]) ? var_10 : (arr_16 [i_0] [i_1] [i_4] [i_5])))));
                            var_21 += (var_6 != var_14);
                            arr_19 [6] [i_1] [i_4] [i_5] [i_5] = -1;
                        }
                    }
                }
                var_22 = (min(var_22, (((!((!(arr_18 [i_1 + 1]))))))));
            }
        }
    }
    #pragma endscop
}
