/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 = (max(var_10, ((((arr_1 [i_0]) ? (!var_7) : ((~(arr_0 [i_0]))))))));
        var_11 = 3758096384;
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_12 = (~76);
        var_13 += (!-5698272220235990535);
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_14 = (min(var_14, (((!(!11239))))));
            arr_11 [i_2] = (min((min((arr_5 [i_2]), (arr_5 [i_3]))), (((((arr_8 [i_3] [i_3] [i_3]) ? var_2 : (arr_10 [i_2])))))));
            arr_12 [1] [2] &= ((((13644 ? -6617997766472927750 : -1157642141874890646)) | -1593309029116113432));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_15 *= (arr_14 [10]);

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                arr_18 [13] [i_4] [i_2] [i_5] = ((((max(1593309029116113431, 102))) ? ((1593309029116113432 ? 1593309029116113432 : -1593309029116113432)) : (((arr_6 [i_5]) ? (max(1177623785, var_2)) : (var_7 / var_5)))));
                arr_19 [i_2] [i_2] [i_2] = (max(((max((arr_15 [i_2] [i_4] [i_2]), (arr_16 [i_2] [i_4] [i_5] [i_5])))), ((~(arr_14 [i_2])))));
            }
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 21;i_6 += 1)
        {
            var_16 = (!156);
            var_17 = (min(var_17, (arr_16 [i_6 + 3] [i_6 - 1] [i_6 - 3] [i_6 - 2])));
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            var_18 = (min(var_18, ((min(((((((~(arr_5 [i_2])))) ? (((7271050064531844274 ? 50 : 1041795177))) : (min((arr_15 [i_2] [i_2] [12]), (arr_23 [i_2] [i_2] [i_7])))))), (((arr_6 [i_7]) ? (arr_9 [i_2] [i_2] [i_7]) : (arr_10 [i_2]))))))));

            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                var_19 &= ((-(min(152, 1513906220))));
                var_20 += max(((min(-1593309029116113459, -1593309029116113432))), (!43094));
                var_21 = var_5;
                var_22 += ((!(arr_22 [i_7] [i_7])));
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    arr_33 [i_2] [i_2] = (max(107, (max((max((arr_20 [i_9] [i_2] [i_9]), (arr_28 [i_2] [i_9] [i_10]))), (!55631)))));
                    arr_34 [i_10] [i_2] [i_2] [i_2] = (min((arr_5 [i_9]), (max(9904, (arr_23 [i_10] [i_9] [i_2])))));
                }
            }
        }
        var_23 = -186655848922351311;
        var_24 = ((((arr_27 [i_2] [i_2]) - 1177623779)));
    }
    var_25 = var_1;
    #pragma endscop
}
