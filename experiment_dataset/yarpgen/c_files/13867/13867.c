/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_1] = ((((arr_4 [i_1]) ? 50352 : var_6)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] [i_2 + 2] [i_3] [i_2] = ((max((-437442205 == var_6), var_11)));
                                var_15 = ((!(arr_0 [i_3])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_29 [i_7] [9] [i_7] [i_8 - 2] [i_9] = var_7;
                                arr_30 [i_5] [1] [1] [1] [i_7] = (!25897);
                                var_16 += ((!((!(((-45 ? 15190 : 31)))))));
                                arr_31 [7] [i_8 - 1] [i_7] [i_7] [i_7] [i_5] [i_5] = (((arr_20 [i_8 - 1] [i_8 + 2] [i_8 - 2]) || -1));
                            }
                        }
                    }
                    arr_32 [i_5] [i_5] [i_6] [i_7] = var_6;
                }
            }
        }
    }
    var_17 |= ((var_11 << (21907 - 21891)));
    #pragma endscop
}
