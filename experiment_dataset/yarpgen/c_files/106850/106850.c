/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= -72;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 &= ((((min((arr_6 [i_0] [i_1] [i_1]), (arr_6 [i_0] [i_1] [i_1])))) ? (arr_6 [i_0] [i_1] [i_1]) : (arr_6 [i_0] [i_1] [i_1])));
                var_16 = (max(var_16, ((max((max((arr_6 [i_1] [i_1] [i_1]), 66060288)), (((((min((arr_5 [i_1] [6]), var_4))) == var_5))))))));
                var_17 = (arr_2 [5] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_18 = 1;
                            var_19 = (((1 * 1) ? var_13 : ((37604 ? 71 : (arr_10 [i_0] [8] [i_3])))));
                            var_20 = (arr_8 [i_0] [i_1] [i_2]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_21 ^= -21;
                                var_22 += ((max(((max(-1, 79)), 32767))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
