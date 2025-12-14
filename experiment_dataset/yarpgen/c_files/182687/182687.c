/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((1916936433 == ((var_4 ? 13639 : var_5))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 |= (((((var_9 / (-9223372036854775807 - 1)))) ^ ((min(var_4, ((((arr_3 [i_0 + 1] [6] [5]) != 25165824))))))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_12 [i_0] = (min((((((arr_6 [i_3] [i_1] [i_3] [i_3]) != var_1)))), ((+(((arr_2 [i_3] [i_2] [i_1]) | 13639))))));
                        var_12 = (((((min((arr_2 [1] [i_1] [1]), var_9))) ? ((max(13622, var_3))) : (var_9 && -1))));
                        arr_13 [i_3] [i_2] [2] [i_0 - 1] = (((min(var_5, (arr_11 [0] [i_0 - 4]))) & (((+(((arr_3 [i_2] [i_2] [i_2]) ? (arr_7 [11]) : (arr_4 [i_1] [5] [11] [i_1]))))))));
                        arr_14 [0] [i_1] [i_2] [i_3] [i_0] = (min(((min((min(-26935, var_0)), ((min(var_3, var_7)))))), (min(13, 6071488492531760986))));
                        var_13 = 18446744073709551615;
                    }
                }
            }
        }
    }
    #pragma endscop
}
