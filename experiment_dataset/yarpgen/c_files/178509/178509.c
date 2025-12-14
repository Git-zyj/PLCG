/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((((~(min(var_10, -7))))) ? (((!1170350322) ? var_13 : ((-4548202809032823500 ? 1705501829 : 813915280)))) : ((max(174, -1444888393))))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_17 = ((((var_12 ? 81 : (arr_1 [i_0 + 1]))) == var_1));
        var_18 = (max(var_18, (((((((arr_2 [i_0]) - (arr_2 [i_0])))) ? 1111155966 : ((1660213966 ? -1085552432 : 171)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 *= -2157178518;
                    arr_9 [i_0] [i_2 + 1] [i_1] [i_0] = (~(arr_5 [i_0 - 1] [i_1]));
                }
            }
        }
        arr_10 [i_0] = 262142;
    }
    var_20 = var_12;
    var_21 = min(var_8, var_13);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            {
                var_22 &= 149;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_23 = var_6;
                            arr_22 [i_6] [i_4 - 1] [i_6] = ((+(((arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) ? (arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : (arr_19 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
                            arr_23 [i_3] [i_4 - 1] [i_6] [i_6] = (3124616998 ? -1444888393 : 0);
                        }
                    }
                }
                var_24 = (arr_15 [i_3] [i_4] [i_3]);
            }
        }
    }
    #pragma endscop
}
