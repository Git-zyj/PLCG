/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 3702123533;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_20 = 2092822886;
                arr_6 [i_1] [i_0] [i_0] = ((var_6 | (((var_9 ? (arr_0 [i_0 + 1] [i_0 + 1]) : (arr_4 [i_0] [i_0 + 1] [i_1]))))));

                for (int i_3 = 4; i_3 < 18;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_21 = (min(var_21, ((((arr_9 [i_3 + 1] [i_3] [i_3 - 4] [i_3] [i_2]) << (((((arr_5 [i_0] [i_0 + 1] [i_3 - 2] [i_3 - 2]) + 1482120252)) - 23)))))));
                        var_22 = (max(var_22, 592843762));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_23 = (min((~var_8), ((3702123512 ? -2055574941 : 592843793))));
                        var_24 = -3;
                    }
                    var_25 = ((max(((min((arr_12 [i_0 - 1] [i_0] [i_1] [i_1] [i_2] [i_3 - 1] [i_3]), var_5))), (min(var_12, 1519169664)))));
                }
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_26 = (max(-20557, var_1));
                var_27 = var_7;
            }
            for (int i_7 = 3; i_7 < 16;i_7 += 1)
            {
                var_28 = (min(var_28, (((3702123515 ? 32767 : var_1)))));
                arr_21 [i_0] [i_1] [i_7] = -2;
                var_29 = (((835443702 >> 14) <= (((min(-13, (arr_0 [i_0 - 1] [i_7 + 2])))))));
                var_30 = (((~(arr_11 [i_7 + 1] [i_1]))));
            }
            arr_22 [i_0 + 1] [i_1] = ((3702123494 ? (((arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] [6]) ? (arr_12 [i_0 + 1] [9] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 1]) : var_5)) : 7));
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            arr_26 [16] [i_8] = 160;
            var_31 = ((((max(var_17, 60))) ? ((3702123503 ? 32138 : (max(128, var_9)))) : ((((arr_20 [i_0] [i_0 - 1] [i_0 + 1] [i_8]) ? (arr_18 [i_8]) : var_18)))));
        }
        var_32 &= var_18;
        var_33 = ((var_16 ? ((min((arr_2 [6]), (arr_2 [14])))) : ((-124 ? (arr_2 [14]) : (arr_2 [8])))));
    }
    #pragma endscop
}
