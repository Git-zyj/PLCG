/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (max(((((46 ? 11861 : 18446744073709551615)) % (((1070151331 ? var_11 : var_2))))), var_10));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max((max((arr_0 [i_0] [i_0]), 47)), (47 < 205)));
                arr_6 [i_0] = 216;
                var_14 = max(253, ((((min(14, 992))) ? 64544 : 2617)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                var_15 = (((~254) && ((min((min(1781049514841936419, (arr_13 [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_0]))), ((min((arr_7 [i_4]), 27433))))))));
                                var_16 ^= ((!(((((max(-1070151331, (arr_9 [i_0] [i_0] [i_2] [i_3] [i_3] [7])))) ? ((992 ? var_9 : 26398)) : (max(1070151338, (arr_14 [i_1] [i_3] [i_4]))))))));
                                var_17 = (((var_1 / 1070151338) ? (min(4294967295, ((1070151333 ? -1 : 248)))) : (((+(((arr_4 [i_0] [i_1] [i_4]) ^ (arr_8 [i_0 - 4] [i_1] [i_1]))))))));
                                var_18 *= (~248);
                            }
                            var_19 ^= (min((((max(-1735834777, var_7)))), (min(((((arr_1 [i_2] [i_3]) ? 139 : (arr_9 [i_0] [i_0] [6] [i_0] [i_0] [i_3])))), 18446744073709551615))));
                        }
                    }
                }
                var_20 = 20560;
            }
        }
    }
    var_21 = (min(((((max(21245, var_5))) + 241)), ((var_0 ? (255 * var_2) : var_12))));
    var_22 = var_3;
    #pragma endscop
}
