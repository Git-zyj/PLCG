/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -1;
    var_18 += ((var_5 ? ((((min(var_9, 77))) ? 9168859622061131691 : 63056)) : ((var_4 ? -3557 : var_12))));
    var_19 = ((~(((((var_13 ? var_4 : 0))) ? ((min(1498468638, var_16))) : ((var_13 ? var_11 : 77))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_20 = 9007199254675456;
                var_21 = (max(var_21, (arr_3 [2])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_10 [i_1] [i_3] [i_2] [i_2] [i_1] [i_1] = ((((var_4 <= 9007199254675456) ? (((~(arr_2 [i_1] [i_3] [i_1])))) : ((-17568 ? var_5 : (arr_0 [i_0]))))));
                                var_22 *= 1;
                            }
                        }
                    }
                }
                var_23 *= (!-9007199254675457);
                var_24 += ((-8669222069015556441 ? ((3236769579 ? var_7 : (min(7034459648962993367, -5762820996991605643)))) : 4294967295));
            }
        }
    }
    #pragma endscop
}
