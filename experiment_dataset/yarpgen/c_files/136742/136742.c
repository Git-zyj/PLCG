/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_2] [i_2] = (max(((~(((arr_7 [i_0] [8] [i_1]) ? var_11 : (arr_5 [i_0] [i_1] [i_1]))))), (arr_0 [i_1 + 1])));
                    arr_10 [i_1] [i_1] [i_1] = ((!((min((arr_6 [i_0] [i_1] [i_0] [i_2]), (arr_5 [i_1 + 1] [i_1 + 1] [i_1]))))));
                    arr_11 [0] [i_1] = (((((~(max(48594, (arr_1 [1] [i_1])))))) ? ((~(((arr_0 [i_0]) ? (arr_6 [i_0] [i_1 + 1] [i_2] [i_2]) : (arr_4 [i_1]))))) : ((0 ? (arr_0 [i_0]) : 0))));
                }
            }
        }
    }
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            {
                arr_17 [2] [i_4] = (max(1263128146744766331, 0));
                arr_18 [12] |= ((((1263128146744766331 >> 0) & (min(1533721163999247511, 4010347990207987710)))));
                arr_19 [i_4] [1] [i_4 + 1] = ((((!(arr_13 [i_3])))));
                arr_20 [i_4] = (arr_16 [i_3] [i_4] [i_3]);
            }
        }
    }
    #pragma endscop
}
