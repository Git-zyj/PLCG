/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max((var_3 ^ 3573691678331874677), var_11))) ? (~var_6) : ((min(236, -3573691678331874679)))));
    var_21 ^= (min((max(((min(var_17, var_15))), ((-3573691678331874690 ? var_1 : 0)))), (((!((max(var_6, var_17))))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min((min(-3573691678331874677, 3885650868875683663)), ((((arr_1 [i_0]) ? 11 : var_10)))));
        var_22 = (((arr_0 [i_0] [i_0]) ? 3573691678331874689 : ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))));
        var_23 = ((((231 ? -1 : 255)) <= (((var_7 ? (arr_0 [3] [i_0]) : (arr_0 [i_0] [i_0]))))));
    }
    var_24 = var_11;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {

                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        var_25 = (((arr_8 [i_4 + 1]) ? (arr_12 [i_1]) : (3993412114 != var_0)));
                        var_26 = var_1;
                        var_27 = 40030;
                    }
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        var_28 = 1;
                        var_29 = 112;
                        var_30 = -2388;
                    }
                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        arr_22 [i_1] = (((arr_19 [i_6 - 3] [i_6 - 3] [i_6 - 3] [i_3] [i_3] [i_3]) ? 26818 : (arr_19 [i_6 - 1] [i_6 - 2] [i_6] [7] [i_6] [i_2 + 2])));
                        var_31 = (!127);
                        arr_23 [i_3] [i_3] [i_1] [13] [i_3] = (!127);
                    }
                    var_32 = ((((((arr_7 [i_1]) ? 9352 : 211))) ? (((1 < (arr_6 [i_1])))) : 32767));
                }
                var_33 = (arr_9 [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
