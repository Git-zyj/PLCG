/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 27554;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (max(var_19, (((~((50072 ? var_15 : var_5)))))));
        arr_2 [i_0] = 65522;

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            var_20 = (((arr_4 [i_1 + 2]) - (arr_4 [i_1 - 1])));
            arr_6 [i_0] [i_0] [5] = (!56);
        }
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_21 = (((max(13024855701100508918, 253)) % var_5));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_22 += 6241846869664871184;
            var_23 = 0;
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
        {
            arr_15 [i_2] [i_2] [i_4] = -3527021422221330792;
            arr_16 [i_2] [i_2] [i_2] = ((((max(192, (var_7 ^ 64)))) ? ((max((max(var_12, (arr_12 [i_2] [i_2] [i_2]))), ((var_3 ? 1031943785 : (-2147483647 - 1)))))) : var_11));
            var_24 = (((((95 - 5421888372609042698) * ((12 ? 3 : 6241846869664871182)))) >= (((var_10 >> 22) ^ ((16 ? -22 : (arr_10 [i_2])))))));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_25 = (min(((65535 ? (65530 % 26830) : (max((arr_9 [i_2] [i_5]), 242)))), ((((60 ^ 10967887313180523855) || (!var_1))))));
            arr_19 [i_2] = 13024855701100508918;
            arr_20 [i_2] [i_2] [i_2] = (max(6708609780832122688, -48358));
        }
        var_26 += (!3617397905507879127);
        var_27 = arr_18 [i_2] [i_2] [i_2];
    }
    var_28 = ((((((max(10967887313180523855, var_17))) ? -7359805451219963137 : ((17780010286311464513 ? var_11 : var_2)))) % (min((26315 | var_11), ((max(var_9, var_1)))))));
    var_29 = (((var_11 ? (var_17 * 666733787398087096) : (((18446744073709551608 ? 65535 : 254))))));
    #pragma endscop
}
