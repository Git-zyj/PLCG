/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_20 = ((~((((arr_1 [i_3 - 1]) > (arr_1 [i_3 - 1]))))));
                            var_21 = (max((var_12 || 7056212693981087586), (!296241474814576554)));
                            arr_14 [4] [i_2] [i_0] [5] [i_0] [i_0] = (((+((((arr_7 [i_0] [i_1 + 1] [i_0] [i_0]) == (arr_13 [i_0])))))));
                            var_22 = (arr_13 [i_0]);
                            var_23 &= ((((arr_4 [i_0 - 1]) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 + 1]))));
                        }
                    }
                }
                arr_15 [i_0] = (var_7 == var_4);
                arr_16 [i_0] [i_0] = arr_4 [i_1];
                arr_17 [i_0] = ((~(max(var_11, (arr_8 [i_0 + 1] [i_1] [i_1 + 1])))));
            }
        }
    }
    #pragma endscop
}
