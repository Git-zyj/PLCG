/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 ^= max((122 & 3855), 1);
                arr_5 [i_1] = ((((max(1221853411, (min(3704659281, 51))))) ^ (((((min(-115, 7541238556607046831)) + 9223372036854775807)) >> (-1 + 64)))));
                arr_6 [i_0] = (((2629718001620933404 + -10493) > (-123 <= -10493)));
                arr_7 [i_1] [5] = (((max(((min(52162, 1))), ((10518 ? 0 : 540437583))))) ? 8192 : (((((493449586631326657 ? 2640767935209430221 : 0))) ? 7541238556607046831 : 4)));
            }
        }
    }
    var_14 = var_10;

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = -7812730201407597121;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_14 [i_2] [i_2] [i_2] = ((79 ? -493449586631326658 : 1));
            var_15 ^= -32752;
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_16 = (min(var_16, (((((max((-26687 - -416441430), (max(-1, -118))))) || 7541238556607046826)))));
                    var_17 = ((max((((1 >> (29020 - 29007)))), -7005509553131442815)) != ((((-11 + 2147483647) << (1 - 1)))));
                    var_18 = ((-4719426285498157034 ? (max(((12836 ? -55 : 493449586631326648)), 0)) : (max(((max(72, 10))), (max(-87, 506354048288652078))))));
                }
            }
        }
    }
    #pragma endscop
}
