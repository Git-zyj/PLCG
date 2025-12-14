/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(2395396061, 34));
    var_20 = (((((var_2 && 222) - var_7))) ? -96 : (min(2045818928, 0)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_21 -= 231;
                            var_22 = (max((max((arr_7 [i_1] [i_1 + 1]), 73953137)), (min(24, (arr_7 [i_1] [i_1 + 1])))));
                        }
                    }
                }
                var_23 = (min(var_23, (((min(((264803481 ? 236 : 4167521829)), 1)) * (((arr_8 [i_0] [i_1] [i_1 - 2] [i_1 - 1]) ? 1462958564 : (arr_8 [i_0] [i_0 - 2] [i_1 + 1] [i_1 + 1])))))));
                var_24 += (((min((arr_2 [i_0 - 1] [i_0 + 2] [i_0 + 2]), (arr_8 [i_1 - 2] [i_0 - 1] [i_0 - 2] [i_0 + 1]))) == (arr_2 [i_0 - 1] [i_0 + 2] [i_0 - 1])));
            }
        }
    }
    #pragma endscop
}
