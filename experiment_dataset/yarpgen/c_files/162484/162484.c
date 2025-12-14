/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_2 > ((14077143914687625911 ? var_17 : 3950544106)))));
    var_20 = ((14077143914687625928 ? var_14 : (((((-5380470626089620945 ? 1 : 4369600159021925712))) ? (var_3 >= var_3) : (~18446744073709551615)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 = ((((arr_7 [i_1 - 2] [i_0 - 2]) ? var_10 : 14077143914687625911)));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] = (((+(min((arr_3 [i_0]), (arr_1 [i_0]))))));
                        var_22 = ((!-32700) >> (var_0 - 2346024951));
                    }

                    for (int i_4 = 4; i_4 < 17;i_4 += 1)
                    {
                        var_23 |= 3737784377;
                        arr_16 [i_0] [12] [i_0] = ((((min(var_0, 557182919))) ? ((14077143914687625903 ? 557182919 : 0)) : 65));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        var_24 = (max(var_24, (((!(!65))))));
                        arr_20 [6] &= (~var_2);
                        arr_21 [i_0] = 190;
                    }
                }
            }
        }
    }
    var_25 = (max(var_25, var_1));
    #pragma endscop
}
