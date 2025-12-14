/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max(-84, 1)) * 243));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (21 || 12684283746671048070);
                var_14 = -54;
                arr_6 [6] [i_1] = var_4;
                arr_7 [i_0] [i_1] [i_1] = 1;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                {
                    var_15 -= (~255);
                    var_16 -= (min((229 / var_11), ((((-42 ? -51 : 238))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_17 = 73;
                                arr_23 [i_6] [i_6] [0] = var_11;
                            }
                        }
                    }
                    var_18 = ((-18446744073709551615 ? 0 : (((!(!171))))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_30 [i_2 + 2] [i_2 + 2] [i_2 - 1] [2] [i_2] = ((((min(-var_1, (var_11 - -42)))) ? (((!(arr_13 [i_2 + 2] [i_7 + 2])))) : var_0));
                                var_19 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (!var_11);
    #pragma endscop
}
