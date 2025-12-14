/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= max(var_2, (max((10 | 1099511627775), (9223372036854775793 >= 4194300))));
    var_16 += var_4;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (arr_2 [8] [8])));
                    arr_6 [i_0 - 1] [i_1] [i_0] [i_0] = (((((max(11557, 2803)))) / (11572 - 10606291531457538137)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_19 [i_3] [i_3] [i_4 - 1] [i_5] [1] [i_6] [i_3] = (!135);
                                var_18 = (+(((~11560) ? -11535 : -9223372036854775790)));
                                arr_20 [i_3] [i_3] [i_3] [i_3 - 1] [7] = (max((min((arr_7 [i_3]), var_12)), -9223372036854775762));
                            }
                        }
                    }
                    arr_21 [i_3] [i_5] = (max((((arr_10 [i_3 - 1]) ? (arr_10 [i_5 - 1]) : (arr_12 [i_3 - 1] [i_4]))), (((var_9 <= (min((arr_14 [i_3 + 1] [i_4 + 2] [7] [i_5]), (arr_9 [i_4]))))))));
                }
            }
        }
    }
    var_19 = ((((min(var_7, var_2))) ? var_4 : (max((((2803 ? var_8 : var_0))), (min(var_3, -9223372036854775792))))));
    #pragma endscop
}
