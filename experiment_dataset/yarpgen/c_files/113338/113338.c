/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = ((max(((154 ? 102 : (arr_4 [i_2]))), ((((arr_4 [i_2]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_2])))))));

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_18 = ((((min(18446744073709551615, ((min((arr_4 [i_2]), 1)))))) ? (((-(arr_3 [i_1] [i_1] [i_3 + 1])))) : (min((~5650706514393609), ((83 ? -3742708910507435064 : (arr_0 [i_3])))))));
                        var_19 = ((-(max((max(4, (arr_4 [i_0]))), ((max(0, 154)))))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_20 = ((45646 ? 32768 : 1));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            arr_13 [i_2] [i_1] [i_2] [i_1] [i_2] = 0;
                            arr_14 [i_0] [i_1] [i_2] [i_0] [i_0] = ((1281537754299123683 ? 992 : (((arr_1 [i_4]) ? 6796333546482715453 : (arr_5 [i_0] [i_0] [i_5])))));
                        }
                        var_21 = 5095844295172113482;
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_17 [i_2] [i_1] [i_2 - 3] [i_2] = ((-((148 ^ (((arr_8 [i_1] [i_2] [i_6]) ? -992 : (arr_12 [i_2] [i_2])))))));
                        arr_18 [i_0] [i_1] [i_2] [i_2] [i_6] = (max((((min(1052001883, 109)) % (arr_0 [i_0]))), (arr_6 [i_2])));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_22 = ((((11 ? 902498914 : -41)) % ((((arr_7 [i_2] [i_2] [i_1] [i_1] [i_2 - 2] [i_7]) || (arr_0 [i_1]))))));
                        var_23 = (max((((((max(4843131799909810412, -1075539036))) ? ((5650706514393609 ? (arr_19 [i_7] [i_2] [i_1] [i_0]) : (arr_2 [i_0 - 2]))) : (~-45)))), (-1 - 1)));
                    }
                    var_24 = ((((((((arr_4 [i_2]) >= 8211)) ? ((((45646 == (arr_0 [i_0]))))) : (max(1281537754299123683, 1))))) ? (((arr_0 [i_0]) ? 9223372036854775807 : (max(3049914909473815315, (arr_12 [i_2] [i_2]))))) : ((((!(~629440347)))))));
                    arr_21 [i_2] [i_1] [i_2 - 2] [i_1] = (arr_15 [i_0 - 2] [i_0 - 2] [i_1] [i_2]);
                }
            }
        }
    }
    var_25 = (-3120096704373989931 ? (max(var_1, (!7))) : (((((27 ? var_10 : 8263686271221888816)) << ((-1550590917404975966 ? 0 : var_6))))));
    #pragma endscop
}
