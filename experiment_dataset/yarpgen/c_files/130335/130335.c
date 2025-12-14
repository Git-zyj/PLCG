/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0 - 1] = (max(9223372036854775807, 14760));
        var_17 = (min((max(var_16, (((1 << (var_1 - 2296349367970356321)))))), ((~(max(3416921887, (arr_0 [i_0 - 1] [i_0])))))));
        var_18 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_19 = (arr_4 [1] [i_1]);
        var_20 = var_7;
    }
    var_21 = (65516 | var_1);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_22 = ((((-var_15 ? (min((arr_5 [1] [i_3]), var_16)) : 1)) * ((min(((var_5 * (arr_1 [2]))), var_0)))));

                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    var_23 = (min(var_23, (arr_7 [i_2])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_24 = (arr_14 [i_2] [i_2] [i_2] [i_6 + 1]);
                                var_25 = (max(var_25, (((14175668908830706053 ? 1 : ((max((arr_10 [i_2] [i_4 - 1] [i_5] [i_5]), (arr_17 [8] [i_4 + 2] [i_4 + 2] [8])))))))));
                            }
                        }
                    }
                    arr_18 [i_2] [i_3] [i_4] [i_4] = (!2295);
                }
                var_26 = (max(((((-6940 <= (arr_15 [i_2] [i_2] [11] [i_3] [i_3]))) ? (10644247890036223799 + 1414982524) : (var_6 + -17783))), (((((138 && (arr_11 [18] [i_3] [18]))) ? ((min(7, var_11))) : -8219)))));
            }
        }
    }
    #pragma endscop
}
