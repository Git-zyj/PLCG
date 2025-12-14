/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (!var_2);
    var_21 = (min(var_21, var_15));
    var_22 += (min(((((0 ? 1 : 1)))), var_7));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_23 = (min(var_23, ((max(var_8, 1)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            var_24 *= (arr_7 [10] [i_1] [i_1]);
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] |= (arr_12 [i_0] [i_0] [i_2] [i_2] [1]);
                            var_25 = (((arr_12 [i_4 + 2] [i_4] [i_4] [i_4] [i_4 - 3]) ? 1 : (arr_10 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 2] [i_4 - 3])));
                            arr_15 [i_0] [8] [1] [i_4] [6] = var_2;
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 12;i_5 += 1)
                        {
                            var_26 ^= ((12582912 << (((arr_10 [i_5 - 2] [i_5 - 2] [i_5 + 1] [i_5 - 2] [i_0]) + 20))));
                            arr_18 [i_0] [i_2] [i_5] [i_3] [i_5] = (arr_16 [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]);
                            var_27 = -1590658287;
                            var_28 = (1078801510 - var_6);
                            var_29 = (max(var_29, (((-(arr_8 [i_1] [i_5 + 1]))))));
                        }
                        arr_19 [i_0] [i_0] [i_0] [1] = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_20 [i_3] [i_2] [0] [i_0] = (max(((~(arr_7 [0] [0] [i_3]))), (arr_4 [i_3])));
                    }
                }
            }
        }
        arr_21 [i_0] [i_0] = ((~(((((~(arr_13 [i_0] [i_0] [i_0] [i_0])))) ? (~29456) : 126))));

        /* vectorizable */
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            arr_25 [5] = (((!var_9) ? (arr_12 [6] [i_0] [i_0] [i_0] [i_0]) : -1078801515));
            var_30 = 1078801511;
            var_31 = ((~(~1)));
        }
        var_32 *= (((min(((((arr_8 [i_0] [i_0]) ? 1354748537 : (arr_1 [i_0] [i_0])))), (min(-7966858162459705016, 31478)))) - (((max((arr_13 [i_0] [i_0] [i_0] [i_0]), (arr_13 [i_0] [i_0] [i_0] [i_0])))))));
    }
    #pragma endscop
}
