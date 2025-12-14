/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((1208236662 == 76) ? var_3 : ((((((10941 ? 10955 : -40))) && (((var_7 ? var_7 : 0))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (arr_1 [16]);
        var_16 = (min(var_16, ((((arr_1 [0]) ? 1 : (~-10951))))));
        var_17 = 5690617766267292777;
        var_18 = (arr_0 [i_0] [i_0]);
        var_19 = (!-var_12);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_20 = ((!(((((((-(arr_2 [5] [i_1]))) + 9223372036854775807)) >> (((arr_2 [i_1 - 1] [i_1 - 1]) - 7485130555812732973)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [12] [i_2] = var_8;
                    arr_11 [i_1 - 1] [i_1] = (((!(arr_2 [i_1 - 1] [i_3 + 1]))));
                    var_21 = (((((-((min((arr_1 [3]), (arr_9 [i_3 + 1] [10] [i_3 - 1] [5]))))))) + ((max(1208236662, 0)))));
                }
            }
        }
        var_22 &= (min(13594, ((((4294967281 || 38) >= (min(0, 1)))))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = ((~(arr_4 [i_4])));
        var_23 = (max(var_23, ((((arr_6 [i_4] [i_4] [i_4]) | ((((arr_1 [i_4]) ? (arr_1 [i_4]) : (arr_1 [i_4])))))))));
        arr_15 [i_4] [i_4] = (min(5225, 13594));
    }
    #pragma endscop
}
