/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = -2147483647;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] &= (arr_2 [i_0] [i_2]);
                    var_13 += (arr_7 [i_0] [i_1] [i_1] [i_2]);
                    var_14 = (arr_0 [i_2]);
                    var_15 += (((~0) & ((-68 ? (arr_1 [i_0]) : var_12))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_16 = -62;
                        var_17 &= (((arr_15 [i_3 - 1] [i_4 - 1] [i_1] [i_4 - 1]) && (arr_13 [i_0] [i_0] [i_3] [i_4])));
                    }
                    var_18 ^= (((-204987669132392561 ^ 1298484072) ^ (1298484072 + 72)));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_19 = (min(var_19, 0));
                                arr_21 [i_0] [8] [i_3 + 2] [i_5 - 1] [i_6] = (arr_12 [i_3 + 1] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    var_20 += ((18014398509481983 ^ (arr_17 [i_3] [i_3] [i_1] [i_1] [i_0])));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_21 = (~1298511183258454977);
                    var_22 = (max(var_22, 4092));
                    var_23 = (((arr_2 [i_1] [i_7]) != -204987669132392561));
                    var_24 = (min(var_24, (((~-6969616054849011969) ? 5916976359594934859 : (arr_7 [20] [i_1] [i_0] [i_0])))));
                }
            }
        }
    }
    var_25 ^= var_1;
    var_26 |= (75 < 1);
    var_27 *= var_0;
    #pragma endscop
}
