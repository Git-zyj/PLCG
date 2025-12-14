/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -28050;
    var_19 = (max(((max(var_11, var_17))), ((-28039 ? (((max(10279, -13559)))) : var_9))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] = -39497024797334396;
                    var_20 = (max(var_20, ((max(((-(((arr_2 [i_0] [i_1] [i_2]) / -39497024797334396)))), (arr_1 [14]))))));
                    arr_9 [i_0] [i_0] [i_0] = (max((((((min(28048, (arr_6 [i_0] [i_0] [i_0])))) ? (max((arr_0 [i_1] [i_1]), 55255)) : (((arr_5 [i_0]) ^ (arr_3 [i_1])))))), -4750890657257521567));
                }
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    var_21 += (min(2147483647, -1545950258));
                    var_22 ^= 13331;
                    arr_13 [i_0] [i_0] [i_3] [i_0] = ((((max(-13352, (arr_12 [i_3 + 1])))) < (((arr_0 [i_3] [i_3]) ? (arr_0 [i_0 - 2] [i_1 + 2]) : ((1 + (arr_6 [i_0] [i_1] [i_1])))))));
                }
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_23 -= ((-((-(max(19208, -4750890657257521561))))));
                                var_24 = (min(var_24, ((-(arr_2 [i_1] [i_1] [i_1])))));
                                var_25 -= ((28 / (max(-28050, 86))));
                                var_26 = ((~(((arr_1 [i_0]) ^ (arr_1 [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (((((((var_12 ? 0 : var_2)) >> (var_4 < var_14)))) ? (var_2 & 13327) : (((8874465579880932365 <= (var_9 && var_14))))));
    #pragma endscop
}
