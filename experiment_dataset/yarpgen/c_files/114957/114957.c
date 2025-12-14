/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-18 ? (41 + -64) : (var_0 != var_2)));
    var_13 = var_10;
    var_14 = (min(((~(var_8 || var_4))), var_1));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_15 = (max(var_15, ((((max(-6787, ((~(arr_8 [i_0] [i_1] [i_1]))))) >> (-137 + 139))))));

                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_16 = (min(var_16, (arr_9 [1] [i_2])));
                    var_17 = (((((-4294967295 - (var_11 - var_2)))) ? (arr_8 [i_2] [i_1] [i_0]) : (104 + 262198207)));
                    arr_12 [i_0] [i_1 - 2] [i_3] [i_3] [i_0] = 0;
                    var_18 = (max(239, (arr_7 [i_3])));
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    arr_16 [2] [i_2] [2] [i_0] &= (min((arr_3 [i_0] [i_0]), ((33 ? 0 : (~33)))));
                    var_19 = ((!((((((var_10 ? (arr_0 [i_0] [i_0]) : -262198227))) ? ((min(250, 229))) : (222 && var_9))))));
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    arr_19 [i_0] [i_2] [i_0] = var_9;
                    arr_20 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] = 222;
                    var_20 = 18446744073709551613;
                }
                arr_21 [i_2] [i_0] [i_0] [i_0] = ((var_4 ? 18446744073709551611 : (((~((168 ? 0 : -6804)))))));
            }
            arr_22 [i_0 - 2] = 1221312426400677000;
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            arr_27 [i_0] [i_0] = var_7;
            arr_28 [i_0] [i_6 - 1] = var_5;
            var_21 = 64;
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_22 += 1221312426400677000;
            var_23 = 262198195;

            for (int i_8 = 2; i_8 < 8;i_8 += 1)
            {
                arr_37 [i_0 + 1] [i_7] [i_8 + 2] [1] = 6;
                var_24 = (max(var_6, (-32767 - 1)));
                var_25 = (((arr_7 [i_8]) ? (((+((max((arr_25 [i_7] [i_7] [i_0]), var_6)))))) : (arr_24 [i_0] [i_0] [i_0])));
                var_26 = (min(var_26, ((((235 + 0) ^ ((255 ? 65524 : 0)))))));
            }
        }
        var_27 = -262198228;
    }
    #pragma endscop
}
