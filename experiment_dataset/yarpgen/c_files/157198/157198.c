/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] |= 0;
        var_16 = (min(var_16, -6310510357374537501));
        arr_3 [i_0] = (max(-6505, -5438));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (!((max(var_12, (arr_5 [i_1])))));
        arr_7 [i_1] [i_1] = (((((~(max(var_13, (arr_5 [i_1])))))) ? var_15 : 28325));
        var_17 = -1240099780;
        arr_8 [i_1] = (!-var_12);
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_11 [22] [22] = ((((3846103934 ? 1467247605 : -3822891629976796005)) | -5423));
        arr_12 [i_2] = ((!((!(arr_10 [i_2] [i_2])))));
        var_18 = 11329186947356945343;

        for (int i_3 = 4; i_3 < 22;i_3 += 1)
        {
            var_19 = (min(var_19, ((((var_3 ? var_2 : (arr_13 [i_2] [i_3 - 4] [i_3 + 1])))))));
            var_20 = (max(var_20, ((max((arr_10 [i_3 - 3] [i_3 - 1]), (arr_10 [i_3 - 3] [i_3 - 3]))))));
        }
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 16;i_4 += 1)
    {
        var_21 = (min(var_21, ((~(arr_15 [i_4 + 3] [i_4 + 3])))));
        arr_18 [i_4] = (arr_17 [i_4 - 3]);
        var_22 = var_12;
        var_23 = (arr_15 [i_4 + 2] [i_4 - 3]);
        arr_19 [i_4 - 2] [i_4] = (((arr_14 [15]) ? (arr_9 [i_4 - 3]) : (arr_10 [i_4 - 1] [i_4 + 3])));
    }
    #pragma endscop
}
