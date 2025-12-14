/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~(((-32767 - 1) ? 3247032940250955177 : var_11))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [18] [i_1] [i_3 + 3] [i_0] [0] = (((2251799813685247 / 3247032940250955177) ? (arr_6 [i_1 - 1] [i_1] [i_1]) : (((((arr_8 [i_0] [1]) ? var_9 : var_10))))));
                                arr_16 [i_0] [i_1 - 1] = ((((!((!(arr_6 [i_0] [4] [i_1]))))) ? (min((arr_4 [i_1 + 1]), (arr_4 [i_1 + 1]))) : (((((1 | (arr_5 [i_0]))))))));
                                arr_17 [i_0] [i_0] = ((1 | ((~(arr_2 [i_4] [i_1] [i_0])))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_1 + 1] [i_1 + 1] = ((((((3247032940250955171 ? var_4 : (arr_4 [i_0])))) ? (arr_9 [i_0] [i_0] [i_1 + 1] [i_0] [i_2] [i_2]) : ((var_9 - (arr_13 [i_0] [i_1 - 1] [i_2] [i_2] [i_2]))))));
                }
            }
        }
    }
    var_15 = var_13;
    #pragma endscop
}
