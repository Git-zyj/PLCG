/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((((max(var_1, 19602))) ? ((((arr_0 [i_1]) == var_3))) : (arr_3 [i_0 - 1] [i_0 - 1])))) ? (((!((min(16383, (arr_3 [i_0] [9]))))))) : (arr_0 [1])));
                arr_5 [i_1] [1] = ((((4829422582369796185 ? (arr_2 [i_0] [i_0 - 1] [i_1]) : (arr_2 [i_0 + 2] [i_0 + 1] [i_0]))) << (((((((0 ? (arr_2 [i_0] [i_0] [i_0 + 3]) : var_8))) ? (arr_3 [i_0 + 3] [i_0 - 2]) : (arr_3 [i_0] [i_1]))) - 14845))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_18 [i_6] [i_3] [i_4] [i_5] [i_2] = (arr_12 [i_5 + 2]);
                                arr_19 [i_2] [i_6] [i_4 - 1] [i_6] [i_6] = (arr_7 [i_4] [i_5]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_25 [i_8] = (!var_2);
                                arr_26 [i_2] [i_2] [i_4] [i_7] [i_8] = 3397319138;
                            }
                        }
                    }
                    arr_27 [i_2] [i_2] [i_3] [i_4 - 1] = max(var_4, (max(2041722846, (arr_11 [i_3] [1]))));
                }
            }
        }
    }
    #pragma endscop
}
