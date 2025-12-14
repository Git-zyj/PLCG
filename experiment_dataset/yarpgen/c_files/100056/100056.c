/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((((((((9 ? 6483 : 2823135635))) ? var_7 : 18446744073709551607))) ? var_10 : (+-1875921232)));
    var_21 = ((2703429769 || ((min(18446744073709551608, (18446744073709551610 || var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_22 = var_13;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_3 - 1] [i_4] = ((((min(3158965948, 1471831660))) ? 21919 : (((arr_8 [i_1 + 1] [i_3] [i_3 - 1] [i_3] [i_4]) * (arr_8 [i_2 - 2] [7] [i_3 + 2] [i_3] [i_3])))));
                                var_23 = (18446744073709551607 * (-32767 - 1));
                                arr_14 [i_0] [i_0] = ((~(max(1581600299816671989, -2914175092326595017))));
                                var_24 = (max(var_24, var_18));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] = (arr_7 [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    var_25 = 2823135640;
    var_26 |= (min((((~(var_2 == var_1)))), var_3));
    #pragma endscop
}
