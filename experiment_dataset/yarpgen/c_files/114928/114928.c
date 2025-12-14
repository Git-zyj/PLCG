/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 - 2] [13] [1] = (min((4 && var_7), (max(-12861, (arr_2 [i_0])))));
                    var_11 = ((-243 ? (((!(arr_8 [i_0] [i_1] [i_2])))) : (arr_6 [i_0] [i_0])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                var_12 = ((~((min((arr_3 [i_3] [4] [i_3]), (arr_15 [i_3] [i_3] [i_3]))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_13 = ((~(((~(arr_6 [i_3] [0]))))));
                                arr_23 [i_3] [7] [i_5] [i_6] [i_7] [i_3] [i_5] = (arr_21 [i_4] [i_5] [i_7]);
                            }
                        }
                    }
                }
                var_14 = ((((((27 << (3671608253 - 3671608251))))) ? (((((~4) && ((min(192, 623359043))))))) : (((((-27 ? (arr_2 [i_3]) : (arr_3 [i_3] [i_4] [i_3])))) & ((var_5 ? var_3 : -6283630853039053924))))));
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_15 = (min(var_15, (((((min((!var_3), ((54010 << (arr_17 [i_9])))))) ? 7 : (min(13, -0)))))));
                            var_16 = 1;
                            arr_30 [i_9] [i_4] [i_9] = var_2;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
