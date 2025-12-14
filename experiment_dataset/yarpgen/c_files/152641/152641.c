/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_4 + 1] [i_0] = ((-1 ? (~-29409) : (max(((77 << (26 - 19))), -4))));
                                arr_13 [i_0] [i_0] [3] [i_2] [5] [19] = (max(((~(8925557609184435020 * 1))), (((-((min((arr_9 [i_0] [1] [1] [i_3] [13] [i_3]), var_11))))))));
                            }
                        }
                    }
                    var_14 -= (~var_5);
                    arr_14 [15] [i_1] [i_0] [i_1] = ((+((5 ? (!4294967293) : (((arr_0 [i_2]) % 8162984056332192963))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_15 = (min(var_15, (((~(((!(((6460110548043066909 ? var_2 : (arr_17 [i_1] [i_1]))))))))))));
                                var_16 -= ((~(min(((((arr_18 [i_0] [2] [6] [i_1] [i_0] [i_0] [12]) | (arr_11 [i_1])))), (max((arr_0 [2]), var_5))))));
                                arr_22 [i_0] [i_5] [17] [16] [i_0] [i_0] = (-76 <= -60);
                                arr_23 [i_0] [i_0] [i_2 - 2] [i_5] [i_6] = (max((((arr_21 [i_0] [i_1] [i_2 + 4] [19] [10]) - (arr_21 [i_0] [i_0] [22] [i_0] [i_0]))), (var_12 / 76)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
