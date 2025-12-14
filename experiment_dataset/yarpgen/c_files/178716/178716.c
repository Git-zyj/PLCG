/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((0 * (-32767 - 1)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_20 = (((-32767 - 1) + -11318));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    {
                        var_21 = (max(var_21, ((min(((max((arr_5 [i_0] [i_1] [i_3 - 2]), var_1))), (((arr_5 [i_0] [4] [i_3 + 2]) ? (arr_4 [6] [i_2 + 1] [i_2]) : (arr_4 [10] [i_2 - 1] [12]))))))));
                        arr_10 [15] [15] [i_2] [13] [11] [i_0] = ((+(((((arr_2 [4] [1]) <= var_6)) ? -6913 : ((1751 ? -21242 : (-32767 - 1)))))));
                        var_22 &= -8948;

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            arr_13 [7] [8] [15] [i_3] [13] = var_6;
                            var_23 ^= var_7;
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_24 = (min(var_24, (max((max((arr_5 [i_2 + 1] [5] [8]), var_16)), var_15))));
                            var_25 = (min(var_25, (((var_4 || ((min((arr_8 [6] [15] [i_2] [i_3]), ((21241 ? var_16 : -22494))))))))));
                        }
                        var_26 ^= (22494 <= 27701);
                    }
                }
            }
        }
        var_27 = -21241;
        var_28 -= ((((((min(var_15, -21241))) ? ((max(var_7, var_5))) : ((min((arr_9 [5] [1]), (arr_2 [i_0] [i_0])))))) + (arr_8 [11] [13] [14] [2])));
        var_29 = ((~(max((arr_5 [7] [i_0] [7]), (~var_9)))));
    }
    var_30 = ((-32395 ? ((9740 ? 32767 : 21241)) : var_6));
    #pragma endscop
}
