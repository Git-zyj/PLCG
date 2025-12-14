/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -121;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [i_1] = (arr_3 [i_0 - 1]);
                        var_11 = 20085;
                        arr_13 [5] [i_1] [i_2] [i_3] [i_2] = (78 != var_1);
                        arr_14 [i_2] = (((arr_3 [i_2 - 2]) ? (arr_6 [i_3]) : (arr_9 [i_2 + 1])));
                    }
                    var_12 += (max((min(137438953471, (arr_1 [i_0 - 3]))), (arr_1 [i_0 + 1])));
                    arr_15 [i_2] [9] [i_1] [9] = (((((38 ? (max(var_8, 39)) : 120))) ? ((min(((((arr_5 [i_2] [i_1] [i_0]) >> (((arr_2 [i_1]) + 1000214504))))), ((var_8 / (arr_7 [12] [i_1] [i_1])))))) : (min((((arr_1 [i_0]) ? var_5 : 7475130037397090187)), (arr_0 [i_0])))));
                    var_13 += ((((((max(232, (arr_5 [i_2] [i_1] [i_0])))))) ? ((min(218, ((121 ? var_4 : (arr_1 [i_2])))))) : (min(var_5, ((((arr_7 [i_2] [i_1] [i_0]) + 124)))))));
                    arr_16 [i_2] [i_1] [i_0] = (((arr_2 [i_1]) ? ((6 ? 132 : (arr_2 [i_0]))) : 121));
                }
            }
        }
    }
    var_14 = var_7;
    #pragma endscop
}
