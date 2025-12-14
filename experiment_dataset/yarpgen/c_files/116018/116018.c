/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((!((((arr_2 [i_0] [i_1] [i_1]) ? (((arr_1 [i_0] [i_0]) ? -33 : (arr_3 [i_0] [i_1 - 1]))) : (((max(-32, 28)))))))));
                arr_5 [i_0] [2] = (((((!32768) ? (~var_5) : ((var_13 ? (arr_2 [6] [6] [i_1 - 1]) : -33)))) > -39));
            }
        }
    }
    var_19 = ((((min(var_10, var_15))) ? (!var_15) : 53725));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_2] [i_2] = 32;

                /* vectorizable */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    arr_17 [i_2] [1] = (arr_13 [i_4 + 1] [i_4 + 1] [i_4]);
                    arr_18 [i_2] [i_3] [i_2] = (((arr_8 [i_2] [i_3]) ^ 36));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    arr_22 [i_5] [i_3] [i_3] = ((32767 == (arr_1 [i_2 + 1] [i_5])));
                    arr_23 [i_2] [i_2] [i_2] [1] = ((var_18 ? -24 : (arr_8 [i_2 + 2] [i_2 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
