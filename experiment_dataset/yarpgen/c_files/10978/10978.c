/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = ((~(arr_0 [i_1])));
                    var_21 = (0 / 32753);
                }
            }
        }
    }
    var_22 = -var_10;
    var_23 = (max((min(140485943965289228, 76)), var_4));
    var_24 ^= (((3 ? 3811015089 : var_6)));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    var_25 = ((((var_7 ? var_0 : var_5)) & (((3811015068 ? 4095 : (arr_9 [i_4 - 2]))))));
                    var_26 += ((~(arr_7 [i_3])));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_27 -= ((+(max((arr_11 [i_3]), var_9))));
                                arr_22 [9] [9] [i_5] [i_6 + 1] [i_4] [i_7] = (((((((arr_14 [i_4 - 3]) ? var_15 : var_6))) ? (arr_20 [i_4] [i_3] [1] [14] [6] [i_7]) : (arr_6 [i_3] [12]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
