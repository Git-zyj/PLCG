/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_10 [i_0 + 1] [i_0] [i_0 + 1] = ((((274743689216 ? 8355840 : 288230367561777152)) > (((45898 ? 4160749568 : 1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_11 *= ((!(!var_1)));
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_4] = (((0 * 0) == -274743689216));
                                var_12 = -var_10;
                                var_13 = (arr_4 [i_1 - 2] [i_0] [i_1 - 1]);
                                arr_18 [i_0 - 3] [i_0 - 3] [i_2] [i_0] [i_4] = ((((((((24642 ? -274743689210 : (arr_0 [i_0 + 1] [i_1 - 2]))) == (((-(arr_11 [i_0] [i_0 - 3] [i_0 - 2])))))))) <= 1));
                            }
                        }
                    }
                    var_14 -= (min((-6175407323136124764 - 2115123621), 58775));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 24;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        arr_27 [i_5] [i_6] [i_5] [i_8 + 1] |= var_4;
                        var_15 = ((var_0 ? -6175407323136124764 : 19638));
                    }
                    var_16 = ((6175407323136124772 ? 58775 : 4));
                    arr_28 [i_7] [i_6] [i_6] [i_7] = (min(19319, (--117)));
                }
            }
        }
    }
    var_17 = var_0;
    var_18 = (((((274743689218 ? 1 : 1668199990))) ? (((var_8 ? 2238952932 : var_3))) : (((274743689228 != (((var_6 ? var_9 : 7936))))))));
    #pragma endscop
}
