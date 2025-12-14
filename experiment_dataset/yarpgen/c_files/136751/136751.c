/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = (((var_9 || var_18) ? (((var_11 || (var_14 ^ -2101378908)))) : (127 >= 1)));
    var_21 = (~var_18);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = 1;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_23 = ((+((47969 ? (((min((arr_2 [i_0] [i_0]), 1)))) : (arr_4 [1])))));
            var_24 = ((1 ? 255 : 1));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3] = max(var_0, 4611686018427379712);
                        arr_12 [i_0] = (((arr_5 [i_0] [i_3]) ? (arr_5 [i_0] [i_1]) : 107));
                        arr_13 [i_3] [i_2] [i_0] [i_0] [i_0] = (min((max(var_17, ((max(255, 1))))), (arr_0 [i_0])));
                        var_25 = (max((arr_10 [i_0] [i_3]), ((29860 ? (arr_1 [i_2]) : (arr_1 [i_1])))));
                        var_26 = (min(var_26, -4611686018427379713));
                    }
                }
            }

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                var_27 = (max((((arr_8 [i_0] [1] [i_4]) ? -4611686018427379727 : (arr_6 [i_1] [2] [16] [i_0]))), ((max((arr_15 [i_0] [i_1] [i_0]), var_8)))));
                var_28 ^= (((((((1972697037 ? 1 : -4611686018427379699))) ? ((min(1, var_0))) : (arr_3 [i_1])))) ? ((max((!65533), 1))) : (-32757 ^ 65535));

                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    arr_19 [i_4] [i_1] [i_4] |= ((~(((arr_5 [i_5 + 1] [i_5 - 1]) ? (arr_5 [i_5 + 2] [i_5 + 2]) : 4294967293))));
                    arr_20 [i_0] [i_0] = ((!(((((max((arr_3 [i_4]), (arr_9 [i_0] [i_5 - 1])))) ? ((((arr_4 [i_5 - 1]) + -32740))) : ((-581431393439999863 ? (arr_0 [i_0]) : (arr_16 [i_5] [i_1] [0]))))))));
                    arr_21 [i_0] [i_0] [i_1] [i_4] [i_4] [i_5] = (min((((!(arr_3 [i_5])))), (min(-479037164, 1))));
                }
            }
        }
        arr_22 [i_0] [i_0] = ((min(-var_0, -15)));
        arr_23 [i_0] = (((arr_16 [i_0] [8] [i_0]) ? var_10 : (((~1) ? (min(var_5, var_0)) : (arr_9 [i_0] [i_0])))));
    }
    #pragma endscop
}
