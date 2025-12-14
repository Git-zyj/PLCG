/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (((!1369004886) ? var_0 : (arr_1 [i_0])));
        var_13 += ((((1357667997819294520 ? 1357667997819294520 : 32767))));
        var_14 = (~-852045893775409161);
    }

    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 = ((!(arr_3 [i_1])));
        arr_4 [i_1] = ((((786647109 ? 12502288486130647957 : 25367))) ? 2167426498306368081 : 2167426498306368081);
        arr_5 [i_1] [i_1] = (((-(arr_2 [i_1]))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_16 |= ((var_2 ? 10562 : 56228));
        arr_8 [i_2] = 10810;
    }
    for (int i_3 = 4; i_3 < 14;i_3 += 1)
    {
        var_17 = (arr_10 [i_3 + 3]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    arr_18 [i_4] = 1971824216;
                    arr_19 [i_3 + 1] [i_3 - 3] [i_5] = ((((((arr_13 [i_3 - 3]) ? (arr_13 [i_3 + 1]) : 2925962409))) ? var_9 : 2167426498306368081));
                    var_18 = (!(~var_1));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_19 = ((((((arr_10 [i_3 - 2]) ? (arr_14 [i_3 + 3] [i_3 + 1]) : 92))) ? 1382974986655812073 : (((!(arr_14 [i_3 + 3] [i_3 + 1]))))));
                                arr_24 [i_3 - 1] [i_3 - 2] [i_3 + 3] [i_3 - 4] [i_3 + 1] [i_3 - 3] [i_6] = ((3508320198 ? 3508320170 : -21112));
                            }
                        }
                    }
                }
            }
        }
        arr_25 [i_3 - 4] [i_3 + 2] |= ((97 ? ((var_2 ? var_1 : var_1)) : -var_6));
    }
    #pragma endscop
}
