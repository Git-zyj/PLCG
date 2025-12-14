/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((var_6 ? var_7 : -5168))) ? ((min(var_3, var_5))) : (!0))) << ((min(1, 255)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_12 = (((min(-var_10, ((var_8 ? (arr_0 [i_0] [i_0]) : (arr_0 [4] [i_0])))))) >= ((((min(-23754, 22))) ? (var_0 + 1) : ((1 ? (arr_1 [i_0]) : 0)))));
        var_13 = ((!(((((((arr_0 [i_0] [i_0]) & -3367))) ? (((var_8 ? 1 : 1238987934))) : (min((arr_1 [i_0]), (arr_0 [i_0] [i_0]))))))));
        var_14 = (max(var_14, ((((((((min(var_3, -5168))) ? (((-(arr_0 [i_0] [i_0])))) : (max(-23, 1))))) ? ((((min((arr_0 [i_0] [i_0]), var_7))) ? (18365527670469187058 > 7430116947442038241) : (((arr_0 [i_0] [i_0]) ? -80 : (arr_1 [i_0]))))) : (((min((64 < var_4), (((arr_1 [i_0]) > -7750)))))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_15 = ((~((-(((arr_3 [i_1] [i_1]) ? (arr_2 [i_1]) : var_7))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                {
                    var_16 = min(((min(1367941597, (min(-34, -1048894174))))), (((((-647036443 ? (arr_5 [i_1] [7]) : (arr_1 [i_2 + 2])))) ? (((arr_1 [i_1]) ? var_2 : (arr_2 [i_1]))) : (((min((arr_2 [i_2]), (arr_3 [i_1] [i_2]))))))));
                    var_17 |= (((((((min(-7741, 31785))) ? (0 + -34) : -11433))) ? var_2 : (((((((arr_4 [10] [10] [i_1]) ? (arr_5 [i_1] [i_2]) : 15))) - var_6)))));
                    var_18 = (((((~(!16384)))) ? ((((((min((arr_3 [10] [i_3 + 1]), 32749))) == ((((arr_7 [1] [i_1] [i_1]) >= (arr_7 [i_3] [i_2] [i_1])))))))) : (min(((1 ? var_7 : var_7)), (((!(arr_3 [i_1] [i_1]))))))));

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_19 = (((255 ? -0 : (-127 - 1))));
                        var_20 -= (((((((max((arr_0 [i_1] [i_2]), (-127 - 1)))) ? (~248) : (((var_7 == (arr_9 [i_1] [i_2] [8] [i_4]))))))) < (((((arr_7 [i_1] [i_1] [i_4]) > (arr_9 [6] [6] [6] [6]))) ? (max((arr_1 [i_1]), -9223372036854775791)) : (3355 - var_3)))));
                    }
                }
            }
        }
    }
    var_21 = (min(331547276, 1050));
    #pragma endscop
}
