/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_15 = ((((1 ? 9223372036854775782 : 1)) != (arr_1 [i_1])));
                        arr_12 [i_0] [i_1] [i_1] [i_3] [i_3] = (min((max(-1, (arr_0 [i_0]))), ((max(-44, 16822920813886121043)))));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_16 ^= (arr_13 [i_0] [i_2]);
                        arr_15 [i_4] [0] [i_1] [i_0] = ((+(min((((arr_9 [i_0]) ? var_3 : var_2)), -55))));
                    }
                    var_17 = ((-(arr_3 [i_0] [i_0])));
                    var_18 += (!255);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_19 += (arr_17 [i_6 - 1] [i_1 + 1] [i_1]);
                                var_20 = ((((((~(arr_4 [i_2])))) ? 1 : (min(2298305593297008692, 496964510)))));
                                var_21 &= (max((arr_4 [0]), (arr_4 [i_1 + 2])));
                            }
                        }
                    }
                    var_22 ^= (max(141, 1));
                }
            }
        }
        arr_20 [i_0] = (((~-64) << ((((-571595049 ? (arr_16 [i_0] [i_0] [10] [i_0] [i_0]) : 8043938239584160268)) - 1174402926))));
    }
    var_23 &= (-9223372036854775807 - 1);
    #pragma endscop
}
