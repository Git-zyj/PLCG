/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((~((20 ? 18446744073709551615 : 940515062)))) >= (((1 ? 2070551410 : (20 < 4294967276))))));
    var_19 = 85;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = 9223372036854775807;
                var_21 = (max(var_21, var_3));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_17 [16] [i_3] [i_4] [i_5] [i_5] [i_5] &= 115;
                        arr_18 [i_2] [i_3] [i_3] [i_4] [i_5] = (1 && 4294967275);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_22 = (min(1, 1));
                        arr_22 [i_3] [i_3] [i_4] [i_6] [i_6] = var_5;
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_23 = ((var_17 ? (1 < 4294967263) : 10598));
                        var_24 = (((arr_21 [i_4 - 1] [i_3 + 1] [i_3 + 3]) ? (arr_21 [i_4 - 1] [i_3 - 1] [i_3 + 4]) : (arr_21 [i_4 - 1] [i_3 + 1] [i_3 - 1])));
                        var_25 = ((!(arr_21 [i_3] [i_4 + 1] [i_7])));
                        var_26 = ((-4261 ? (var_11 && var_0) : (((arr_8 [i_3] [i_4]) ^ var_13))));
                    }
                    var_27 = (((arr_12 [i_4 + 1] [i_4] [i_4]) ? (((!(arr_12 [i_4 + 1] [i_4] [i_4])))) : (((-98 < (arr_12 [i_4 + 1] [i_4] [i_4]))))));
                }
            }
        }
    }
    #pragma endscop
}
