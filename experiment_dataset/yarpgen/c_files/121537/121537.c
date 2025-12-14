/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (max(var_17, -18050));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] = (min((arr_3 [i_3] [15] [i_0]), ((var_0 ^ ((max((arr_1 [4]), (arr_5 [i_4]))))))));
                                var_18 &= (arr_4 [i_2]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_19 [12] [12] &= (~var_1);
                            arr_20 [14] [i_0] [5] [i_1] [i_5] [i_6] = (max(((var_5 ? (arr_5 [i_1 - 1]) : (arr_5 [i_1 + 1]))), (((arr_5 [i_1 + 1]) ? (arr_17 [i_0] [i_0] [i_1 + 1] [i_1] [i_6 + 2]) : (arr_5 [i_1 - 3])))));
                            var_19 = (max(var_19, ((max((arr_0 [i_5]), ((((var_10 * 0) ? ((-21588 ? var_6 : var_0)) : ((max((arr_16 [6] [6]), var_16)))))))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_20, ((((!var_16) * ((((min(var_8, var_2))) * (var_14 < var_2))))))));
    #pragma endscop
}
