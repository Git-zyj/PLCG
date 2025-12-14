/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_13 [11] = (((((~(arr_7 [i_0])))) & (((arr_3 [i_0] [i_0]) ? (arr_12 [i_0] [i_1] [i_2] [i_3]) : 3221225472))));
                            arr_14 [i_2] [i_0] = (arr_11 [i_0] [i_2] [i_3]);
                            arr_15 [i_0] [i_0] [i_0] [i_0] = ((-4294967295 ? (max((arr_8 [i_1 - 1] [i_1 - 4] [i_1] [i_1 - 3]), (1073741828 - -1008717884))) : ((max(((32759 ? (arr_2 [i_0]) : (arr_10 [i_0] [1]))), var_15)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_23 [i_0] [i_1] [i_1] [i_5] [i_5] [i_5] = -37;
                            arr_24 [i_0] [i_1] [7] = ((((((-32757 ? (arr_7 [i_0]) : 2147483647))) ? ((2290647290 ? 1 : 11142)) : (-1 && 88))));
                            arr_25 [1] [1] [i_4] [1] [i_1] = -var_2;
                        }
                    }
                }
                arr_26 [i_0] = ((((max(25, (max((arr_21 [i_0] [13] [12] [10] [i_1] [i_1]), 13))))) ? (((((max(-32766, (arr_2 [i_0])))) > 1))) : ((min((var_10 > 3221225472), (min((arr_6 [i_1]), var_10)))))));
            }
        }
    }
    var_19 = (((((((81 ? var_11 : 10))))) / var_16));
    #pragma endscop
}
