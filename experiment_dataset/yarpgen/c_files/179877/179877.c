/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -31764;
    var_18 = -4;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [20] &= (~((((~17493) <= (2131088788342534029 != var_10)))));
        var_19 = (max(var_19, ((((~13) - ((~((var_8 ? (arr_3 [0]) : 31661)))))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((31764 ? (!-31764) : (max(39941, (((arr_0 [i_1] [i_1]) ? 16 : var_10))))));
        arr_8 [10] [i_1] = 15;
        arr_9 [18] [i_1] &= ((~(((arr_3 [4]) / (((arr_5 [i_1]) ? -61 : var_13))))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = (((((var_7 ? ((65534 ? 1549386530 : var_13)) : (arr_1 [i_2])))) ? var_1 : ((~(~0)))));
        var_20 = (!175);
        var_21 = (((((arr_12 [i_2]) < (6677267140101608071 / 81349239147816075))) ? (((!(-2147483647 - 1)))) : (-1 - -0)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] &= ((22 ? 0 : 1871018154));
        var_22 = (((~1) ? 2232871346751579848 : (((~(arr_10 [i_3] [i_3]))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 20;i_5 += 1)
            {
                {
                    arr_24 [i_3] [12] [1] = (((((31772 ? 0 : 9216))) % ((1871018183 ? 805306368 : 250))));
                    var_23 ^= (arr_5 [i_4 - 1]);
                    arr_25 [i_5 - 3] [i_4] = (((3428466655882227426 / 8) ? (((1 ? 39933 : (arr_20 [14] [13])))) : (-1 & -96)));
                }
            }
        }
        arr_26 [i_3] = (!var_5);
        var_24 = (((((arr_11 [i_3] [i_3]) + 9223372036854775807)) >> (((arr_11 [i_3] [i_3]) + 4613527124399980374))));
    }
    #pragma endscop
}
