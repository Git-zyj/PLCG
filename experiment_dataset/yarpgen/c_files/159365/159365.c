/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-23715 || -1603260324) ? var_2 : (((var_0 || var_1) ? (42848 && -23717) : 1)));
    var_11 &= (((-1603260324 <= 846279416) ? ((~(!var_9))) : var_2));
    var_12 = (((max((0 | 23688), 42834)) % var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_2] [i_1] [i_3] = (arr_11 [i_3] [9] [i_3]);
                            arr_13 [14] [i_3] [7] [i_3] [14] = (((~1603260314) ? ((~(arr_6 [i_0] [1]))) : (((arr_6 [i_0] [i_0]) ? (arr_6 [i_2] [i_3]) : (arr_6 [i_2] [i_1])))));
                        }
                    }
                }
                arr_14 [i_0] [i_1] = (23716 ^ -3095883796864712007);
                arr_15 [i_0] [i_0] [i_1] &= (19944 | ((-2 ? ((min(-23712, 23688))) : 23688)));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_13 = (((!(arr_19 [i_0] [i_4] [i_4] [i_4] [i_6]))));
                                arr_22 [i_0] [6] [i_4] [6] = ((((min(1603260324, ((67043328 ? 398426885 : 667106318))))) ? (!var_4) : (((arr_19 [i_6 + 4] [i_6 + 1] [i_6 - 2] [i_4] [i_6 + 1]) + 32748))));
                                arr_23 [i_4] = ((1 ? 39506 : -14));
                            }
                        }
                    }
                }
                arr_24 [i_1] [4] [i_0] = ((~(~250)));
            }
        }
    }
    #pragma endscop
}
