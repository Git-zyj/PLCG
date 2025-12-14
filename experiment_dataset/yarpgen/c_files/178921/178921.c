/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(113, var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (arr_0 [i_0]);
                var_20 = (min(var_20, (((!(arr_5 [i_1]))))));
                var_21 = ((-(arr_4 [i_1] [i_1] [i_1])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_10 [i_1] [i_2] = 4;
                    var_22 = (arr_1 [i_1]);
                    var_23 *= ((arr_3 [i_0] [i_1] [i_2]) ? (arr_3 [i_0] [i_1] [i_0]) : 14826999760805811209);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_24 *= ((65530 ? -33 : 3575497273));
                    var_25 = 18446744073709551614;
                }
                arr_13 [i_0] = 0;
            }
        }
    }
    #pragma endscop
}
