/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = ((!(((-(64836 > 77))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = (arr_3 [i_1] [i_1]);
                                arr_13 [i_0] [i_1] [i_1] [i_1] [10] [20] [5] = ((19 > (64836 & 54391)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_4;
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 7;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 7;i_7 += 1)
            {
                {
                    arr_20 [i_7] = (((((3912196255791791082 < var_1) % 25117)) < ((var_5 ? var_4 : ((6488862520832827819 ? var_1 : 64845))))));
                    var_21 += (((max((!-4406), var_15))) | ((254 ? ((262143 << (-3912196255791791083 + 3912196255791791099))) : (var_10 | -6488862520832827833))));
                }
            }
        }
    }
    #pragma endscop
}
