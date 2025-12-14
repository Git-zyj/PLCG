/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] |= (max((((-(((arr_5 [i_1] [i_1] [i_2]) ? (arr_2 [9] [i_1] [9]) : (arr_3 [5] [5])))))), (max(((99 ? (arr_0 [i_0]) : var_9)), ((((arr_0 [6]) ? 22 : (arr_3 [i_1] [i_1]))))))));
                    arr_7 [20] [i_2] [20] = (min((max((arr_4 [i_0] [2] [7]), (arr_1 [i_0] [i_0]))), (((((((arr_2 [i_0] [i_0] [i_0]) ? 12839197959524927588 : (arr_0 [i_2])))) ? (arr_2 [i_2 + 1] [i_2 - 1] [i_2 + 1]) : (arr_5 [i_2] [i_2 + 2] [i_2 + 2]))))));

                    for (int i_3 = 2; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        var_18 = ((29888 ? 12 : 1420781721));
                        arr_10 [i_2] = ((0 > (((arr_4 [i_2 + 1] [i_2 + 1] [i_3 - 2]) ^ (min((arr_0 [i_0]), 18441))))));
                        arr_11 [i_2] [i_1] [17] [6] = (((arr_8 [i_3] [i_3 + 1] [i_3 + 2] [i_3 + 1]) != (min((min((arr_8 [3] [i_2] [i_1] [i_0]), (arr_3 [i_0] [i_2]))), (((arr_1 [i_0] [i_1]) ? (arr_2 [18] [18] [i_3 - 1]) : (arr_3 [i_0] [i_3])))))));
                        arr_12 [i_0] [i_2] [i_0] [i_2] [i_2] [i_3] = 2412164491;
                    }
                    for (int i_4 = 2; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        var_19 ^= (((((min((arr_8 [i_0] [i_1] [i_4 - 1] [14]), (arr_8 [i_2] [i_0] [i_4 - 2] [i_2]))))) > ((-7539448773464693003 ? -7401280618481034637 : 7529556193654495819))));
                        var_20 |= ((-7529556193654495811 ? 127 : 40));
                    }
                    for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        var_21 = (((min((arr_15 [i_2 + 2] [i_5] [i_5 - 2] [16] [18]), (arr_14 [i_5 + 2]))) % (((((min(var_13, (arr_1 [i_1] [i_2])))) ? (max(4565, (arr_9 [i_0] [i_0] [10]))) : ((var_3 | (arr_17 [i_5] [i_2] [6] [i_0]))))))));
                        var_22 = (-(((arr_14 [i_5 - 1]) ? (min((arr_0 [i_1]), var_8)) : (((min((arr_16 [i_1] [i_1] [1] [1] [i_2] [i_1]), (arr_16 [9] [i_0] [i_1] [3] [i_2] [i_5]))))))));
                        arr_18 [6] [6] [i_2 + 2] [6] [6] [i_2] = ((((max((arr_1 [i_2 - 1] [i_5]), (arr_1 [i_2 + 3] [7])))) < ((((((arr_8 [i_2] [5] [i_1] [i_1]) | var_7))) ? (((max((arr_8 [i_1] [i_0] [3] [i_1]), 0)))) : (min(7529556193654495819, (arr_5 [i_2] [10] [i_2])))))));
                        var_23 = (((arr_5 [i_2] [1] [1]) ? ((((arr_8 [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2]) < 4611685880988434432))) : 108));
                    }
                }
            }
        }
    }
    var_24 *= (((max(var_17, ((min(4, var_1))))) > ((((-9223372036854775807 - 1) ? ((var_15 ? var_10 : (-9223372036854775807 - 1))) : var_0)))));
    #pragma endscop
}
