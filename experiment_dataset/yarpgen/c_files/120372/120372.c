/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        var_10 = (max((((1288474955303869871 ? 1640067055 : 255))), (min(17158269118405681742, -1680793005505621691))));
        arr_4 [i_0] [i_0] = (min((((14405075762983415178 ? (arr_2 [i_0 + 1]) : var_5))), ((var_9 / (arr_2 [i_0 + 1])))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_11 = (min((min(2052508141022005052, 251)), ((min((arr_2 [i_0]), 4294963200)))));
            arr_9 [i_0] = (((min(248, 18446744073709551615)) ^ ((((((4294967058 ? var_9 : var_5))) ? (arr_1 [i_0 + 1]) : 0)))));
            arr_10 [i_0] [i_0] [i_0] = 8414787883088975271;
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_12 = (((min((min(17158269118405681744, 1352090546)), 10033822717117390216)) == ((((255 >= (9223372036854775807 > 4294967040)))))));
        arr_14 [i_2] [i_2] = (((((arr_13 [i_2] [i_2]) ? 4294967295 : (2787155925 + var_7))) + ((((~16760832) ? (~243) : ((-1 ? 2920579698 : 4185456410)))))));
        var_13 = ((((((2356661143 + 16995446363127373339) ? (((1451297710582178280 && (arr_11 [i_2] [i_2])))) : 1451297710582178277))) <= (((((arr_13 [i_2] [i_2]) / (arr_12 [i_2] [10]))) * -4294967295))));
    }
    var_14 = (((var_0 + var_7) & var_4));
    #pragma endscop
}
