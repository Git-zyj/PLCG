/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_3] [i_3] [i_3] = (max((min(-33, (max(1875199757, 1327256022172541354)))), 33));
                            var_19 += (((arr_6 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]) > ((3 >> (((arr_8 [i_0] [i_0] [i_0] [i_3]) - 23237))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_20 += (((((((arr_3 [i_0]) ? (arr_5 [1]) : (arr_2 [i_0] [i_0] [i_6])))) ? ((((!(arr_17 [i_0]))))) : (max(114, 1875199757)))));
                                var_21 = (arr_7 [i_6] [i_0] [i_6] [i_0] [i_6] [i_6]);
                                var_22 = ((max(((min((arr_6 [i_0] [i_1] [i_4] [i_5]), (arr_15 [1] [i_4] [i_5] [i_6])))), -13891161539362016175)));
                                arr_19 [i_1] = (arr_11 [i_5 - 1] [i_5 - 2] [i_5]);
                            }
                        }
                    }
                }
                arr_20 [16] = (arr_8 [i_1] [i_0] [10] [i_1]);
            }
        }
    }
    var_23 = ((((!(((var_18 ? var_13 : var_13))))) ? var_11 : (((max(var_12, (var_18 < 2419767538)))))));
    #pragma endscop
}
