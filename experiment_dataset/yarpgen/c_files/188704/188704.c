/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((((max(((var_14 ? var_16 : -88)), (((var_15 ? 709254715176203648 : var_13)))))) ? (var_7 != -8669024424571028181) : ((-7066169904082774233 ? var_3 : ((var_5 ? 102 : -7066169904082774220)))))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_18 = ((540431955284459520 / ((min(var_1, 107)))));
            var_19 *= var_10;
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_20 = -3958564941418901446;
            var_21 = (min(var_21, ((max(((((arr_5 [i_0] [i_2 + 2]) || (arr_5 [i_0] [i_2 + 2])))), var_2)))));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_12 [i_0] = (var_14 + -1);
            var_22 = (((var_12 ^ var_5) < (arr_11 [i_0] [i_3])));
            var_23 += ((!(((((max(var_6, -57059018))) ? var_9 : var_3)))));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_24 = (max(var_24, (((21 * ((((!1735366516) ? (arr_11 [i_0] [3]) : var_9))))))));
            var_25 = (min(var_25, 57059017));
        }
        var_26 = ((((var_5 ? (min(var_15, -6153682700418820880)) : var_14)) >= ((((!(!10)))))));
        var_27 = ((11232685445074130182 ? ((11232685445074130152 ? -57059016 : -7066169904082774233)) : ((var_14 ? -7879340379831878071 : -1))));
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        var_28 += (arr_7 [i_5 - 1]);
        var_29 = 101;
        arr_19 [i_5] [i_5] = ((1581867062357351109 ? (((((arr_9 [i_5 + 2]) <= 1605297063642243233)))) : 11232685445074130182));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_30 = (((((-1605297063642243234 ? var_4 : var_5))) ? (((((arr_8 [i_6]) >= (-127 - 1))))) : ((58 ? var_6 : var_16))));
        var_31 *= (!31);
        arr_23 [i_6] = var_15;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_32 = (~118);
        var_33 ^= ((-1605297063642243240 ? (arr_8 [i_7]) : var_2));
    }
    #pragma endscop
}
