/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    var_19 = ((var_12 & (max(((min(46933, 18593))), (18610 ^ 1637)))));
    var_20 = (min((((var_9 | var_13) + 46945)), var_10));
    var_21 = ((var_8 & (((var_14 || var_2) ? ((max(18602, var_13))) : var_8))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_22 = (max(var_22, ((((arr_3 [i_0] [i_1] [8]) << (((-var_8 + 214) - 11)))))));
            var_23 ^= ((var_16 + (arr_3 [i_1] [i_1] [4])));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_24 ^= (((arr_3 [8] [i_0] [8]) <= (((arr_5 [i_0] [i_0]) * (arr_5 [12] [4])))));
            var_25 = ((!(((1 ? (arr_6 [15] [i_2] [13]) : 1)))));
            arr_7 [i_0] = (arr_6 [i_0] [5] [i_2]);
            arr_8 [i_2] [17] [1] = var_3;
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    {

                        for (int i_6 = 4; i_6 < 15;i_6 += 1)
                        {
                            arr_18 [i_6 - 3] [i_3] [i_4 - 1] [9] [i_3] [i_0] = (((8 + 65535) > (arr_16 [i_0] [i_3] [i_4 + 1] [i_5 + 2] [i_5 + 2] [i_6 + 4])));
                            arr_19 [1] [i_3] [12] [i_4 - 1] [18] [4] [2] |= 18606;
                            var_26 *= 1158333186;
                            var_27 = (var_12 == 1634787368);
                        }
                        arr_20 [i_3] = (((((var_12 ? (arr_4 [3] [i_3]) : (arr_6 [13] [11] [9])))) ? (arr_3 [i_3] [i_5 + 1] [i_3]) : 25142));
                    }
                }
            }
        }
    }
    #pragma endscop
}
