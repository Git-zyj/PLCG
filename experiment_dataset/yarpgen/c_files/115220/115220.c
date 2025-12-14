/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = 1;
                var_16 = (min(var_16, (arr_2 [i_0])));

                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_17 = (max(var_17, ((max(((var_11 ? (arr_9 [i_0] [i_0] [i_0]) : ((var_14 ? (arr_3 [i_0] [6]) : 0)))), (arr_0 [i_0]))))));
                    arr_10 [i_2] [i_0] [i_2] [i_0] = (arr_3 [i_1] [i_2]);

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_15 [i_3] [i_1] [i_0] [i_2] [i_1] = var_7;
                        var_18 = ((-956856278 ? ((var_11 ? 4294967295 : 149)) : (~var_12)));
                        var_19 = (max(var_19, -956856278));
                    }
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    var_20 -= ((!(arr_3 [i_0] [i_0])));
                    var_21 = (max(var_21, ((min(((((((~(arr_2 [i_1])))) || (!-956856278)))), var_1)))));
                    arr_18 [1] [i_1] [i_0] [12] = (max(1, (((((var_12 ? 1 : 1796626232))) ? (min((arr_2 [i_0]), var_8)) : 1))));
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        var_22 = (~2046414129);
                        var_23 -= (((((1 ? 1 : 1))) ? var_10 : (max((230 + 1), ((2147483623 - (arr_8 [i_0] [i_1])))))));
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_24 = ((((1 << (-16384 + 16400))) > (!563552576)));
                        var_25 = (max(-4709, -2147483634));
                        var_26 ^= (arr_20 [i_7]);
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_27 = (min((((arr_25 [i_0] [i_5] [i_5] [i_0]) ? (arr_25 [i_8] [i_5] [i_1] [i_0]) : var_12)), (((arr_25 [i_8] [i_5] [i_1] [i_0]) ? (arr_25 [i_1] [i_1] [1] [i_1]) : 3758096384))));
                        var_28 = -32767;
                        arr_30 [i_0] [i_1] [i_5] [i_8] = ((+((((arr_8 [i_0] [i_5]) + 3522441219)))));
                    }
                    var_29 = ((~((((((arr_0 [i_0]) ? (-32767 - 1) : (arr_28 [i_0] [i_1] [i_1] [i_0])))) ? (((arr_7 [i_0] [i_1]) ? var_8 : 8)) : var_9))));
                }
                var_30 ^= (var_2 ? (~1184852783) : ((-1 ? ((var_10 ? var_6 : 1)) : ((var_3 ? var_3 : 1)))));
            }
        }
    }
    var_31 = 0;
    var_32 = (+((var_0 ? (-1985397566 / var_2) : (var_7 + var_3))));
    #pragma endscop
}
