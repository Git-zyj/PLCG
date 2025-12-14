/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1223356482;
    var_16 = ((-(!0)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [2] [i_0 - 2] [2] |= ((((((((~(arr_1 [14])))) ? (((-32123 || (arr_2 [16] [16] [16])))) : (((arr_2 [i_1] [i_1] [i_0]) * 47374))))) ? (((0 > ((-(arr_1 [8])))))) : (((var_0 && ((!(arr_3 [1]))))))));
                arr_5 [i_0] [i_1 - 1] = var_10;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_0] [i_3] = 7;
                            arr_14 [i_1 + 1] [i_0] [i_0] = (((((((arr_8 [i_1 - 1] [i_1 - 1]) && 127)))) + (min((arr_8 [i_2] [i_1 + 1]), (arr_8 [i_2 - 2] [i_1 + 1])))));
                            arr_15 [i_0] = (((5474 / -31834) ? (min(18446744073709551610, (arr_9 [i_1] [i_0] [i_1] [i_1 - 1]))) : ((((arr_9 [i_1] [i_0] [i_1] [i_1 + 1]) ? (arr_9 [i_1] [i_0] [i_1 + 1] [i_1 - 1]) : (arr_9 [i_1] [i_0] [i_1 + 1] [i_1 - 1]))))));
                            arr_16 [i_0] = (min((arr_12 [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_2 - 1] [i_3]), -1));
                            arr_17 [i_0 - 2] [4] [4] [i_0 - 2] [i_3 + 1] [0] = (arr_11 [i_1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
