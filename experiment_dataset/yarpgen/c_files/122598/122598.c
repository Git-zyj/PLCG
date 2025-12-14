/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (1863399857116392648 > 16128);
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_14 = (min(var_14, (~-18)));
                                var_15 = 1863399857116392648;
                            }
                            for (int i_5 = 1; i_5 < 16;i_5 += 1)
                            {
                                arr_19 [i_0] [i_2] [i_2] [i_3] [i_5] = (((!2147483647) ? -1073741824 : (max(-1, 0))));
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_2] = (arr_8 [i_0] [i_1 + 1] [i_2] [6] [i_2]);
                            }
                            arr_21 [i_0] [i_0] [i_1 - 2] [i_2] [i_2] [i_2] = ((134217728 ? ((((var_4 | var_3) ? ((max(-16807, (arr_3 [i_2])))) : ((min(-18, var_9)))))) : (arr_12 [5] [i_1] [i_1 + 1] [1] [i_2] [i_2] [1])));
                            var_16 = (arr_4 [i_0] [i_1] [i_0]);
                            var_17 += -15;
                        }
                    }
                }
                arr_22 [i_0] [i_0] [i_1] = (((var_2 ? (var_11 % var_5) : ((((var_7 < (arr_1 [i_0]))))))));
                var_18 ^= (((((0 ^ (((arr_14 [4] [4] [4] [i_0]) ? 1897546710 : (arr_10 [i_1] [i_0] [0] [i_1 + 1])))))) ? 1879048192 : 22));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_19 = var_11;
                                var_20 += min(121, (max(((1863399857116392660 * (arr_11 [i_0] [i_1] [i_0] [i_6] [3] [i_8]))), (arr_29 [i_1 - 2] [i_1 - 2] [i_8 + 1]))));
                                var_21 = (min(var_1, (arr_11 [i_0] [i_0] [i_6] [i_6] [i_0] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
