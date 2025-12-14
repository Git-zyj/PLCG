/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1685362296;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_11 = -12784;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 += (-7299953627285309384 && 1685362296);
                                arr_16 [i_0] = var_7;
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [7] [i_2] = arr_4 [i_1] [i_0] [i_1];
                    arr_18 [i_0] [i_2] = (max((46721 && 1685362304), 1685362285));
                    var_13 = ((((1685362308 != (arr_14 [i_0] [i_1] [i_1 - 1] [4] [i_1 + 1] [i_1 + 1] [i_2]))) && (((3367961723 ? 2609605012 : 1685362285)))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_14 = ((((((arr_7 [i_5] [i_5] [i_5] [i_5]) && (arr_5 [i_5] [i_5] [1]))) ? var_4 : (549755813887 && 0))));
        arr_21 [i_5] = 1685362284;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_25 [i_6] = 1;
        var_15 = var_2;
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 18;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_16 = (max(var_16, 2609605017));
                                arr_39 [i_9] [i_7] = (arr_15 [i_6] [i_7 - 2] [i_8] [i_9 + 1] [i_7 - 2]);
                                var_17 *= (!var_6);
                            }
                        }
                    }

                    for (int i_11 = 4; i_11 < 17;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                        {
                            arr_45 [i_12] [2] [i_8] = ((arr_13 [i_11 + 1] [i_8 - 2] [i_12] [i_8 + 1] [i_12] [i_7 - 1] [i_6]) >> (var_8 - 50926));
                            var_18 = ((((arr_20 [i_7]) >= (arr_2 [i_11] [i_12]))));
                        }
                        for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
                        {
                            var_19 = (((arr_47 [i_8 + 1] [i_7 + 1]) < (arr_2 [i_7 - 2] [i_11 - 3])));
                            arr_50 [i_6] [i_6] = ((((((arr_41 [5] [i_7] [i_8]) && (arr_47 [i_6] [i_11])))) % var_8));
                            arr_51 [i_6] [i_7 - 2] [i_8 + 1] [i_11] [i_13] = 1;
                            arr_52 [i_6] [i_6] [i_8 + 1] [i_11] [i_13] [i_7 + 1] = (!1685362280);
                        }
                        var_20 = ((var_5 ? 1 : 1685362274));
                        arr_53 [i_6] [16] [i_6] [i_6] [i_6] = 219133902;
                    }
                }
            }
        }
    }
    var_21 = (max(var_21, var_2));
    #pragma endscop
}
