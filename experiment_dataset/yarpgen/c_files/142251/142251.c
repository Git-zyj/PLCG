/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 = ((((max((arr_3 [i_0 - 1]), (arr_10 [i_3 + 1] [i_2] [i_0 - 4] [i_2] [i_0 - 1])))) <= (arr_3 [i_0 - 1])));
                            var_18 = (-22514 ? -var_0 : (max(281440616972288, 281440616972288)));
                            var_19 = (((arr_5 [i_0] [i_0 + 1] [i_3 - 1]) ? ((-281440616972291 ? var_10 : var_4)) : 281440616972303));
                        }
                    }
                }
                var_20 = ((~(((arr_9 [14]) % (arr_0 [i_0 + 1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 3; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    var_21 |= ((!((((arr_7 [14]) & var_13)))));
                    var_22 &= max(-281440616972291, -281440616972291);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_23 = (min(var_23, (((+((((arr_11 [i_8]) && (arr_12 [i_4 - 3] [i_4 - 3])))))))));
                                arr_23 [i_4] [i_4] [i_6] [i_4] [i_4] [i_4] = (max(((-281440616972291 ? -281440616972291 : -281440616972291)), (max(281440616972288, var_4))));
                            }
                        }
                    }
                    arr_24 [i_4] [i_6] [i_6] = 281440616972281;
                    var_24 = (min(var_24, (((-(max(((-(arr_12 [i_6] [i_4]))), ((var_7 ? 281440616972288 : -281440616972289)))))))));
                }
            }
        }
    }
    var_25 = var_11;
    var_26 = var_14;
    #pragma endscop
}
