/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (((~((var_11 % (arr_3 [i_0] [i_1]))))));
                    arr_8 [i_1] [i_0] [i_1] [i_2] = (((!((max(51339, var_2))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [1] [i_1] [i_1] [i_1] [i_0] [i_1 + 1] &= (((((var_7 ? ((var_13 ? 24178 : -11379)) : (!var_8)))) || 158));
                                arr_17 [i_0] = (((((1 || 3738442171) != 2344877413)) ? ((((((arr_5 [i_0] [i_1 - 1]) ? 1 : var_14))) ? (max((arr_0 [i_0] [i_1 - 1]), (arr_15 [10] [i_0]))) : 245)) : 6496106500237108455));
                                arr_18 [i_0] [i_1] = (max(((~(((arr_11 [i_0] [i_2 + 2] [i_2] [i_3]) ? 1 : var_11)))), (((((1 ? 12545741050419221617 : 215)) >= ((min(4286228314, var_12))))))));
                                arr_19 [i_3] [i_1 - 3] [i_0] [i_1 - 3] [i_1] = (min(((((((arr_15 [i_2 + 1] [i_1]) ? 8652331544771988004 : var_16))) ? var_16 : (max((arr_11 [i_4] [8] [i_2] [11]), var_12)))), (((268434944 && (var_11 > -70063776))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
