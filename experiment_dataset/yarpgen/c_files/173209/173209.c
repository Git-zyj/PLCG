/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((max(((2742727048917293652 ? 0 : 1)), var_0)) ^ (max(((var_7 ? var_9 : var_2)), var_6)))))));
    var_13 = -2065305273;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((min(0, (arr_4 [i_0 - 3])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = var_3;
                                var_16 = ((min(-2032044029, 5906629374141056819)));
                                var_17 = (min(var_17, (((((min((max(var_3, 12540114699568494782)), (arr_5 [i_1] [i_1 - 3])))) ? (max((arr_0 [i_3] [i_4]), -5906629374141056819)) : (((max(var_3, (min(var_3, var_8)))))))))));
                                arr_13 [i_0] [i_4] = ((!((!(((arr_5 [i_0] [i_3]) && 12540114699568494761))))));
                                var_18 ^= var_1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_2] [i_5 + 2] [i_6] = -13625898576369822604;
                                var_19 = (min(((7498132398209850129 ? 12540114699568494779 : -1930298524344089959)), var_4));
                            }
                        }
                    }
                    var_20 *= (((((~(arr_14 [i_0] [i_1] [i_1] [i_2])))) * ((12540114699568494768 ? ((min(var_2, var_11))) : (arr_8 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 - 4])))));
                }
            }
        }
    }
    #pragma endscop
}
