/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((min((min(-68, var_3)), ((((!var_8) >= (max(var_9, var_3))))))))));
    var_12 += var_3;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = ((((((max(-68, var_1))))) <= var_10));
        arr_2 [1] [1] = ((!((((arr_1 [i_0]) ? -1772451642426111328 : 2411356653)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = var_4;
        var_15 = (~67);
        var_16 = ((((1772451642426111328 ? -1772451642426111349 : ((1 ? -1772451642426111342 : -7276494036807702219)))) - (((7276494036807702220 ? 1 : 70)))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 = ((-(var_4 > var_2)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_18 = (max(var_18, (((-(min((((arr_6 [i_2] [i_3]) % -1744870251903147950)), (arr_7 [i_2] [i_3]))))))));
                    var_19 += ((82 ? ((min(0, 128))) : (-32767 - 1)));
                }
            }
        }
        var_20 = (max(32761, 35465847065542656));
    }
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        var_21 = 1;
        arr_18 [i_5] = (!-35465847065542656);
        arr_19 [i_5] [i_5] = ((1 ? ((((!(((arr_7 [i_5 - 1] [2]) != 0)))))) : ((~((1739196718 << (((arr_17 [i_5 - 1]) + 3716))))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    arr_25 [i_6] = 1307848090;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_22 = (!383798250);
                                var_23 = var_9;
                                var_24 = max((((!1) ? (arr_20 [10]) : (((-9223372036854775807 - 1) ? 383798250 : 35465847065542631)))), (arr_28 [i_5] [15] [15] [i_7] [15] [15]));
                                var_25 = max((!var_7), 146550605);
                            }
                        }
                    }
                    var_26 = -62;
                }
            }
        }
        arr_33 [i_5] = ((((2775776935361958806 ? var_8 : 35465847065542631)) ^ var_8));
    }
    var_27 = 7276494036807702205;
    var_28 = (var_5 ? ((((min(var_7, var_0))) | var_1)) : ((var_3 ? var_6 : var_3)));
    #pragma endscop
}
