/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_13;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((min(224, 247)), (min(var_5, (arr_1 [i_0 + 4])))));
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] |= 247;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_17 = -17;
                                var_18 = (min(var_18, (((arr_7 [i_1 + 3]) + (arr_7 [i_1 + 1])))));
                                var_19 *= 2186653800;
                                arr_21 [i_1] [i_2] [i_3] = (((arr_7 [i_4]) / var_13));
                                var_20 = (max(var_20, ((~(arr_0 [i_3])))));
                            }
                        }
                    }
                    arr_22 [i_2] = var_1;
                    var_21 ^= 268;
                }
            }
        }
        var_22 = (max(var_22, 2186653800));
    }
    for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_25 [i_6 + 1] = ((((min((arr_8 [i_6] [i_6] [i_6 - 1]), (min((arr_5 [i_6]), (arr_24 [i_6 + 2])))))) ? (((((arr_10 [i_6]) ? 70368744177152 : 2186653800)) / ((((arr_12 [i_6] [i_6 - 1] [i_6 + 1] [i_6]) >> 0))))) : (((((((103 ? (arr_17 [i_6 + 3] [i_6] [i_6] [i_6] [i_6]) : -8731))) && (!17669)))))));
        arr_26 [i_6 + 3] [i_6 - 1] = (max(17669, (min(((645 ? 49443 : 38220)), 45836))));
        var_23 = var_6;
    }
    var_24 ^= (var_12 || 1984);
    var_25 = (min(var_10, var_15));
    var_26 = (min((((!((min(1, var_6)))))), ((((3955263204 ? 46 : var_0)) ^ -17))));
    #pragma endscop
}
