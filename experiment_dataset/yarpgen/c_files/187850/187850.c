/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_8 % ((63 ? (((var_3 ? -64 : 192))) : 5573734746194880230))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_11 |= 17352386956347515589;
                        var_12 = (((((1 ? var_0 : var_1))) ? (arr_7 [i_2] [i_2] [i_2]) : (min(((max(63, 158))), var_0))));
                        arr_11 [i_0] |= (((((var_9 - ((max(var_6, var_2)))))) ? 1343033563 : ((-((var_4 ? var_8 : var_6))))));
                        arr_12 [13] [i_3] &= (((arr_10 [i_2] [i_0 - 4] [i_0] [i_0 + 1]) ? ((-(arr_5 [i_0] [i_0 - 1] [i_2]))) : (((var_2 ? var_7 : var_2)))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_18 [i_5] [i_4] [5] [5] [5] [i_0 - 3] = -18446744073709551615;
                                var_13 &= ((((((!(!var_9))))) % (((((var_5 ? 63 : 17352386956347515592))) ? ((-(arr_9 [i_0 - 1] [i_2] [i_4]))) : (~var_3)))));
                                arr_19 [i_0] [i_1] [4] [i_2] [i_1] [i_5] [i_5] &= (((arr_2 [i_0 - 2] [i_0]) || ((((var_9 / var_1) ? var_5 : ((max(53144, var_2))))))));
                            }
                        }
                    }
                    var_14 = (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [9]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            {
                var_15 = (max(((((var_1 < (arr_16 [i_7] [i_7] [i_7] [i_6] [i_6] [i_6] [i_6]))) ? ((max(152, 1))) : ((max(-114, var_3))))), (min(var_4, (arr_24 [1] [i_6])))));
                arr_25 [4] &= (34 + 255);
                var_16 = (min(var_16, var_9));
            }
        }
    }
    #pragma endscop
}
