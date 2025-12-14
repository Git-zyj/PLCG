/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((((((min(var_14, (arr_4 [i_0] [i_0 - 1]))) >> (((min(-13890, -4545652336711339054)) + 4545652336711339058))))) || (var_0 & 13887)));
                arr_8 [i_0] [i_1] [i_1] = ((13899 ? (~0) : (max(-4545652336711339054, (13898 <= var_5)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_15 = max(3125886519, -13899);
                            var_16 = (min(var_16, (((13899 ? ((((min((arr_14 [i_2] [i_1] [i_1]), 44085))) ? ((((arr_13 [i_0] [i_1] [11] [i_3] [i_3]) ? var_7 : (arr_5 [i_2])))) : (max(13899, var_3)))) : ((((var_9 >= 59) ? -4398012956672 : (!13889)))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                var_17 ^= 25948;
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_28 [i_4] [i_4] [i_4] [i_4] = ((((-(arr_18 [i_6 + 1]))) >= ((max(-13890, 4398012956672)))));
                            arr_29 [i_4] [i_5] [11] [8] [i_5] [i_7] = (((arr_16 [13] [i_4]) <= ((27794 ? (((27794 ? 126 : 42571))) : ((13887 ? -4545652336711339054 : 42476))))));
                        }
                    }
                }
                var_18 = ((~(min((~58798), ((min(1, 30573)))))));
            }
        }
    }
    #pragma endscop
}
