/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((var_13 != (min((-1641200110 / 2147483647), -var_3)))))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = var_4;
                    var_21 = ((!(((min(var_14, var_0))))));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = (!((32767 <= (arr_0 [i_0 + 3]))));
                }
            }
        }
        var_22 = var_18;
        arr_10 [i_0] = ((max((min(14852143965201303493, -105), var_0))));
        var_23 *= ((((max((~3883161696), (arr_5 [i_0 + 1])))) > ((((-1641200110 ? (arr_7 [i_0 - 1] [i_0] [i_0]) : var_15)) / (min((-9223372036854775807 - 1), 1192252924))))));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        var_24 = (max(var_24, ((((((arr_24 [i_4]) - (arr_24 [i_3]))) + (-2147483647 != 1192252941))))));
                        arr_25 [i_3] [i_3] [i_5] [i_5] [i_5] = ((+(min((arr_1 [i_5 - 2]), (~10342)))));
                        var_25 = (((((max((arr_2 [21] [i_4]), (arr_0 [i_3]))) | ((((arr_19 [2] [i_5] [i_4] [i_3]) ? (arr_8 [i_6] [i_5 + 3] [i_4]) : (arr_18 [i_6] [i_5 + 1] [i_4] [i_3])))))) + ((max((arr_19 [i_3] [i_4] [i_5 - 2] [i_5 - 1]), ((~(-2147483647 - 1))))))));
                    }
                }
            }
        }
        var_26 = (arr_23 [i_3] [i_3] [i_3] [i_3]);
    }
    var_27 = (max(var_27, var_7));
    var_28 = var_14;
    #pragma endscop
}
