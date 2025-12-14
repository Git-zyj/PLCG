/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] [i_1 - 1] = (!108);

                /* vectorizable */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_18 = var_10;
                    var_19 ^= 931161588;
                    arr_12 [i_1] [i_1] [i_1] = (arr_6 [i_1] [i_2 + 1]);
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_20 = (((min((7 / var_8), (((var_7 ? 50331648 : var_7))))) % -112));
                    var_21 = (min(var_21, (~58736)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_22 = (min(var_22, var_3));
                                arr_20 [i_0] [i_1] [i_1] [i_4] [i_4] [i_1] = (max(6, -25160));
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_23 ^= ((0 ? 36 : 112));
                        arr_23 [i_1] [i_3] [i_1] = var_0;
                    }
                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        var_24 *= ((((11776759359891941353 >> (127 - 80))) / ((((((96 * (arr_3 [i_0])))) ? 121 : (min((arr_22 [i_3]), (arr_1 [i_0]))))))));
                        arr_27 [i_0] [i_1] [i_3] [i_1] = (((var_5 & 0) ? (min((arr_25 [i_7 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 1]), ((var_13 ? 16257726474495697743 : (arr_19 [i_1] [i_1 + 1] [i_3] [i_3] [i_7 + 3]))))) : (min((arr_24 [i_1 - 1] [i_1] [i_1] [i_7 - 1] [i_7]), var_14))));
                        var_25 |= (min(11489, var_7));
                        arr_28 [i_0] [i_0] [i_7 + 3] |= (max(11468, 62));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_26 = (max(var_26, ((((arr_26 [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 1]) ? ((((arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1]) || var_17))) : ((((arr_26 [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) > (arr_18 [i_1 - 1])))))))));
                        var_27 += ((var_5 < (min(79, var_0))));
                        arr_32 [i_8] [i_3] [i_3] [i_0] &= ((!(((arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1]) <= 65037))));
                    }
                    arr_33 [i_1] = var_9;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                {
                    var_28 = (+((min((54067 || 54060), (arr_37 [i_10 + 1])))));
                    var_29 = (max(var_29, (arr_34 [i_9 + 1])));
                }
            }
        }
    }
    var_30 = (max(var_12, (~var_17)));
    #pragma endscop
}
