/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_11 = ((((18618 ? 7994133852411156917 : var_0)) >> 0));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_12 = (max(var_12, (arr_1 [i_3])));
                        arr_9 [i_0] [i_2] [i_2] [i_2] [i_0] &= ((arr_4 [i_1]) && (arr_4 [i_1]));
                        arr_10 [i_0] [i_1] [i_0] [i_2] [i_3] [i_1] = (!var_10);
                    }
                }
            }
            arr_11 [i_0] [i_1] = 18446744073709551615;
        }
        var_13 = 25749;
        arr_12 [i_0] = (max(0, -18618));
        var_14 = ((((2314599282 == (arr_5 [i_0] [i_0] [i_0]))) ? (arr_5 [i_0] [i_0] [i_0]) : (max(18617, (arr_5 [i_0] [i_0] [i_0])))));
        arr_13 [i_0] = (max(((max((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0] [i_0])))), 715401176428829631));
    }
    var_15 = 715401176428829631;
    var_16 = (min(((-((var_6 ? var_7 : 17731342897280721985)))), (18446744073709551615 & 18618)));
    var_17 = (((~-var_3) ^ var_2));
    #pragma endscop
}
