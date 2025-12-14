/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -var_6;
        arr_3 [i_0] = arr_1 [i_0];
        var_11 = var_9;
        arr_4 [13] [13] = ((26 >> (((arr_1 [i_0]) - 111))));

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = (var_0 >> 1);
            var_12 |= ((arr_0 [i_1 + 2] [i_1 + 2]) ? (~var_8) : 1);
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_12 [i_0] [i_0] [i_0] = ((50 ? (!var_1) : (arr_1 [i_2])));
            arr_13 [i_0] [i_2] [i_2] |= (((arr_0 [i_2] [i_0]) + var_4));
            var_13 += ((var_0 ? var_0 : var_9));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_14 = (max(var_14, -1));
                arr_19 [i_0] [i_0] &= (arr_17 [i_0]);
            }
            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                var_15 = (max(var_15, var_3));
                var_16 ^= (~3069754594);
            }
            var_17 &= var_9;
            arr_22 [i_0] |= var_7;
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_25 [i_6] = ((53544 ? var_2 : (~var_6)));
        var_18 = (max(var_18, ((max(((((!(arr_9 [21] [i_6]))) ? (max(var_8, (arr_0 [i_6] [i_6]))) : var_1)), (((((max(var_9, -1060724919))) && var_4))))))));
    }
    var_19 += 32514;
    var_20 |= (max(((((max((-32767 - 1), 0))) ? 53544 : (var_2 < var_1))), ((~((max(var_0, 50)))))));
    #pragma endscop
}
