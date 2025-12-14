/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((-27 ? var_2 : ((~(~-6831350852298381359)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 *= (((((262551635 ? 1 : 2026722565))) ? (!23) : 39098));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2 - 1] = (((~((0 ? 18068 : -1899358421)))));
                                var_19 += (((((9223372036854775807 ? (arr_10 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 + 1]) : -880153255613005419))) || (((~(min(-7260986564006657479, var_1)))))));
                                arr_15 [i_0] [i_1] [i_1] [i_2 + 1] [i_3] [i_4] [i_0] = (min((arr_5 [i_3] [i_2] [i_1 + 1] [i_0]), ((((1 ? (arr_0 [i_0]) : 1))))));
                                var_20 = ((min((~var_1), (~2026722580))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                arr_23 [i_5] [i_5] [i_5] = 178251440;
                arr_24 [i_5] = (((-53 ? ((~(arr_19 [i_6] [i_6]))) : (~29))));
            }
        }
    }
    #pragma endscop
}
