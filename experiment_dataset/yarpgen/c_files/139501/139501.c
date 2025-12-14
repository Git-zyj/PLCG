/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 51895;
    var_13 = (!var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = ((((min((arr_3 [7] [i_0 + 1] [i_0 + 1]), (arr_3 [i_0] [i_0 + 1] [i_0 + 1])))) ? ((min((arr_3 [i_0] [i_0 + 1] [i_0]), (arr_3 [i_0] [i_0 + 1] [i_0])))) : ((min((arr_3 [i_0 + 1] [i_0 + 1] [6]), (arr_3 [i_0 + 1] [i_0 + 1] [i_0]))))));
                var_15 = (((-6548058323700947853 > var_0) & ((3591702823 ? (arr_0 [i_1] [i_0]) : (545861698 + var_1)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            {
                var_16 = (min(var_16, (arr_10 [i_3] [i_2] [i_2])));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_15 [i_2] [i_2 + 1] [i_3] [i_2 + 1] [i_2] = (min((((7722681777541861249 ? ((min((arr_13 [13] [i_3] [i_4] [i_4] [i_5]), (arr_6 [i_2])))) : (((13640 <= (arr_14 [i_2] [i_3] [3] [i_3] [i_4] [i_5]))))))), ((62690 ? (((arr_14 [17] [i_3] [5] [i_5] [i_5] [i_3 - 1]) ? (arr_12 [i_3 - 1] [i_5]) : (arr_8 [i_2 - 1]))) : -30))));
                            arr_16 [i_2] [i_2] [i_2] [i_5] [i_5] [i_4] = (((arr_9 [1]) * (arr_9 [i_4 - 1])));
                            var_17 = var_11;
                            arr_17 [i_2] = (((((arr_14 [i_3 + 2] [i_4 - 1] [i_4] [i_4 + 3] [i_4] [i_5]) ? (!6548058323700947867) : (arr_14 [i_2] [i_3] [i_4] [i_5] [i_5] [i_4]))) & (((((arr_10 [i_3] [i_4] [i_4]) <= (arr_8 [i_3]))) ? (((arr_14 [i_5] [i_5] [i_4 + 3] [1] [i_2] [i_2]) ? 6548058323700947867 : 2233103315612287660)) : (arr_9 [i_5])))));
                        }
                    }
                }
                arr_18 [i_2] [3] [i_2] = (arr_7 [i_2] [i_2]);
                arr_19 [i_2] [i_2] [i_2] = (min((arr_14 [i_3] [i_3 - 1] [i_2 + 3] [i_2] [i_2 + 2] [i_2]), (((arr_14 [i_2] [i_2 + 2] [i_2] [i_3] [i_3] [i_3 + 1]) ? (arr_14 [i_2] [i_2] [i_2] [i_3] [i_3] [i_2]) : (arr_14 [i_2 + 3] [i_2] [i_2 + 3] [i_2] [13] [i_3 + 1])))));
            }
        }
    }
    #pragma endscop
}
