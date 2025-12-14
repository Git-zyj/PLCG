/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] = 5428395918612682812;
                                var_19 = ((arr_4 [0] [5]) ? var_12 : ((((var_6 ? -2271022084262152344 : (arr_4 [i_1] [1]))) >> (-5821523580183216637 + 5821523580183216640))));
                                arr_14 [i_0] [i_1] [i_2] [i_0] = (arr_0 [i_0]);
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_0] [18] = (((((~(arr_0 [i_0])))) ^ (((~-1413884081) ? (arr_11 [i_0] [i_0]) : -128162390222384984))));
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_20 += (((arr_6 [i_5] [i_1] [i_5]) ? (((max(((!(arr_2 [1] [i_0]))), (!1))))) : ((var_6 ? (((arr_9 [i_0 + 1] [i_1]) / (arr_16 [i_0] [i_0] [i_5]))) : (arr_8 [i_5] [i_5] [i_5] [i_1] [i_0] [i_1])))));
                    var_21 = ((~(max((max((arr_16 [15] [i_1] [i_0]), (arr_7 [i_5] [i_0] [i_0]))), (((480431526 ? -28830 : (-2147483647 - 1))))))));
                    var_22 = ((max((min(2147483647, (arr_7 [1] [i_0] [i_5]))), 5821523580183216636)));
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_23 = (arr_19 [i_0 - 1] [i_0 - 1] [i_6]);
                            var_24 -= (arr_19 [i_6] [4] [i_0 + 1]);
                        }
                    }
                }
                var_25 = ((((((((arr_8 [i_0] [i_1] [i_0 + 2] [i_0] [i_1] [i_0]) ? 1413884083 : 0))) & (arr_19 [i_0 + 1] [i_0 + 3] [i_0 - 1]))) % ((((~-3) ? (-2147483647 - 1) : (arr_8 [i_0] [4] [4] [4] [i_1] [i_1]))))));
            }
        }
    }
    var_26 = var_13;
    var_27 = (~var_8);
    #pragma endscop
}
