/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((((((var_8 ? var_7 : var_0))) ? (var_3 && var_6) : 34358689792)))));
    var_12 = 63352;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = ((~17592186044415) ? var_9 : (17592186044405 | 17592186044415));
                arr_5 [i_0] [7] [i_1] = (max(40005, (min(46, (max((-32767 - 1), 1))))));
                var_14 = ((((((!(((var_4 ? var_2 : (arr_4 [i_1])))))))) < (max(var_9, (arr_2 [i_0 + 1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = (~var_1);
                                arr_13 [0] [i_0] [12] [12] [2] [12] [3] = (((min(var_7, var_6)) - (((18446726481523507186 && (!18446726481523507201))))));
                                var_16 = (arr_3 [7] [1] [i_0]);
                                arr_14 [i_0] = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {

                /* vectorizable */
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    arr_24 [11] = (18446726481523507176 | 18446744073709551604);
                    arr_25 [1] [i_6] [i_5] = ((-(!var_3)));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_17 = (((((5 ? 173 : 3458764513820540928))) ? (var_3 - var_9) : (!91)));
                                arr_31 [i_8] [i_8] [13] [i_6] [i_8] = var_6;
                            }
                        }
                    }
                    var_18 = (((arr_29 [i_7 + 1] [i_7] [2] [i_7] [16]) ? (((var_10 ? 2362774277 : var_8))) : ((var_0 ? 17592186044414 : (arr_29 [12] [i_6] [i_6] [i_7] [i_6])))));
                }
                arr_32 [2] = ((var_8 + (max(173, var_1))));
                arr_33 [0] [1] [15] = var_2;
            }
        }
    }
    var_19 = ((((((((1 ? 18446726481523507200 : 1160994885))) ? (max(var_5, 64)) : 179))) ? 17592186044430 : -3458764513820540928));
    #pragma endscop
}
