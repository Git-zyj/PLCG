/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (+-8684136250319955612);
    var_14 = (min(0, var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = ((!((!(!var_3)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_0] [i_2 + 2] [i_0] [i_2] = ((129 / ((0 - (arr_6 [i_2 + 2] [i_2] [i_2])))));
                                var_16 = (max(var_16, ((min((max((~var_6), ((var_3 ? 1 : (arr_3 [i_0]))))), (arr_1 [1]))))));
                                var_17 = (max(var_17, var_5));
                                var_18 = (max(var_18, (((~(arr_3 [i_4]))))));
                            }
                        }
                    }
                    var_19 = ((((arr_6 [i_2] [i_2 + 1] [i_2 - 3]) ? (arr_6 [1] [i_2 - 2] [i_2]) : 0)));
                    var_20 = max((((((30720 ? var_7 : var_8))) ? (arr_0 [i_0]) : ((var_11 ? (arr_0 [i_0]) : (arr_3 [i_0]))))), ((+(((arr_11 [14] [14] [14] [i_2] [i_2]) ? var_3 : var_10)))));
                    arr_14 [i_0] [i_2] = (min(((((((var_12 ? 1 : 1))) && (arr_10 [i_2] [i_1 - 2] [i_2] [i_1] [i_2 - 1])))), (1 + var_4)));
                }
            }
        }
    }
    #pragma endscop
}
