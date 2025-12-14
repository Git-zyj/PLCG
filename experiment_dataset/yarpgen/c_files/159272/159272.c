/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (arr_2 [i_1])));
                var_13 -= (max((((!(((17957 ? var_1 : (arr_3 [i_0] [i_0]))))))), (arr_1 [i_1])));
                var_14 = (arr_4 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_15 = (((((-(arr_3 [i_1] [15])))) ? (((!(arr_7 [i_0 - 3] [1] [i_0] [i_1])))) : (min((arr_9 [i_3] [i_0] [i_2] [i_0 - 4] [i_0] [i_0 - 4]), (arr_5 [i_0] [i_1] [14] [i_3])))));
                            arr_11 [i_0] [i_1] [i_0] = (arr_6 [i_0] [i_1] [0] [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_16 += (var_6 & var_8);
    var_17 = var_4;
    var_18 = ((max(((78 ? 5948268905891120029 : 21733)), (var_8 / 1))));
    #pragma endscop
}
