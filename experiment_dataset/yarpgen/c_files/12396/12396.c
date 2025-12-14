/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                arr_7 [i_0] [i_0] [i_0] [i_0] = ((-(arr_3 [i_2] [i_1])));
                arr_8 [4] [i_1] &= -456296302;

                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_10 = (max(var_10, var_1));
                    var_11 = (max(var_11, (((((arr_11 [i_0] [i_0] [i_2] [i_3]) < -73))))));
                }
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    arr_15 [i_0] [i_4] [i_2] [i_2] = 127;
                    arr_16 [i_0] [i_1] [i_1] [i_0] [i_1] [i_4] = (((arr_13 [i_0] [i_0] [i_0] [i_4 - 1]) / (arr_11 [i_0] [8] [i_2] [i_4 - 1])));
                    arr_17 [i_0] [i_1] [i_2] [i_4] = (arr_5 [i_4 - 3] [i_4 - 1] [i_4] [8]);
                }
            }
            arr_18 [i_0] [i_0] [6] = (((arr_13 [i_0] [3] [i_0] [i_0]) ? -65535 : (arr_14 [i_1])));
            var_12 += var_7;
            var_13 += 6;
        }
        arr_19 [3] [i_0] = 0;
        var_14 = ((((arr_14 [i_0]) ? (((arr_4 [i_0] [i_0]) & var_0)) : (~255))));
        arr_20 [i_0] = (-9223372036854775807 - 1);
    }

    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        var_15 = (arr_24 [i_5]);
        arr_25 [i_5 - 1] [i_5 - 1] = 9223372036854775807;
        var_16 = (max(((((arr_23 [i_5 - 2] [i_5 + 1]) || var_9))), (((arr_23 [i_5] [i_5 - 1]) - (arr_24 [i_5 + 3])))));
        var_17 = 74;
        var_18 = -var_5;
    }
    var_19 = (-32767 - 1);
    var_20 = (~var_0);
    var_21 = 54975;
    #pragma endscop
}
