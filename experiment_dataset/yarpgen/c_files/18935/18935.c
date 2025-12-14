/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((((((21527 ? var_11 : var_12)))) ? (((((var_3 ? var_8 : var_7))) ? ((var_9 ? var_16 : 8796092891136)) : 8796092891136)) : var_14));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [14] [i_1] [i_2] [i_3] [i_3] = 8796092891136;

                            for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                            {
                                var_18 = (min(var_18, (((((8333592120408795528 ? (((1832455622 ? 65 : 37))) : ((-252105203921018651 ? 137640080584750873 : 14))))) ? (((arr_1 [i_0 + 2] [i_0]) ? 17957167810232028216 : ((65 ? (arr_0 [i_0] [i_1]) : (arr_13 [11] [11] [11] [i_3] [i_3] [i_4]))))) : ((240731209 ? 85 : -86))))));
                                var_19 = (arr_13 [i_3] [i_1] [i_1] [i_1] [i_0] [i_3]);
                            }
                            for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                            {
                                var_20 = ((((((((var_6 ? (arr_2 [i_0] [i_0]) : 137640080584750873))) ? var_12 : -9223372036854775803))) ? var_5 : ((((arr_14 [12] [7] [10] [i_2] [i_1] [i_0] [i_0]) ? 871371310909921347 : 8588133956512206656)))));
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [13] [i_1] = (((5 ? 25169 : 871371310909921347)));
                                var_21 = (min(var_21, -699224582));
                            }
                            for (int i_6 = 1; i_6 < 15;i_6 += 1)
                            {
                                arr_19 [i_2] [i_2] = (arr_2 [14] [i_1]);
                                var_22 = -46006918551937130;
                            }
                            for (int i_7 = 0; i_7 < 18;i_7 += 1)
                            {
                                var_23 = (((var_9 ? (arr_20 [4] [i_3] [i_2] [i_2] [i_0] [i_0] [i_0]) : var_11)));
                                arr_24 [i_1] = (arr_6 [i_0] [i_0]);
                                var_24 = -37;
                            }
                        }
                    }
                }
                arr_25 [i_0] [i_0 + 2] [i_0 + 2] = ((((((arr_14 [i_1] [7] [6] [i_1] [i_1] [12] [6]) ? 12278 : var_7)))) ? -766280080 : ((((arr_17 [i_0] [i_0] [i_0] [i_0 - 1] [i_0]) ? var_3 : 9885205738445266869))));
            }
        }
    }
    #pragma endscop
}
