/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (((((((arr_1 [i_0 - 1] [i_0]) ? var_5 : (arr_1 [i_0] [i_0])))) ? (max(((((arr_1 [i_0] [i_0]) >> (var_6 - 16915170966248487003)))), (min(var_14, (arr_1 [8] [8]))))) : -32767)))));
        var_19 -= 3842874390;
        var_20 |= var_17;
        arr_2 [17] [17] = 5787594280341828805;
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_21 |= (max((arr_4 [i_1 + 1]), ((1435685424 + (arr_4 [i_1 + 1])))));
        arr_6 [i_1 - 1] = (min(((((arr_5 [i_1]) > (arr_1 [i_1] [i_1 - 1])))), (arr_3 [i_1])));
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        arr_9 [i_2 - 1] [i_2] = ((((max(var_13, (arr_3 [i_2])))) / var_17));
        var_22 = 1129648723;
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
        {
            arr_15 [i_4] = (arr_1 [i_4 - 1] [i_3 + 1]);
            var_23 = (min(var_23, (~65521)));
        }
        for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
        {
            var_24 = (max(var_24, (4294967295 ^ 0)));
            var_25 |= -var_12;
            var_26 += (~1129648723);
        }
        arr_18 [i_3] [i_3 - 2] = (!var_1);
        arr_19 [4] [i_3] = (~(arr_0 [i_3 - 1] [i_3 + 1]));
        arr_20 [i_3] = -6;
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            {
                arr_26 [i_6] |= var_8;
                arr_27 [18] [i_7] [i_7] = ((!((((arr_24 [i_6] [i_6]) | (!var_17))))));
                var_27 = (arr_1 [i_6] [i_6]);
            }
        }
    }
    var_28 = (max(65529, 238676841));
    var_29 = ((251 == ((-(min(10794119194289548189, 0))))));
    #pragma endscop
}
