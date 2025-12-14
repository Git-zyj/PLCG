/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (35182224605184 + 2450403173);
    var_20 = ((!(((max(-35182224605185, -35182224605185)) <= -var_17))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_21 = var_16;
        var_22 = (((((~(min(var_7, -35182224605182))))) ? 7609974965373705662 : ((35182224605170 ? 1127089425 : -1))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_23 = -7609974965373705637;
                                var_24 = 0;
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] = (var_16 + var_14);
                            }
                        }
                    }
                    arr_14 [i_1] = ((7609974965373705659 | -6359471593154552455) ? var_12 : var_18);
                }
            }
        }
        var_25 -= (9 > 2421367384395159651);
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_26 -= ((var_12 ? (min((arr_4 [i_5] [3] [i_5]), var_3)) : var_18));
        var_27 = ((+(((arr_15 [i_5] [i_5]) * var_1))));
        arr_18 [i_5] = ((((((~(arr_16 [i_5] [i_5]))) != var_18)) ? (576460752303423480 && 35182224605184) : ((((max(0, var_4))) ? (arr_0 [i_5]) : -62))));
        var_28 -= var_6;
        var_29 = ((((!((max((arr_15 [i_5] [i_5]), 13462097639956899179))))) ? (arr_5 [1]) : (((arr_9 [i_5] [i_5] [i_5] [i_5]) ? -7609974965373705646 : (arr_9 [i_5] [i_5] [i_5] [i_5])))));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_30 = (min((127 > var_9), -35182224605204));
            var_31 -= var_16;
        }
        var_32 = (min(var_32, (arr_19 [i_6] [i_6])));
    }
    var_33 = (max(var_6, var_1));
    #pragma endscop
}
