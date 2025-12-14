/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0 - 1] = ((((((((var_13 | (arr_2 [i_0 + 1] [i_0 + 3])))) < (3082587720 / 2918303020)))) >= ((((135696531 + 17289543430653056359) != (var_7 != 4032))))));
        var_14 = (max(var_14, (((2016 + (((-64 - 31073) + 4762068522586594869)))))));
        arr_4 [i_0 + 1] = (((((((((arr_0 [i_0 + 2]) < (arr_1 [i_0 + 2])))) >= (var_5 || var_0)))) / ((((-8299182012837697006 ^ -3691909214070940901) >= (64 % var_1))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_15 = ((((var_9 | (arr_5 [i_1 + 1] [i_1 + 2]))) != (((682117167 >> (40365 - 40347))))));
        var_16 = (((2344710444384694404 - var_9) + ((var_1 - (arr_6 [i_1 - 1])))));
    }
    var_17 = (((1127606204 == 1537822318) << ((((var_2 | var_0) < (var_12 != var_2))))));
    var_18 = (min(var_18, ((((((101 / -6972412461811354637) >> (((var_5 ^ var_1) - 4121281527799889532)))) >> (((((var_9 * var_1) >> (17177772032 & var_7))) - 6376735937552925413)))))));
    var_19 = (((((((var_3 & 4035225266123964416) || (32640 < var_7))))) < (((var_8 != 7875778554338461106) ^ (-5816041639890828298 / var_11)))));
    var_20 = (((((((((var_0 + 9223372036854775807) >> (1165026221090227352 - 1165026221090227313)))) != (8387584 + 10425739459403287336)))) / ((((var_3 & var_4) || (var_8 % var_6))))));
    #pragma endscop
}
