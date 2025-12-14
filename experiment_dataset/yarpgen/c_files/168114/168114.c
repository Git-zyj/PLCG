/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((((max(var_9, var_3))) & var_4)), -4294967295));
    var_13 &= -47;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((var_4 ? ((max(-47, -12396))) : -598808384)) - ((598808374 ? (max(-106, 598808366)) : var_7)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_3] |= 0;
                            var_15 ^= (arr_5 [i_0] [i_0]);
                            var_16 &= (((1 == -598808384) - var_2));
                            var_17 = (min((max(-2067007960, ((min((arr_3 [i_3] [i_1] [i_2]), 65532))))), (((((min(var_2, (arr_8 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3])))) && 1)))));
                        }
                    }
                }
                var_18 -= ((((max(var_10, (arr_7 [i_0] [i_1] [i_0])))) ? var_8 : (arr_4 [i_1])));
                arr_10 [i_0] = (max((((1339296676466378771 ? (arr_5 [i_1] [i_0]) : 1))), var_10));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                var_19 = -330849884592335766;
                var_20 *= (-(arr_12 [i_4 - 1] [i_5]));
                var_21 &= (((min(0, (max(1, -18150))))) ? ((((((arr_15 [i_4 + 1] [i_5]) ? var_0 : (arr_11 [i_4 + 3] [i_5])))) ? var_3 : (max((arr_13 [i_4 + 2] [i_5]), (arr_15 [i_5] [i_4 + 2]))))) : 0);
            }
        }
    }
    #pragma endscop
}
