/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (max(((max(2, 0))), ((((((var_12 + 9223372036854775807) << (((-4942894364816730162 + 4942894364816730176) - 14))))) ? (((var_4 ? (arr_1 [i_0]) : (arr_5 [i_0] [i_0] [i_0])))) : -1))));
                arr_8 [i_0] [i_0] = (((((arr_7 [i_0] [i_1] [3]) ? (arr_7 [i_0] [i_0] [i_1]) : (arr_7 [i_1] [1] [i_1]))) * (((var_9 || 2) ^ 13853))));
                var_16 = ((~((((min(var_2, (arr_2 [i_1]))) > ((((((arr_5 [i_1] [i_0] [i_0]) + 2147483647)) << (((arr_2 [i_0]) - 12541849246059726907))))))))));
                arr_9 [i_0] [i_1] [i_0] = max((1592499121347811207 & 1), ((((arr_3 [i_1] [i_0]) ^ (arr_3 [i_0] [i_1])))));
            }
        }
    }
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            {
                arr_16 [i_2] [i_2] = ((!(((var_2 ? (-1 > 1592499121347811207) : (arr_13 [i_2] [i_3]))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_18 = ((9816 | ((((min(1592499121347811226, var_2)) > 24)))));
                                var_19 = (((((arr_23 [2] [i_3 + 1] [i_5 - 1] [i_5]) ? -4809940417534808906 : (arr_23 [i_3 - 1] [i_3 - 2] [i_5 + 1] [i_6]))) + (((((arr_23 [i_3] [i_3 + 2] [i_5 + 1] [i_5]) > 13))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(var_0, ((max((min(1188603275, 28991)), (!10261365365509500208))))));
    var_21 = 2782866343;
    #pragma endscop
}
