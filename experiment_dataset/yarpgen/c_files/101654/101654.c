/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max(17, ((var_8 ? var_8 : (-32767 - 1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = (max(((((var_0 ? (arr_8 [i_0] [i_0] [i_0] [14]) : var_3)) & -32759)), (((-1891179223 >= 129) & (((arr_1 [i_1] [6]) ? 116 : var_9))))));
                    var_12 = 1479448272268902066;
                    var_13 = (max((min(((max(5631, var_8))), (((arr_4 [i_0] [1]) ? (arr_2 [i_1] [20]) : 0)))), ((var_3 ? (-28778 & -32751) : 141989045137599543))));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = min((min(59904, (arr_7 [i_1 + 1] [i_1 + 1] [i_2] [i_2]))), (((-(((arr_5 [i_2] [i_2]) >> (((arr_7 [i_2] [i_1] [i_1] [i_0]) - 3971795307584433235))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_14 = ((-115 ? var_9 : ((((((arr_7 [i_0] [i_1] [i_1] [i_4]) ? var_9 : 914223839))) ? 1 : (max(-667385434, var_5))))));
                                var_15 = ((((min((((arr_15 [i_4] [i_3] [i_3 - 2] [i_1] [i_1] [i_0] [i_4]) ? (arr_2 [i_2] [i_2]) : -99)), 5632))) ? (min(((68 ? 3 : -1249870649059774739)), ((((arr_6 [i_1]) - (arr_3 [i_1] [1] [i_1])))))) : -40));
                                var_16 = (min(var_16, (((((max(((65280 ? var_8 : 0)), ((min(var_3, var_9)))))) ? 1 : ((((!(arr_1 [i_1] [i_1]))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (min((((((-1229975817 ? var_8 : -8102292003223484984))) ? (((max(var_3, var_9)))) : (var_6 - var_2))), var_1));
    #pragma endscop
}
