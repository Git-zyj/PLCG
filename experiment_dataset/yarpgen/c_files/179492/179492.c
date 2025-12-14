/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [4] [i_1] = (arr_2 [i_0] [i_0]);
                arr_7 [i_0] = (235 == 235);
            }
        }
    }
    var_15 = (max(((min(var_10, var_3))), var_7));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [i_2] [i_2] [i_3] [i_5 + 2] [i_2] |= (!((!(((235 >> (2147483648 - 2147483644)))))));
                                arr_20 [i_2] [i_4] [8] [i_5] [8] = (max((max((arr_16 [12] [i_3] [i_6]), (!21))), var_2));
                                arr_21 [i_3] [i_4] [i_6] [i_4] = ((((max(-1, (arr_0 [i_5 + 1] [i_4])))) != ((0 ? 76 : 4422477463660298940))));
                                arr_22 [i_2] [i_2] [i_5] [4] [i_2] = ((((-978876741 ? var_12 : (arr_15 [i_5] [i_5 - 1] [i_5 + 1] [i_5 + 2] [i_5 - 1]))) | -720887872));
                            }
                        }
                    }
                    arr_23 [i_2] [i_2] [i_4] |= ((18446744073709551615 ? 235 : (max(-720887872, (min(var_2, 0))))));
                    arr_24 [i_4] [i_3] [i_2] = var_6;
                    arr_25 [i_2] [12] [i_4] &= (min(((var_5 ? 1 : 234)), (!-0)));
                }
                arr_26 [i_2] = ((((21 || (((~(arr_5 [i_3])))))) ? (((((20033 ? (arr_4 [i_2] [9] [i_2]) : var_3))) ? var_12 : var_1)) : ((121 ? -var_14 : ((4294967295 ? 29527 : 235))))));
            }
        }
    }
    var_16 = var_0;
    var_17 = var_9;
    #pragma endscop
}
