/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((arr_2 [i_0] [i_0]) ? (((((-(arr_2 [i_0] [i_0])))) ? (192 ^ 117) : (arr_0 [i_0]))) : (arr_0 [i_0])));
                arr_5 [i_0] [i_1] = ((191 ? 576460752303423487 : 17870283321406128129));
                arr_6 [i_1] [i_1] [i_0] = (!10244815131912262851);
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [4] [i_0] [4] [i_3] [i_4] = (((arr_7 [i_0] [i_1] [i_0]) ? (max((arr_13 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4]), (arr_7 [i_0] [i_1] [i_4]))) : (((((arr_7 [i_0] [i_1] [i_0]) < (arr_1 [i_1] [i_0])))))));
                                var_19 = (min((((~var_11) ? ((~(arr_3 [i_3] [i_3] [i_3]))) : var_4)), (((!(((63 ? 6644357562464657000 : 8388576))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((!((min(var_2, -var_7)))));
    var_21 = (max(var_1, ((((var_2 | var_2) < var_6)))));
    #pragma endscop
}
