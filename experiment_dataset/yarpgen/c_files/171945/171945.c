/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (max(19, ((~(arr_0 [i_0] [i_0])))));

                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    var_16 = 120;
                    var_17 = 1;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_18 = (min(var_18, (arr_7 [i_0] [i_1] [i_1] [i_1])));
                    arr_10 [i_3] [i_3] = (arr_0 [i_0] [i_1]);
                    var_19 = (min((((arr_9 [i_3] [i_1] [i_3]) + (arr_5 [i_0] [6] [i_3] [i_1]))), ((~(arr_9 [i_3] [i_3] [i_3])))));
                }
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_20 = ((((~(((!(arr_3 [4])))))) - (arr_4 [i_1])));
                        arr_18 [i_0] [i_4] [i_0] [i_0] = (min(115, 47));
                        var_21 |= (arr_4 [i_1]);
                        var_22 = (arr_16 [i_0] [i_4] [i_0] [i_5]);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_23 = 1;
                        arr_22 [10] [i_4] [i_4] [i_6] = (((arr_4 [i_4 - 1]) * (!-113)));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_28 [i_4] [i_7 + 2] [11] [i_1] [i_4] = 105;
                                var_24 = (((1 ? 9223372036854775783 : 1)));
                            }
                        }
                    }
                    var_25 ^= (arr_13 [i_1] [i_1] [i_1]);
                }
                arr_29 [i_0] [i_1] [i_1] = ((((117 ? 120 : 12518646135078083296))) ? ((0 ? 1 : (arr_21 [i_0]))) : ((((902405909045654704 || (arr_25 [i_0] [4]))))));
                arr_30 [i_0] [i_1] [i_1] = (((((-(((arr_21 [i_0]) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_1] [i_1] [i_1])))))) ? var_12 : (arr_12 [i_0] [i_0] [i_1] [i_1])));
            }
        }
    }
    var_26 = var_4;
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 14;i_11 += 1)
            {
                {
                    var_27 = ((!(!92)));
                    var_28 = 117;
                }
            }
        }
    }
    #pragma endscop
}
