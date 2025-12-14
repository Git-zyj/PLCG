/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = (arr_10 [i_4] [i_4] [i_4 + 1] [1] [i_4 - 1] [20]);
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = (arr_3 [i_0] [i_0] [i_3 + 1]);
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_0] = (((arr_13 [i_2] [i_0] [i_2] [i_1 + 1] [i_2]) ? -var_2 : (-5206388609585253666 > 32259)));
                    var_17 = (min(var_17, ((var_8 ? (arr_16 [i_2] [i_1 - 1] [i_1 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]) : (arr_13 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_2])))));
                    var_18 -= ((!(arr_7 [i_0] [i_0 + 1] [i_0 + 1])));
                }
                var_19 ^= ((+((((arr_5 [i_0] [i_0 - 1]) != (arr_10 [i_0] [i_0 + 1] [i_0] [i_1 - 1] [i_1 - 1] [i_0]))))));
                arr_19 [i_0] [1] [i_0] = (-var_3 == var_5);
            }
        }
    }
    var_20 = (max((((!((min(var_7, -8316)))))), var_3));
    var_21 = (min((~14406897393931064910), var_6));
    var_22 ^= -var_7;
    #pragma endscop
}
