/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((1 + ((min(var_18, 255))))), ((-((4608 ? 60928 : var_12))))));
    var_20 = var_0;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_21 = 11144;
            arr_4 [i_0] = ((var_3 ? ((max((arr_0 [i_0]), (arr_3 [9] [0])))) : (!4294967280)));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_9 [i_0] [i_0] [i_2] = max((arr_6 [i_0] [i_2]), 1);
            arr_10 [i_0] = (((((16 % 34040) & (var_18 - -110801036098575968))) / var_8));
            arr_11 [i_2] [4] = (~-1);
            arr_12 [9] = ((~((4181710397 % (arr_5 [i_0])))));
        }
        var_22 = ((32767 == ((((!0) != 1)))));
        var_23 = (max(((55039 ? (!60914) : (-17402 && 25))), (!40)));
        arr_13 [i_0] = (min((((max(4623, 17390)))), (min(var_14, ((511 ? 31 : 170))))));
        arr_14 [i_0] = ((-17382 || (arr_6 [i_0] [i_0])));
    }
    var_24 *= var_10;
    #pragma endscop
}
