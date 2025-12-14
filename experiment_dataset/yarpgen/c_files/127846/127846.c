/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((1772205656 ? 0 : 2776634137))) ? var_7 : (((((var_13 ? 21107 : 9899562727241313900))) ? -var_2 : ((var_8 ? 1811279911 : 10833531361966117983))))))));
    var_15 &= (44460 | 3519155220);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 ^= 26769;
                    var_17 = var_13;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [3] [i_1] [i_0] [i_4] = 65513;
                                var_18 = (arr_4 [11] [9] [i_4]);
                                arr_15 [i_0] = var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            {
                var_19 &= (((((((max(var_12, (arr_17 [i_5] [i_6 + 2])))) && (arr_19 [i_6 - 1] [i_6] [i_6])))) - ((var_6 ? var_10 : (29 * var_7)))));
                var_20 = (min(var_20, ((max(((147 || ((var_12 != (arr_17 [4] [17]))))), ((!(((47 ? var_0 : var_5))))))))));
            }
        }
    }
    #pragma endscop
}
