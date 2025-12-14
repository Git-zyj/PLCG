/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 -= ((((~0) ? (arr_0 [i_0] [i_1]) : (((~(arr_4 [i_0] [i_1])))))));
                var_20 = (min(var_20, (((((max(var_5, (arr_1 [i_1] [i_0])))) ? ((((arr_5 [i_1]) == (arr_5 [i_0])))) : (!1))))));
                arr_6 [i_0] = (min(34292629504, 1754169311));
                var_21 = (min(var_21, 4294967295));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_22 ^= min(((min(4294967295, 1))), var_11);
                                var_23 = ((((~1) > -1292528755)));
                            }
                        }
                    }
                    var_24 = (arr_11 [i_4]);
                    var_25 += (((arr_1 [12] [12]) && (arr_21 [9] [i_3] [i_3 - 3] [i_3 + 1] [i_3])));
                }
            }
        }
    }
    #pragma endscop
}
