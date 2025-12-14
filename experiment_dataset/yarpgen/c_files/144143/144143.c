/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, ((((!111649811) ? 4281770561 : (arr_5 [i_0 + 1]))))));
                            var_20 = (max(((-((-(arr_5 [i_0 + 1]))))), ((-(((arr_1 [i_0]) ? var_11 : (arr_7 [5] [8] [i_2])))))));
                        }
                    }
                }
                var_21 = (-(arr_8 [i_0] [i_0] [i_0] [i_0] [i_1]));
                var_22 = (min(var_22, ((min(((((var_16 / 4183317484) >= (min(var_2, 111649811))))), 111649806)))));
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_23 = (((arr_1 [i_4 - 1]) ? var_14 : (((((((arr_14 [i_5 + 1]) ^ var_7))) & (((arr_2 [i_5 - 1]) ? var_0 : var_8)))))));
                                var_24 = ((max(((arr_14 [i_5]), ((111649811 ? var_13 : (arr_11 [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (var_18 << var_3);
    var_26 -= ((min(var_15, (max(10749610976106908525, var_10)))));
    var_27 = ((((var_11 ? ((max(228, 1))) : (~var_18))) & var_3));
    #pragma endscop
}
