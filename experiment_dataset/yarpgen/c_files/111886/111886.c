/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((min(-109, 3257938011807395199)));
    var_14 ^= var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (min(var_15, (arr_0 [i_0])));
        var_16 *= (-23 ^ -26207);
        var_17 = (min(var_17, (arr_1 [i_0])));
        var_18 = (12 != 0);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_19 += ((~(min((arr_4 [i_1]), (arr_0 [i_1])))));
        var_20 = (min(var_20, (arr_0 [i_1])));
    }
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 4; i_3 < 16;i_3 += 1)
        {
            arr_12 [i_2] [i_2] = ((arr_11 [i_2 - 2] [i_3 - 4]) ? ((((arr_6 [i_3] [i_3]) < (arr_5 [i_3])))) : (137438953471 && 2670596149445069306));
            var_21 = (max(var_21, var_7));
            /* LoopNest 3 */
            for (int i_4 = 4; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_22 |= ((!((var_8 || (arr_13 [i_2] [1])))));
                            arr_21 [0] [14] [i_3] [i_5] [1] |= ((-(((!(arr_11 [i_2] [i_3]))))));
                        }
                    }
                }
            }
        }
        var_23 = (min(var_23, ((min((~47), 124)))));
        var_24 = (arr_18 [i_2 + 3] [i_2] [i_2 + 3] [8] [i_2] [i_2]);
    }
    var_25 = 65535;
    #pragma endscop
}
