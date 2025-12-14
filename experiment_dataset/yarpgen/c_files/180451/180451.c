/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((32768 != 32768) ? ((var_6 ? (((var_1 ? var_12 : var_6))) : (~var_0))) : ((max(((32768 ? 11 : -10753)), ((0 ? 1784783748 : -124)))))));
    var_20 = (min(var_20, (((((min(var_12, (var_8 * var_1)))) ? (((var_5 | 23) * (((10764 ? 65530 : var_15))))) : (max(((min(-8525, 32778))), var_5)))))));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_21 ^= (max((((!(12050 >= -13)))), ((((min(110458453, (arr_1 [i_0])))) ? 133 : (((((arr_2 [9]) < (arr_2 [i_0 + 4])))))))));
        var_22 |= (((arr_3 [i_0] [i_0 - 2]) == (arr_1 [i_0 + 2])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_23 = ((-((((((arr_8 [i_0] [8] [i_0] [i_3]) ? (arr_5 [i_1] [1]) : (arr_5 [i_0] [6])))) ? (min((arr_5 [i_0] [i_0]), 255)) : (((2147483647 ? (arr_2 [2]) : (arr_6 [i_3] [i_3] [10]))))))));
                        var_24 ^= (arr_7 [1] [i_2]);
                        var_25 = (min(var_25, ((((((((((arr_8 [14] [i_1] [i_2] [i_3]) ? (arr_8 [i_0] [17] [i_2] [i_3]) : (arr_3 [i_0] [i_3])))) ? ((((arr_7 [i_2] [i_2]) / (arr_10 [i_0] [8] [i_2] [i_0])))) : (((arr_8 [i_0] [i_1] [10] [i_3]) % 17614996986125086241))))) ? (((arr_10 [8] [8] [8] [1]) ? (arr_7 [i_0 + 3] [i_2]) : (((arr_7 [i_0] [i_2]) << (((((arr_6 [i_0 - 1] [i_1] [i_2]) + 565843105)) - 10)))))) : ((((arr_10 [11] [i_0] [i_2] [1]) == (arr_8 [i_0 - 2] [i_0 + 1] [i_0 + 4] [i_0 - 1])))))))));
                    }
                }
            }
        }
    }
    var_26 |= (min(((((var_16 == var_3) ? (min(var_3, -2657558333542428845)) : (2327699964609678969 != 10752)))), ((((((-9223372036854775807 - 1) | var_17))) ? ((var_4 ? var_18 : var_10)) : (var_3 & var_10)))));
    #pragma endscop
}
