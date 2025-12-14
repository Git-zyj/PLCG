/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = 19767;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_16 [12] [i_1] [i_2] [i_3] [i_4] = (((((arr_6 [i_0] [i_1] [i_2]) || (arr_4 [i_1] [10] [i_3]))) ? (!0) : (min((6639 <= -158349629), (var_7 - 11323)))));
                                arr_17 [i_0] [i_1] = max((!6650), var_2);
                                arr_18 [i_0] = (min(65535, 1));
                                var_14 += arr_2 [i_4];
                                var_15 = (min(var_15, 10041));
                            }
                        }
                    }
                }
                var_16 = (min(((min(1, 0))), (((!998958584) ? (arr_1 [i_0] [i_1]) : 63))));
            }
        }
    }
    var_17 = (var_11 >= 65533);
    #pragma endscop
}
