/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
                            {
                                arr_15 [i_4] [i_1] [i_2] [i_1] [i_0 - 1] = 316159761;
                                var_20 = (i_1 % 2 == zero) ? (((2267981303 << (((arr_8 [i_1]) + 24657))))) : (((2267981303 << (((((arr_8 [i_1]) + 24657)) - 23206)))));
                                var_21 -= ((1048575 == (((!(arr_0 [14]))))));
                                arr_16 [i_1] [2] [i_2] [2] [i_3 + 2] [i_2] [i_0 - 2] = (((((arr_0 [i_0]) << (316159771 - 316159768))) == var_0));
                                var_22 = var_9;
                            }
                            for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
                            {
                                arr_19 [i_0] [0] [i_1] [i_3] [14] [i_5 - 1] = 319297258;
                                arr_20 [i_0 - 1] [i_0 - 1] [10] [i_3] [i_1] [1] = (arr_13 [i_5] [i_5] [3] [i_2] [9] [11] [11]);
                                arr_21 [i_1] = (((arr_6 [i_0 - 1] [i_5 - 1]) - ((((min(-8209383046556766063, 319297228))) ? (((arr_13 [i_5 + 1] [1] [i_2] [i_1] [i_1] [i_1] [i_0 - 1]) / -71)) : ((var_10 << (arr_9 [i_3] [i_3] [i_1] [i_1] [i_0] [i_0])))))));
                            }
                            arr_22 [i_1] [i_1] [8] = (arr_0 [i_3]);
                        }
                    }
                }
                arr_23 [i_1] = (((!2029193819) ? -1 : (arr_0 [i_1])));
                arr_24 [i_0] [i_1] = 316159735;
            }
        }
    }
    var_23 = (((~319297228) ? var_7 : (min(30, (var_17 == 60)))));
    var_24 = (2147483647 && 45);
    #pragma endscop
}
