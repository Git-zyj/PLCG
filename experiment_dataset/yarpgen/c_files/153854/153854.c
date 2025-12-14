/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!(~var_1));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0 + 3] [i_0] [i_0 - 2] = (min((((4723090113292557257 ? 13152599250906948113 : ((min(49, var_5)))))), 960));
                var_12 += -var_0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_0] = (min((((arr_9 [i_3] [i_3] [i_0] [i_3 + 2]) ^ 16382)), var_5));
                            var_13 += -5294144822802603480;
                            var_14 = (((max(0, ((var_7 ? 2016 : var_0)))) == (!var_6)));
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] = ((96 ? 797 : 1));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_15 &= (((!38211) < (arr_9 [i_0] [i_1] [i_5] [i_5])));
                            arr_20 [i_0] [i_5] = ((((4 ? 2899613451863744055 : 8)) + (arr_6 [i_0 - 2] [i_1] [i_5])));
                        }
                    }
                }

                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    var_16 &= (arr_7 [i_0] [i_0] [i_0 - 1]);
                    arr_23 [i_0] [i_0] [i_0] = (arr_6 [i_0 + 1] [i_1] [6]);
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_17 += (((arr_9 [i_0 + 2] [i_0 + 1] [i_1] [i_0 + 3]) ? var_1 : (((!((max(166, 4241872760))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_33 [i_0] [i_0] [i_0] [1] [i_8] [i_9] = 18446744073709549606;
                                var_18 += (((!(arr_19 [i_0 + 2] [i_0 + 3] [i_0 + 1] [i_0 - 2]))));
                                arr_34 [i_0] [i_8] [i_7] [3] [i_0] = ((~((((((arr_26 [i_7] [i_1]) ? 1 : 81))) ? (arr_9 [i_0] [i_1] [i_0] [i_1]) : (3 >= 9223372036854775807)))));
                                arr_35 [i_0] [i_1] [i_0] = (min(4294967287, 1));
                            }
                        }
                    }
                    arr_36 [i_0] [i_0] [i_0] [7] = min(27, 3);
                    var_19 = (max(var_19, ((((((arr_27 [i_0 + 1] [i_0] [i_0] [i_1]) ? var_10 : (arr_6 [i_0 + 2] [i_0 - 2] [i_0 - 1])))) ? ((-var_5 * ((0 ? var_3 : -126)))) : (((((308892925 << (var_7 + 59)))) + var_3))))));
                    arr_37 [i_7] [i_0] [i_7] = ((1 ? 48 : 262143));
                }
            }
        }
    }
    #pragma endscop
}
