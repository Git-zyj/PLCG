/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = -7203221384076971719;
                var_15 = (((((max((arr_2 [9] [i_1]), (arr_2 [i_0] [i_1])))) > (arr_4 [i_0] [i_0] [i_0 - 2]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_3] [i_3] [i_3] [i_3] [i_3] = ((1 % (arr_4 [i_0] [7] [i_2])));
                            var_16 ^= (min(((((arr_6 [i_0] [i_0] [i_0 - 2]) ? var_5 : (arr_7 [i_0])))), 2513979183));
                            arr_11 [i_1] [i_1] [i_2] [13] = (arr_2 [i_0] [i_0]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_17 = ((((!(arr_0 [i_0])))));
                                arr_19 [i_0 + 1] [i_1] [i_4] [i_5] [i_5] [i_6] = ((1780988112 ? 33880 : 2147483647));
                                var_18 -= (min((arr_7 [i_0]), 21));
                                arr_20 [i_5] [i_5] = (((((arr_13 [i_5 + 2] [i_0 + 1] [i_0] [i_0]) < (arr_17 [i_5 + 3] [i_1] [i_4] [i_5] [i_6] [i_4] [i_5]))) ? ((((-21 == (arr_15 [i_0] [i_5] [11] [i_0 - 1]))))) : (min((((arr_9 [i_0] [i_0] [i_5] [16]) ? var_11 : var_0)), (arr_8 [11] [i_5] [i_5] [i_0])))));
                                arr_21 [i_5] [i_5] [i_6] = (((min((arr_3 [i_5 + 1]), (arr_9 [i_0] [i_6] [i_5] [i_5 + 1]))) - -1));
                            }
                        }
                    }
                }
                arr_22 [i_0] [11] = 0;
            }
        }
    }
    var_19 = -var_4;
    var_20 = ((((((var_2 ? var_3 : var_14)))) ? ((-21 ? var_13 : 4525723866266495175)) : var_1));
    var_21 = (max(var_21, ((((((+(min((-32767 - 1), var_0))))) ? var_5 : ((((((5152302042410243690 ? 2147483647 : 4391))) ? -2 : ((6520066221421606668 ? -1 : 1))))))))));
    #pragma endscop
}
