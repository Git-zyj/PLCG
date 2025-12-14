/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((26153 > (((!(1274503322 ^ var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = ((!((max((arr_0 [i_0] [i_1]), ((-1274503323 ? -2130537140 : 1)))))));
                arr_7 [i_0] [i_0] = ((21 ? 8367846507427979243 : 123));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_17 *= ((!((((36028797018963967 ^ 623948425) | (var_13 != 21))))));
                            var_18 = (min((!-1274503323), ((((1274503323 ? 3320392043773213965 : 1401279498)) != (((arr_11 [i_0] [i_1]) ? 18135891790104907893 : var_2))))));
                            var_19 = (max(32739, (((arr_8 [21] [i_2] [i_1] [i_0]) * ((1318659325 + (arr_5 [i_0])))))));
                        }
                    }
                }
                arr_12 [i_0] [4] [i_1] = -1274503315;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            {
                var_20 = (min(var_20, (((var_0 ? 1318659336 : 1)))));
                arr_18 [i_4] = 1274503331;
            }
        }
    }
    #pragma endscop
}
