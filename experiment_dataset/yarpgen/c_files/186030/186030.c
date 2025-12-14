/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 *= (((((50342 ? -11316 : 14846))) ? ((12 ? 7292 : 23372)) : 12810));
        arr_3 [i_0] [i_0] = ((-1 ? 27592 : ((27579 ? 17004 : ((max(14846, 29620)))))));
        arr_4 [i_0] = (65523 - -27542);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_4] = ((((((((var_1 ? 65535 : var_13))) ? (!var_3) : var_11))) ? var_6 : 14637));
                            var_21 = (max(var_21, (max(50359, -14858))));
                            arr_17 [i_0] [10] [i_0] [i_2] [i_0] [i_0] |= (min((((var_12 ^ var_14) << ((((48061 ? var_18 : 15175)) - 49128)))), (((var_9 ^ var_14) ? (var_16 | 63) : (~var_8)))));
                            arr_18 [i_0] [i_0] [i_0] [i_3] [i_0] = var_5;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_22 = (max(var_22, (var_12 || var_7)));
                            var_23 = (((16384 ? 51988 : 51988)));
                            var_24 -= (!15);
                            var_25 = var_11;
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_26 = (max(var_26, var_1));
                            arr_23 [i_0] [3] [i_2] [i_0] [i_6] = (max((min(-14476, 27572)), var_19));
                            var_27 = (min(var_27, 48090));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_28 = (!41697);
                            arr_27 [i_0] [i_1] [i_0] [i_3] [i_7] = (!22839);
                            var_29 = (max((!11316), (12382 && -11317)));
                        }
                        arr_28 [9] [i_2] [i_0] = (max((var_18 | 13580), (min((~var_11), 37994))));
                        arr_29 [i_0] [i_1] [i_1] [i_3] = (min(((max(var_0, 15363))), ((11316 ? 32990 : 46696))));
                        arr_30 [i_0] [i_1] [i_1] [i_0] [i_1] = (!var_17);
                        var_30 = ((50342 >= (((var_14 ^ 55239) ? var_1 : (var_12 != 15)))));
                    }
                }
            }
        }
    }
    var_31 = (max((((var_11 || (-964 && 7936)))), -8310));
    var_32 = var_17;
    #pragma endscop
}
