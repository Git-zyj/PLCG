/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (1451635304570913010 - 1451635304570913000);
    var_12 = (max(var_12, ((((((var_1 & (min(-1451635304570912993, var_0))))) ? 5 : 55076029)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((1451635304570912978 ? (min((arr_7 [i_0]), (~9402))) : ((((!(1451635304570913009 / 1451635304570912983)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [4] [1] [i_4] = -1451635304570912994;
                                var_13 = ((((min(var_9, 43776))) ? (((arr_5 [i_0] [i_0] [i_2 + 1]) ? (arr_5 [i_0] [i_1] [i_2 - 2]) : (arr_5 [i_3] [5] [i_2 + 1]))) : (((((-32767 - 1) > var_3))))));
                                var_14 = (arr_1 [i_0] [i_1]);
                                arr_15 [2] [i_3] [i_2 - 2] [i_0] [i_0] = (min((max((min(var_7, (arr_5 [0] [i_1] [i_1]))), var_1)), (arr_1 [i_2 - 2] [i_2 - 1])));
                                arr_16 [i_2 - 2] = (max(-1868700550, (max(10458175244396276650, -32750))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [3] = ((((-(arr_10 [i_1] [i_1]))) % (arr_10 [i_0] [i_1])));
                    arr_18 [i_0] [i_1] [i_0] [5] = (min((min(55076045, 1451635304570913001)), (1868700557 >= 1)));
                    var_15 = 8078930269768663417;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_16 = -1090953826;
        arr_23 [i_5] = (arr_7 [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        var_17 = (((var_3 ? -1451635304570912997 : (arr_29 [i_5] [4] [i_7]))));
                        var_18 = (min(var_18, (!var_0)));
                        var_19 = 1868700539;
                    }
                }
            }
        }
        arr_33 [8] = (var_5 - -7);
    }
    var_20 = (max(var_20, var_10));
    #pragma endscop
}
