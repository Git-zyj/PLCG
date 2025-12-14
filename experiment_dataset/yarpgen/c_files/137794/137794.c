/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = ((!((max((arr_3 [i_0]), 9215599940160293304)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = (min((arr_12 [i_2 - 1] [i_3] [i_4 + 1] [i_3] [1]), (((arr_11 [i_2 - 1] [i_3 - 2] [i_4 + 1]) ? (arr_6 [i_2 - 1] [i_3 - 2] [i_4 + 1] [i_4]) : (-9223372036854775807 - 1)))));
                                var_18 = (((min(0, var_2)) != (var_0 >= 1773911105)));
                                var_19 = ((((((((arr_2 [i_4]) >> (2344530777 - 2344530754)))) ? (arr_0 [i_3]) : (arr_8 [i_1 - 1] [i_1 - 1] [i_2] [i_3 - 2]))) == ((((arr_3 [i_4 + 1]) ? (arr_3 [i_0]) : var_0)))));
                            }
                        }
                    }
                }
                var_20 = ((~(((arr_5 [i_1 - 2] [i_1 + 1] [i_1 + 1]) ^ (arr_5 [i_1 - 2] [i_1 - 1] [i_1 - 2])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 17;i_6 += 1)
        {
            {
                var_21 = (~35668911119502923);
                var_22 = ((!((((arr_13 [i_5] [i_6 - 1]) ? (arr_7 [i_6 + 1]) : ((max(2608421034, var_0))))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_23 = (((((((((arr_16 [i_5] [i_5] [i_7]) != 4294967289)))) | 283188349)) + 38202));
                            var_24 = ((+(min((arr_4 [i_8 - 2] [i_8 + 2] [i_8 - 2]), (((!(arr_14 [i_7] [i_7]))))))));
                        }
                    }
                }
                var_25 = (arr_17 [i_5] [i_5] [i_6]);
            }
        }
    }
    var_26 = (((max(((6305553030002139330 ? 27203 : var_1)), (!var_4)))) ? var_1 : (((15439330938983308532 ? (max(var_5, var_2)) : var_4))));
    var_27 = (max((-2147483647 - 1), var_13));
    #pragma endscop
}
