/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 137438953471;
    var_14 = 6697002734345388601;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (--194);
        arr_2 [i_0] [i_0] = ((-72057593903710208 && ((max((min(178, var_12)), (!38884))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [2] [i_0] [i_0] = (((((((min(3530627996, var_5))) ? (arr_11 [i_2] [i_2] [5] [i_3] [i_2]) : ((min(-1, -86)))))) ? (max((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? 18374686479805841407 : 26651)), ((((arr_9 [i_4] [i_2] [i_1]) ? 16152 : -21521))))) : -21521));
                                arr_13 [i_4] [i_3] [i_2] [i_0] [i_0] = 21520;
                            }
                        }
                    }
                    var_16 = 41;
                    var_17 = 6697002734345388601;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = ((-((((1647900614751846066 ? -1647900614751846066 : 18446743936270598133))))));
        arr_18 [i_5] = (((!(arr_10 [i_5] [i_5] [19] [19] [i_5] [i_5]))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_22 [i_6] [i_6] = 511;
        arr_23 [i_6] = (arr_21 [5] [5]);
        arr_24 [i_6] [i_6] = 18374686479805841390;

        for (int i_7 = 4; i_7 < 21;i_7 += 1)
        {
            arr_27 [i_6] [i_7 - 4] = ((((var_4 ? var_5 : 18374686479805841395)) & 38884));
            arr_28 [i_6] [i_6] [i_6] = 0;
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_18 = -1647900614751846065;
            arr_31 [i_8] = -18446743936270598142;
            var_19 = ((72057593903710206 ? (arr_29 [i_6] [i_6] [i_8]) : (arr_26 [i_6] [i_8])));
        }
    }
    #pragma endscop
}
