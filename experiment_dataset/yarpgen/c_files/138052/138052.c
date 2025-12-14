/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_13 |= 1;
        arr_3 [i_0] [i_0] = ((~(((!(arr_0 [i_0 - 1] [i_0 - 1]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((((arr_4 [i_1]) ? var_1 : (arr_4 [i_1])))) ? -58572 : -12556197393404224002);

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_14 = (min(var_14, (((6964 ? 1 : var_0)))));
            var_15 = (max(var_15, var_2));
            var_16 = ((1 ? -var_5 : (!var_3)));
            var_17 *= (arr_10 [i_2] [i_1] [i_1]);
        }
        var_18 = (max(var_18, 1));
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                {
                    var_19 = var_10;
                    arr_15 [i_1] [i_3] [i_1] = (((((arr_7 [i_4] [i_3] [i_1]) ? 9223372036854775807 : (arr_12 [i_3] [i_4]))) % (arr_8 [i_1] [2] [i_4])));
                    var_20 = 12556197393404224002;
                }
            }
        }
        var_21 = (min(var_21, (arr_8 [18] [i_1 + 3] [i_1 + 2])));
    }
    var_22 = (max(1, 244));
    #pragma endscop
}
