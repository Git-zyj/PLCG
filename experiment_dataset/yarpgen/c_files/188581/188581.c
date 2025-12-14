/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (max(var_4, ((((var_5 + 2147483647) >> (var_14 - 3549284931822292571))))));
    var_18 = var_5;
    var_19 = (max(var_19, ((((var_9 / (1473642396 / 250)))))));
    var_20 ^= (var_0 ? ((min(-1636205827, 250))) : ((var_2 << (var_16 - 57092))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = (var_13 ? (arr_3 [i_0] [i_0]) : var_10);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_13 [12] [12] [12] [12] [i_1] = min((arr_12 [i_3 - 1] [i_1] [i_1] [i_0]), (arr_8 [18] [18] [18] [1]));
                        var_22 = 42849;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_23 = var_1;
                            var_24 = (arr_8 [i_3 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                            var_25 &= (579735998 > -1448981291);
                            arr_16 [i_0] [i_1] [11] [i_2] [i_0] [i_1] = (var_5 > var_10);
                            arr_17 [i_0] [4] [i_1] [i_3 - 1] [i_2] = var_0;
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            var_26 += (max((((arr_5 [i_0]) ? (min(-870704850, 1)) : (arr_10 [i_3] [i_2] [i_1]))), (arr_7 [i_2] [4])));
                            var_27 = ((-(arr_5 [i_0])));
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [i_1] [1] [1] = arr_21 [i_0] [i_1 - 1];
                            var_28 ^= ((((((((var_8 != (arr_9 [i_0])))) << (arr_3 [i_1] [i_2])))) ? ((max(var_4, var_6))) : (18446744073709551615 & 11296046066713490519)));
                        }
                    }
                }
            }
        }
        arr_24 [i_0] [18] = (((((3807905741042086705 ? -870704871 : 4580063809214075262))) ? var_15 : var_10));
        var_29 ^= max((arr_18 [i_0] [i_0] [18] [i_0] [i_0]), (((var_8 >> (((arr_4 [i_0] [i_0] [i_0]) >> (var_10 - 16256768115521938283)))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_30 = (max(var_30, (-870704863 != 3513787127437409004)));
        var_31 = (min(var_31, ((((arr_10 [1] [i_7] [i_7]) % (arr_6 [i_7] [5]))))));
    }
    #pragma endscop
}
