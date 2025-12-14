/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((var_12 < (12888458452642930348 && var_13)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((((max((arr_5 [i_4]), ((var_15 ? (arr_4 [10] [10] [i_3]) : (arr_6 [i_4] [i_4])))))) ? (5929626436019001408 * 4) : 1)))));
                                var_20 *= (max(((max((min((arr_9 [i_2]), 3)), (((((arr_0 [i_3]) + 9223372036854775807)) << (1 - 1)))))), (((max(18446744073709551615, var_17)) ^ (((424304821 - (arr_14 [12] [12] [i_2] [i_3] [i_4]))))))));
                                arr_16 [i_4] [i_1] [i_1] [10] [i_1] = 4355830813893190956;
                                arr_17 [i_0] [i_0] [i_2] [i_1] = (arr_2 [1]);
                            }
                        }
                    }
                    arr_18 [7] [i_1] [i_1] [i_2] = ((((((arr_7 [i_1]) ? -28898616216747773 : var_14)))) ? (((~(arr_5 [i_1])))) : ((1854512144 ? 467488212752743857 : var_16)));
                    arr_19 [i_0] [i_1] [6] [i_0] = 612054235;
                    var_21 = (max((arr_0 [i_0 + 1]), (((!(arr_0 [i_1 - 1]))))));
                }
            }
        }
    }
    var_22 = min((max(((var_16 ? 12147105304075538785 : var_16)), var_10)), ((((((max(var_14, -10)))) > -var_9))));
    #pragma endscop
}
