/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(((max(var_10, 12)) + 0))));

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_16 = ((var_10 ? (max((((arr_0 [i_0]) << 0)), (var_5 == var_1))) : (!var_0)));
            arr_5 [i_0] = (min((max((min((arr_1 [i_0]), 127)), ((2614635896 >> (220 - 197))))), ((((arr_0 [i_0]) > (min((arr_4 [i_1] [i_0]), 2614635919)))))));
            arr_6 [i_0] = (max(((18446744073709551615 ? (112 * 65524) : (arr_4 [i_0] [0]))), (!var_14)));
            var_17 *= var_3;
        }
        var_18 = (!var_11);
        arr_7 [i_0] = (max((((-((91 ? (arr_3 [i_0]) : (arr_1 [i_0])))))), (max(((min((arr_0 [i_0]), (arr_1 [i_0])))), (min((arr_2 [i_0] [i_0]), 1))))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_10 [i_2] = (min(((~((48 ? (arr_8 [i_2]) : 112)))), (max(((max(242, 1))), (1 / 106)))));
        var_19 = (min(var_19, 1));
        arr_11 [12] [12] = ((max(102, 5704009960477017107)) | (arr_8 [i_2]));
        arr_12 [i_2] = (((!1536) < (((!(arr_9 [i_2] [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_20 [i_3] = (((((arr_18 [i_3] [i_5]) >> (((arr_15 [i_3]) - 4032185705)))) << (((max((((var_11 && (arr_16 [i_3] [i_4])))), ((0 ? (arr_15 [i_5]) : var_5)))) - 4294959791))));
                    var_20 = ((max((max(1433227361, 52)), (arr_8 [i_4]))) > ((((!(!1))))));
                    var_21 = (((((((min(23795, 23131))) ? -5 : (((((arr_0 [i_4]) && 2047))))))) ? (arr_2 [i_5] [i_4]) : (((max(var_5, (!var_11)))))));
                }
            }
        }
        var_22 = (((((((arr_8 [i_3]) | (arr_9 [i_3] [i_3])))) ? (((!(arr_8 [i_3])))) : ((min(var_11, var_1))))));

        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            var_23 = (arr_16 [i_3] [i_6]);
            var_24 = -27680;
            var_25 = ((var_1 ? ((((max(1, (arr_18 [i_6 + 2] [i_3])))) ? (max(4057269993501780273, 156)) : 14389474080207771343)) : ((((arr_16 [i_6 + 2] [i_6 + 2]) ? ((2147483520 ? 2481 : (arr_19 [i_3] [i_6 - 2] [i_3]))) : (arr_21 [i_6 + 2] [i_6 + 2] [i_6]))))));
        }
        var_26 = (max(var_26, var_13));
    }
    #pragma endscop
}
