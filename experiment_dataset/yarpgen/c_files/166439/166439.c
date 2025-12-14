/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (((arr_3 [i_0] [i_1] [i_0]) <= (((((var_15 ? 4088314364891309190 : var_6))) ? (arr_3 [i_1] [11] [i_0 - 1]) : (max(-4088314364891309191, 6960279837428563415))))));
                var_21 ^= ((max((arr_4 [i_0 + 3] [i_1] [i_1 - 1]), -19789)));
                arr_5 [i_0] [i_0] [9] = ((~(max((!0), 10))));
                var_22 = ((((max(((max(8260226648838930764, (arr_2 [i_1] [i_1])))), var_1))) && 342486612070407342));
                var_23 = ((((max(16, (arr_0 [i_0 + 2])))) ? ((var_1 ? var_13 : (arr_0 [i_0 - 2]))) : (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 3])))));
            }
        }
    }
    var_24 = ((var_13 & (min(18446744073709551606, var_4))));

    /* vectorizable */
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = 8260226648838930764;
        arr_9 [i_2] [i_2] = ((-(arr_4 [i_2 - 3] [i_2 + 1] [i_2 + 1])));
        var_25 = (8260226648838930753 ? ((((arr_0 [i_2]) | (arr_0 [i_2])))) : var_3);
        var_26 ^= (arr_4 [i_2] [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_27 = ((min(8184639133410271290, var_3)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 9;i_5 += 1)
            {
                {
                    arr_18 [i_5] [i_5] [i_5 - 3] = ((var_16 - ((-var_15 ? ((var_14 ? 8260226648838930741 : 9402703593491527909)) : ((1005730775115151447 ? 3283980723745599622 : 2))))));
                    var_28 = ((15019 ? 18446744073709551612 : -20014));
                    var_29 += ((!((max(var_5, var_1)))));
                    arr_19 [9] [9] [i_5] [i_5] = ((-((-24705 + (min((arr_11 [i_4] [i_3]), var_1))))));
                }
            }
        }
        arr_20 [i_3] = (-9223372036854775807 - 1);
        arr_21 [i_3] = ((!(((12 ? ((13458835491769103744 + (arr_0 [i_3]))) : ((min(-11059, 2491146876))))))));
        var_30 &= (((arr_4 [i_3] [i_3] [i_3]) << (var_16 + 30124)));
    }
    var_31 = ((((((-9223372036854775807 - 1) ? var_7 : 117440512)) / var_19)));
    #pragma endscop
}
