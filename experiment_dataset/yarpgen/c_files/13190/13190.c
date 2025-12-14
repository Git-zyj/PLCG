/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (((((-1864801174 ? var_4 : var_13))) ? var_16 : -559335915));
        var_19 = (min(var_19, ((((((1864801174 ? 4081958360 : var_13))) ? 33903 : ((var_0 ? var_14 : 213008952)))))));
        arr_2 [i_0] = (((((2116787109 ? var_3 : -1864801174))) ? ((66 ? -374976671606239623 : 4893356959306288664)) : (((var_9 ? var_12 : var_13)))));
        arr_3 [i_0] = ((8958895734461670190 ? 246887586 : -4841458689820718132));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_20 = (min(var_20, var_15));
            var_21 = (((((-17086 ? ((54216 ? var_12 : var_15)) : (1952882458 && 54213)))) ? var_5 : ((var_6 ? var_6 : ((10024 ? var_7 : 24856))))));
            var_22 &= var_0;
        }
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_23 = ((4081958373 ? (31 / 39) : 4438309481018936233));
        var_24 = ((((-1864801160 ? ((var_16 ? 82 : var_7)) : var_5)) + ((var_10 ? 1864801176 : 11343))));
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        arr_11 [i_3] = (((((var_6 ? 363000082 : 1172871449))) ? var_7 : ((var_13 ? 1188710628 : var_3))));
        var_25 = (min(var_25, var_4));
        arr_12 [i_3 - 1] [i_3 - 1] = ((-1864801170 ? 5108366599234969447 : 112));
        var_26 = (((var_13 / 319869172) * ((var_17 ? 1368961276 : 139))));
    }
    var_27 = -540878601;
    #pragma endscop
}
