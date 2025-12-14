/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((!(19 < 243)))) ^ (((!(2956535757139065893 + 55302))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_16 = 0;
                            var_17 ^= ((((((236 * 38933) * (min(115, 65408))))) && -3406));
                            arr_8 [i_1 - 4] [i_2] = (max((((236 >= 1) * (-44 / 9223372036854775807))), ((((374744853 / -9123038474865153891) > 1)))));
                            var_18 = 1;
                        }
                    }
                }
                var_19 = (min(((((1 == 236) || (~21376380775459691)))), -3405));
                var_20 = ((1 - (+-50795)));
            }
        }
    }
    var_21 += (((228 * (!35195))));
    #pragma endscop
}
