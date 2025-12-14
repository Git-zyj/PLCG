/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1965918804;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (+((((-32767 - 1) >= 109))));
        var_15 = 1;
        arr_3 [i_0] [i_0] = var_3;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = var_6;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_16 = ((-22575656 * (min(8, 146))));
                    var_17 -= ((254 ? ((((arr_4 [i_2 - 2] [i_2 + 3]) > (arr_4 [i_2 - 2] [i_2 + 3])))) : ((var_10 ? var_10 : (98 + 109)))));
                }
            }
        }
        var_18 = (max(var_18, (((var_1 + (arr_4 [i_1] [i_1]))))));
        var_19 = (min(var_19, ((((((((-18 ? -22412 : var_6))) != (min(-2124629739, 0)))) ? (min((((-898856608 ? 255 : var_10))), (((arr_8 [i_1]) + (arr_9 [i_1] [i_1] [i_1]))))) : (((min((var_0 && var_3), var_7)))))))));
    }
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        var_20 = (max(var_20, ((min((max(1, 7801112851172196099)), (109 & 30))))));
        arr_15 [i_4] [i_4] = max(var_2, var_0);
        var_21 = ((var_4 || (!var_6)));
        var_22 &= (11 % -898856608);
        var_23 = (min(var_23, ((((min(-2147483647, var_1)) != ((var_9 ? var_11 : var_11)))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_19 [14] = ((var_4 && (arr_18 [i_5])));
        var_24 = (min(var_24, ((((54136890 & 7918147285554081426) ? var_7 : var_11)))));
    }

    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 2; i_7 < 23;i_7 += 1)
        {
            var_25 *= (!7200606227911086193);
            var_26 = (max(var_26, (((!(arr_25 [i_6] [i_7 - 2]))))));
            arr_27 [i_7] = 11;
        }
        var_27 += (12 / var_12);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_31 [i_8] [i_8] = (arr_4 [i_8] [i_8]);
        var_28 = var_6;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_29 = (1 && 1073741823);
        var_30 = (((arr_20 [i_9]) ? 3489776413950669815 : (arr_18 [i_9])));
    }
    for (int i_10 = 2; i_10 < 20;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            arr_39 [i_10] = var_3;
            arr_40 [i_10 - 2] = (((0 - ((min(var_1, var_12))))));
            var_31 = var_2;

            for (int i_12 = 1; i_12 < 20;i_12 += 1)
            {
                arr_43 [i_12] [i_12] [14] = ((((((var_1 ? 77 : 49373))) && (arr_26 [i_12 - 1] [i_11] [i_10]))));
                arr_44 [2] [i_11] [i_12] [18] = (((247 ? 239 : 65)));
            }
        }
        var_32 = (max(var_32, ((((arr_34 [i_10] [i_10 - 1]) ? (56156 - -27) : (arr_18 [i_10]))))));
    }
    var_33 = 110;
    #pragma endscop
}
