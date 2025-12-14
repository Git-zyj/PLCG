/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = var_1;
                arr_6 [i_0] [i_0] [i_0] = (arr_3 [i_0] [i_1]);
                arr_7 [1] [i_1] = (((var_4 ? 5116245709023493583 : (((min((-32767 - 1), var_10)))))));
                var_14 = (max(var_14, (((var_10 + ((max(136, (arr_1 [i_0] [i_0])))))))));
            }
        }
    }
    var_15 = (~var_7);
    var_16 = ((var_12 ? var_12 : (max(var_8, var_4))));

    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_17 = ((~((((max(210, 0))) ? (((arr_10 [i_2 + 1]) ? (arr_8 [i_2] [i_2]) : var_4)) : (724878539 + var_0)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_18 = (max((arr_9 [i_2 + 1] [i_2 + 3]), (arr_8 [i_2 + 2] [i_2 + 2])));
                    var_19 = (((arr_11 [i_3]) ? (arr_14 [1] [i_4]) : var_2));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 8;i_6 += 1)
        {
            {
                arr_23 [8] &= (max(248, 4294967294));
                var_20 = (((~233) | 1));
                arr_24 [i_5] [8] |= ((min((arr_13 [i_6 + 1] [i_6 - 2] [i_6 - 2]), ((var_5 ? (arr_19 [i_5]) : 34259)))));
                var_21 = (((-32767 - 1) ? (((~0) ? var_3 : ((4088407324 ? var_9 : 141)))) : var_8));
            }
        }
    }
    #pragma endscop
}
