/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(0, (~var_18)));
    var_21 = var_16;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_22 = -13;
        var_23 = (max((min(4294967295, 242)), ((min((arr_0 [i_0 + 3] [i_0 - 1]), (arr_2 [i_0 - 1] [i_0 - 3]))))));
        var_24 -= arr_0 [i_0] [i_0];

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                var_25 = (((((max(var_13, 4294967289)) > (((min(var_1, (arr_5 [i_0] [i_1] [i_1 + 2] [i_2]))))))) ? ((var_16 ? ((((arr_3 [i_0]) == (arr_4 [i_0 - 2] [11] [i_2 + 2])))) : (~2147483647))) : (arr_6 [i_0] [i_0] [i_0] [i_0 + 1])));
                arr_7 [i_2] [i_1] [i_1] [i_0 - 2] = ((4294967279 / ((max(((255 ? 29 : var_7)), (arr_3 [i_0]))))));
                arr_8 [1] [18] [i_2] [i_1 - 1] = ((((((2490385840258087159 != (arr_4 [i_0 + 1] [1] [i_2]))) ? (((var_14 ? var_7 : (arr_6 [1] [i_1] [i_1] [i_2])))) : (2269814212194729984 & 250))) >> (((0 || ((max((arr_0 [i_0 + 1] [i_2]), var_10))))))));
            }
            var_26 = 6895167228440902021;
            arr_9 [i_0 - 3] [i_1 + 1] = ((var_0 <= (arr_2 [i_0] [i_1])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_27 = ((var_14 - (arr_1 [i_0])));
            var_28 = (~-2269814212194729985);
            var_29 = var_8;
            var_30 = ((-(arr_11 [17] [i_3] [16])));
            var_31 = (0 >> 1);
        }
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            arr_14 [i_0] [0] = var_8;
            arr_15 [i_0 - 2] = ((((!(arr_4 [i_0 - 3] [i_0 + 1] [i_0 - 3]))) ? ((((min(-1273215942, 1))) ? ((var_15 ? -68 : 249350187)) : (arr_4 [i_0 - 1] [0] [i_4 + 1]))) : ((max((max(1, (arr_2 [i_0] [i_4 + 1]))), 1)))));
        }
        var_32 *= var_9;
    }
    var_33 *= ((var_2 != (((((1 ? 1 : 219)) != (~-17565))))));
    #pragma endscop
}
