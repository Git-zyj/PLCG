/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (arr_0 [i_0])));
                arr_6 [i_0] [i_1] = ((var_4 ? ((2475 ? 18253975235322541448 : -1162)) : (~var_1)));
            }
        }
    }
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_16 = ((((((((-84 ? (arr_5 [16]) : 7382))) ? ((-23343 ? 7382 : 10825575377501101208)) : -4926590916527087462))) ? (25030 >= -7661252008101726632) : (min(1766258102, ((var_0 ? (arr_4 [i_3]) : 976316769597709889))))));
                var_17 += (((((((!(arr_4 [i_2]))) ? (((0 ? -25031 : var_3))) : (arr_0 [i_3])))) ? (min((!58151), ((2 ? 982178766 : var_5)))) : ((((min(0, 3116)))))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_15 [i_2] [i_3] [8] &= (106 + var_2);
                    arr_16 [i_4] [i_3] [i_4] = ((3112 ? 1162 : -3112));
                    var_18 += -4990613570507011195;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_19 += var_7;
                                arr_22 [i_4] [i_3] [4] = 3419075761;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
