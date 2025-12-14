/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((((((9223372036854775807 ? -7 : 131)) / -34)) / (((((13 ? 1 : 0))))))))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_12 = (min(var_12, (((arr_0 [i_0 + 2] [i_0 + 2]) - (min((arr_0 [i_0 - 1] [i_0 + 2]), -5545925612133305570))))));
        var_13 = (--21);

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_14 = arr_2 [i_1];
            arr_8 [i_0 + 2] |= arr_7 [i_0] [i_0] [i_0];
            var_15 -= 23;
            var_16 += (arr_5 [i_0] [i_0] [i_1]);
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_17 = (min(var_17, (((~(arr_2 [i_0 + 2]))))));
            arr_12 [i_2] = (max((min(((((arr_10 [i_0] [i_0] [i_2]) ? var_5 : 197))), (((arr_1 [i_0]) ? -6322765844075076318 : var_1)))), (((arr_4 [i_0 + 2] [i_0 + 1]) / (arr_4 [i_0 - 1] [i_0 + 2])))));
            arr_13 [1] [i_0] |= ((((((arr_7 [i_0 + 2] [i_0 - 1] [i_0 + 2]) >> (((arr_7 [i_0 - 1] [i_0 + 2] [i_0 + 1]) - 6283317985208744429))))) ? (!44) : (((!(arr_7 [i_0 + 2] [i_0 + 2] [i_0 + 1]))))));
        }
        var_18 = (min(var_18, (arr_7 [i_0] [i_0] [i_0])));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_19 -= var_4;
        arr_16 [i_3] = (~1);
        arr_17 [i_3] = ((226 ? (((!4332) ? (max(1079237756701018787, 1)) : 220)) : -1265746310521419203));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_20 = (max(var_20, ((((arr_15 [i_4 - 1]) ? 27 : ((var_5 ? 1 : 13)))))));
        var_21 |= 2679089974;
        arr_22 [12] = (-var_0 - 1);
        arr_23 [i_4] [i_4] = 225;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        var_22 = (min(var_22, var_9));
                        var_23 = (var_4 / -27);
                    }
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
    {
        arr_35 [i_8] = 27;
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_24 ^= ((((min((arr_39 [i_8 - 1] [1] [i_9 - 1]), (arr_39 [i_8 - 1] [0] [i_9 + 2])))) ? (~862986646472045148) : -1079237756701018787));
                    var_25 = (min(var_25, ((((-1 + -26265) ? (arr_29 [i_8] [18] [i_10]) : (min((max(1045991180007376230, 30)), ((((arr_40 [i_8] [i_8] [i_8] [i_8]) ? (arr_15 [8]) : (arr_30 [i_10] [10] [10] [i_8])))))))))));
                }
            }
        }
    }
    var_26 &= 1;
    var_27 = (max(var_27, (((-5311816344426927032 ? -32236 : 1332844866)))));
    #pragma endscop
}
