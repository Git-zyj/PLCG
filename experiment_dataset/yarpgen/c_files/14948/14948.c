/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] &= 3708227512;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] = ((~(((var_5 <= (6 ^ 65522))))));

                            for (int i_4 = 2; i_4 < 23;i_4 += 1)
                            {
                                arr_13 [i_4] = ((((max(14, (arr_8 [i_4 - 1] [i_4] [i_4 + 1] [10] [i_4 + 1])))) <= ((6 ^ (arr_8 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 1])))));
                                var_20 = (max(((((((8191 ? (arr_2 [i_0] [i_0] [i_0]) : var_3))) ? (((var_2 > (arr_8 [i_0] [i_0] [i_2] [i_3] [i_4 - 2])))) : ((max(65535, 7936)))))), ((1 ? (~7) : (arr_5 [i_4 - 1] [i_4] [i_4 - 2] [i_4 + 1])))));
                                var_21 = 1;
                            }
                            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                            {
                                var_22 = var_13;
                                var_23 = 2220327229083224426;
                                var_24 *= ((!((((1 ^ (arr_8 [i_0] [i_1] [i_2] [i_3] [i_5]))) < (arr_8 [i_0] [i_1] [i_5] [i_2] [i_2])))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                            {
                                arr_21 [i_0] [i_1] [i_0] [i_0] [i_6] [i_6] = (var_0 ? var_5 : (6 - var_14));
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_6] = ((65529 ? 6396885976771143798 : 8510310799107801925));
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_6] = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_0;
    #pragma endscop
}
