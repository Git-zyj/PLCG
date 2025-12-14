/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                arr_8 [i_0] [i_1 - 1] [i_0] = -var_5;
                arr_9 [i_0] [0] [i_0] = ((((((((~(-9223372036854775807 - 1)))) ? 1024 : (~-5248932310015072092)))) ? -63801 : (arr_4 [i_2] [i_0])));
            }
            var_13 = ((((!(39863 > var_1))) ? var_4 : ((var_7 ? (!-5248932310015072085) : var_9))));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_14 = (((arr_2 [i_3] [i_3] [i_0]) >> ((((var_2 + (arr_0 [i_0]))) - 7721))));
            var_15 = (max(var_4, -var_1));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_15 [i_0] [7] [i_0] = var_1;
            arr_16 [i_0] [5] = (arr_6 [i_4] [i_4] [i_4] [i_0]);
            var_16 ^= (((var_9 - ((var_8 ? var_7 : (arr_12 [i_0] [i_4]))))));
            var_17 = ((511 ? -5248932310015072092 : -5248932310015072092));
        }
        var_18 = var_8;
    }
    var_19 = var_7;
    var_20 = (((((var_4 ? -var_6 : (!var_12)))) ? var_12 : var_5));
    var_21 -= ((5248932310015072076 | (((max(13, -5429))))));
    #pragma endscop
}
