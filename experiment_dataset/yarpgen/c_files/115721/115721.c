/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((8191 ? var_5 : (~15237551918036415266))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = 15237551918036415266;
                var_13 ^= 3209192155673136350;

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_14 = (((((((1028528091 ? (arr_4 [i_1] [i_2]) : (arr_5 [3] [5] [i_1] [i_2]))) % (arr_6 [i_0] [i_1] [7])))) <= (((((15237551918036415266 ? var_9 : 9223372036854775801))) ? 15237551918036415248 : 15237551918036415245))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (arr_4 [i_0] [i_4])));
                                arr_11 [2] [i_4] = var_6;
                            }
                        }
                    }
                    var_16 = (max(1726057674, (arr_1 [i_0])));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_17 = (min(var_17, ((((((arr_3 [i_2] [5]) == (arr_6 [i_1] [i_2] [i_2]))) ? (arr_9 [i_1]) : (31662 - 1073741823))))));
                        var_18 = ((-(arr_6 [11] [i_1] [i_2])));
                    }
                    var_19 = (+((2147483647 << (((((arr_5 [i_0] [2] [i_0] [i_0]) + 2147476196)) - 28)))));
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_23 [i_8] [2] = (max(((((arr_5 [1] [i_6] [i_7] [i_8]) * (-44 < 15237551918036415273)))), (((max((arr_15 [i_1] [i_1] [i_6] [i_7]), var_1)) % (-1174125255024274858 / 3209192155673136368)))));
                                arr_24 [i_8] = (var_7 - 2147483647);
                                var_20 -= ((((((arr_15 [i_0] [i_1] [i_6] [i_7]) << (((arr_15 [12] [i_6] [i_6] [6]) - 26450))))) == (arr_15 [6] [i_1] [6] [i_8])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, (~var_4)));
    var_22 = (min(var_9, (max(16799718902540497167, (max(-176674935587561312, var_6))))));
    var_23 = var_6;
    #pragma endscop
}
