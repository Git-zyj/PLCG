/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((((((143 ? 0 : var_11))) ? (!65535) : var_6)))));
    var_19 = var_8;
    var_20 &= var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_21 = var_8;
                                arr_12 [1] [i_0] &= (((((((max((arr_7 [i_4] [i_3 + 1] [i_2] [i_1]), -32))) >> (var_13 > var_5)))) ? (((((min(var_0, (arr_11 [i_0] [i_0] [i_2 - 1] [i_3] [i_4]))) <= (((min(0, 23)))))))) : ((((var_1 ? 1363527151133560175 : var_8)) - var_2))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_22 = -64;
                                var_23 ^= 0;
                            }

                            for (int i_6 = 2; i_6 < 15;i_6 += 1)
                            {
                                var_24 = 17083216922575991472;
                                var_25 = ((+(((((min((arr_10 [i_6] [i_0] [i_0] [i_0] [i_0]), (arr_6 [15] [15] [15]))))) % var_6))));
                                var_26 |= (min(((((9223372036854775807 ? var_9 : 2698523062815905593)) % ((min(var_14, -16))))), (arr_7 [i_0] [i_0] [i_0] [i_0])));
                                var_27 = (min(var_27, -105));
                            }
                            for (int i_7 = 3; i_7 < 16;i_7 += 1)
                            {
                                var_28 = (min((-4010535225920539103 - var_9), var_11));
                                var_29 = ((((var_14 ? var_6 : (arr_5 [i_0] [i_0] [i_2 - 1])))));
                            }
                            var_30 = 1;
                            var_31 = ((!((((((9506813336024429150 ? 9003459980748335234 : 7))) ? (arr_0 [i_1]) : (0 + var_15))))));
                        }
                    }
                }
                var_32 = (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}
