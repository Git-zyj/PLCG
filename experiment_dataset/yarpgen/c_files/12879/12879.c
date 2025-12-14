/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((min(var_10, var_10))))) ? (!var_7) : (max(-32409, var_9))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_12 = (var_9 < var_6);
                                var_13 = ((-(((min((arr_9 [i_3] [i_1] [i_2]), (arr_0 [i_3]))) * (arr_2 [i_4] [i_3] [i_2])))));
                                var_14 = 30720;
                            }
                        }
                    }
                    var_15 &= (min(((!(arr_4 [i_2]))), (((0 - 21) != (arr_9 [i_2] [i_1] [i_0])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    arr_20 [i_5] [1] [i_5] = min((arr_16 [i_7] [i_7] [i_6]), 8912753437858587573);
                    var_16 ^= (arr_17 [i_5] [i_6] [i_7]);
                    var_17 = (min(((((165 / 1279130015241899119) / 7))), (((0 / 65524) ? 64 : ((var_0 ? (arr_16 [i_5 - 2] [i_6] [i_7]) : (arr_15 [i_6] [i_5 - 2])))))));
                }
            }
        }
    }
    #pragma endscop
}
