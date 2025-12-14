/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 = (max(var_17, ((max((max((min(8960707349631311485, 9)), 1)), (min(-121, (max(250, -7512343838464775091)))))))));
                        arr_14 [i_0] [i_0] [1] [1] = min(7512343838464775071, 1);
                    }
                    var_18 = ((max(((min(var_15, var_0))), var_12)));
                    var_19 = ((min(var_14, (max(4821017854086553259, 70368744177663)))));
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    arr_18 [i_0] [i_1] [i_4] [i_4] = var_14;
                    arr_19 [i_0] [i_1] [i_4] [i_1] = (min((max(-59, ((max(var_7, var_11))))), ((min(-4821017854086553260, -1893431055528812239)))));
                }
                var_20 = (min(((max(var_16, 1))), (min(var_13, 1))));
                arr_20 [i_1] [i_0] [i_1] = (max(1, var_9));
            }
        }
    }
    var_21 ^= ((((max(((var_8 ? var_5 : var_14)), var_13))) ? var_12 : (max(var_5, var_0))));
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_22 = (max(var_5, (min(((max(var_8, var_4))), (min(var_5, var_2))))));
                                var_23 = (((max((max(var_5, var_10)), var_11))) ? ((((min(var_7, var_10))) ? (max(var_1, var_12)) : (max(var_5, var_13)))) : ((max(((min(121, 249))), (min(1, 1230728789))))));
                            }
                        }
                    }
                    var_24 = (max(var_16, (min(var_14, 1))));
                    var_25 = (min(var_25, (((min(var_9, (min(var_14, var_5))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_26 = (max((max(var_11, var_4)), ((max(1, -112)))));
                                arr_41 [i_5 - 1] [i_7] [i_7] [i_5 - 1] = (max(1, 1));
                                var_27 ^= (min(121, ((max((max(var_0, var_6)), var_10)))));
                                var_28 = min((max(((216 ? 7512343838464775098 : 216)), ((max(var_0, var_8))))), ((min(15872, 97))));
                            }
                        }
                    }
                    arr_42 [i_5 - 1] [i_7] [i_7] [i_5 - 1] |= (min(-7512343838464775071, ((max((max(7512343838464775085, -103)), (((var_5 ? var_4 : var_2))))))));
                }
            }
        }
    }
    #pragma endscop
}
