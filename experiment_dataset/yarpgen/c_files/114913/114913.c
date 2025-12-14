/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((((~(max(3479986275, -723073604)))) / (((((arr_4 [i_0]) && (arr_4 [i_0])))))));
                var_14 -= (((((((723073604 + (arr_2 [i_0])))))) * (arr_1 [i_0])));
                arr_7 [i_0] [i_0] = (max(723073627, 26878553));
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_15 -= (var_0 * var_8);

        /* vectorizable */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            var_16 = (var_7 < var_0);
            var_17 = (arr_0 [i_2] [i_3 - 1]);

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                arr_14 [i_4] [i_2] [i_2] = (((arr_11 [i_2]) ? var_12 : (4268088743 * 0)));
                var_18 += ((576460750155939840 ? (arr_1 [i_4]) : (arr_1 [i_3])));
            }
            var_19 -= ((arr_4 [i_3 + 2]) ? (arr_4 [i_3 + 2]) : 20663982);
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    var_20 -= (((arr_1 [i_2]) | var_0));
                    var_21 &= 4268088743;
                }
            }
        }
    }
    var_22 = 0;
    var_23 = var_11;
    #pragma endscop
}
