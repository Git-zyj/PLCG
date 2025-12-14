/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((7168 ? 1073741823 : var_0)));
    var_16 = (max(var_16, (((((((var_1 ? var_2 : 18446744073709551611)) < var_0)) ? (min(-1, var_9)) : ((((~1861057866) ? ((var_13 ? var_5 : var_7)) : var_7))))))));
    var_17 -= 1;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = 112;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_18 -= ((((224 || (arr_0 [i_0]))) ? (((((arr_6 [i_0 - 1]) < (((((arr_2 [i_0]) >= (arr_6 [i_1]))))))))) : ((8241405139589498846 & ((((!(arr_2 [i_0])))))))));
            arr_7 [18] [i_1] [17] = min(31, 65024);
            arr_8 [12] = ((!(arr_6 [i_0 - 1])));
            var_19 = (((((35 ? 0 : 1126873767))) ? 113055510 : 221));
            arr_9 [i_0] [i_1] = ((-(arr_2 [i_0 - 2])));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_12 [i_0] = (((((0 >> ((((var_12 + (arr_11 [1] [1]))) - 12945826635791729129))))) ? ((((((arr_1 [i_2]) ? (arr_6 [i_0 - 2]) : var_7))))) : (max((((arr_1 [i_0]) * var_12)), ((max(65024, 8223334898459220294)))))));
            arr_13 [0] = ((((max(32752, -94))) ? (min(32, ((15685919833197242172 ? 7748010016822629539 : (arr_4 [i_0] [i_0] [i_2]))))) : -67108608));
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            arr_19 [i_3] [i_3] = (((+(max((arr_4 [10] [i_4] [i_4]), (arr_14 [i_4]))))));
            arr_20 [i_3] [i_3] = var_5;
            var_20 = (max(var_20, (((((min((arr_4 [i_4] [i_4 + 1] [i_3]), ((((arr_4 [14] [22] [22]) ? -13819 : var_14)))))) ? (((var_3 * var_3) ? (arr_17 [9] [14]) : (min(0, 62101)))) : 67108618)))));
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        var_21 = 205;
                        var_22 ^= var_13;
                        var_23 = (arr_21 [i_3]);
                    }
                }
            }
        }
        var_24 = (min(var_24, ((((((var_9 == -1314443421) ? ((((arr_24 [i_3] [3] [i_3] [11]) || (arr_22 [5] [i_3] [i_3])))) : (~1861057863))) == (arr_2 [1]))))));
        arr_28 [7] [5] = ((!(((var_12 ? ((((arr_10 [24]) ? 1 : (arr_23 [i_3] [i_3])))) : (arr_27 [i_3] [i_3] [i_3] [i_3]))))));
        var_25 = ((~(((var_0 | 14336) ? var_1 : ((9223372036854775807 ? -113055511 : 0))))));
    }
    for (int i_8 = 1; i_8 < 19;i_8 += 1)
    {
        var_26 += (min((((~((max((arr_29 [8] [1]), (arr_29 [0] [i_8 - 1]))))))), (arr_5 [2] [19])));
        var_27 |= (((arr_11 [i_8] [i_8]) > (max((min(127, 0)), (arr_10 [6])))));
    }
    #pragma endscop
}
