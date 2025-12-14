/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_5;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_21 = (min((arr_11 [0] [0]), (min((~3457883630034231648), ((max((arr_4 [i_0]), (arr_0 [8] [i_1]))))))));
                            var_22 &= (min(var_17, ((((arr_4 [i_0]) <= var_4)))));
                            var_23 = (((3457883630034231648 << var_19) ? (((var_19 % (((arr_3 [i_3] [0] [i_0]) ? (arr_5 [i_0] [9]) : 2147483633))))) : ((var_10 % (max(var_11, 1))))));
                            var_24 |= 1;
                        }
                    }
                }
                var_25 = ((~(~var_5)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_26 = (((((((var_8 ? var_6 : var_13)) / 31866))) ? var_8 : (arr_11 [i_0 - 1] [i_1])));
                            var_27 = ((((((arr_6 [i_0]) != var_19))) << (((!(~1))))));
                        }
                    }
                }
                var_28 = min(((min((arr_6 [i_0 - 2]), var_0))), (min(-2053497807, (1 > var_13))));
            }
        }
    }
    #pragma endscop
}
