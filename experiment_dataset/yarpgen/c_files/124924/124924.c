/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max((min(var_10, -0)), var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = min(993916883, (max(var_0, var_0)));
                var_15 = ((((((-993916892 ? var_6 : var_2))) ^ (~var_9))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((993916895 << (((arr_5 [15] [i_1 - 1] [i_1 - 1]) - 257421290))));
                    var_16 += (((((!var_10) >= (arr_6 [i_0] [i_1] [6]))) ? ((-(!var_6))) : ((var_0 ? (arr_4 [8] [i_1 + 2]) : ((((arr_3 [i_2] [i_1] [17]) <= var_1)))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    var_17 = (max(var_17, ((((arr_3 [i_1 + 2] [i_1] [i_1]) ? (arr_5 [i_1 + 1] [i_1] [i_1]) : -9223372036854775802)))));
                    var_18 ^= (((((-993916899 ? var_3 : 4049591974906326331))) ? var_10 : (arr_10 [0] [i_1] [i_1 + 1])));
                    var_19 ^= 993916887;
                    arr_11 [i_1] [i_1] [i_1] = ((~((-23851 ? (-2147483647 - 1) : 12602259112853333486))));
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                {
                    var_20 = (((((((((var_5 + 2147483647) << (var_4 - 3782600051628618595)))) * (var_12 / var_0)))) ? (((var_2 == var_2) ^ -2147483626)) : (((var_8 || 7024769787423431303) ? (4957532846850766067 || var_10) : ((~(arr_7 [i_0] [16] [i_4])))))));
                    var_21 *= 106;
                }
            }
        }
    }
    var_22 = (max(133, ((var_9 << (((var_6 + 745982229) - 32))))));
    #pragma endscop
}
