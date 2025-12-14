/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [14] [i_1] |= (41050 * -30771);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 += ((((-(arr_12 [i_1 - 3] [i_0 + 1])))) ? (((((arr_1 [17]) ? (arr_0 [i_0 - 1] [i_0]) : (arr_0 [i_0] [i_4]))))) : ((((24467 > (arr_2 [1] [i_3]))))));
                                var_15 = ((((-(((!(arr_6 [i_1] [12])))))) - (arr_3 [i_1 + 1])));
                                var_16 = -41050;
                            }
                        }
                    }
                }
                var_17 = (max(var_17, (arr_6 [i_1 + 1] [i_1 - 2])));
            }
        }
    }
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            {
                var_19 = (((arr_16 [i_5] [i_5 - 2]) / (max((arr_17 [i_6 + 2] [i_5 - 1]), (arr_17 [i_6 + 2] [i_5 + 1])))));
                arr_18 [i_5] [i_6] [i_6] = ((~(((!(arr_15 [i_6 + 1]))))));
            }
        }
    }
    var_20 = var_12;
    #pragma endscop
}
