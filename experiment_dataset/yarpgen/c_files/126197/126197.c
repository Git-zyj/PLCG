/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = 109;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((!(arr_0 [i_0])));

        for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
        {
            var_13 = (max(var_13, ((+(((arr_4 [i_1 - 1] [i_1 + 2] [i_1 + 2]) ? (arr_3 [i_1 - 1] [i_1 + 2] [i_1 + 2]) : (arr_3 [i_1 - 1] [i_1 + 2] [i_1 + 2])))))));
            var_14 = ((+(((arr_3 [6] [i_1 + 1] [i_1 + 2]) ^ (arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 2])))));
        }
        for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_15 -= var_9;
            arr_8 [i_2] [i_0] [i_2] = (min(((max(254, 84))), ((17736428591283658685 ? (11886 || var_3) : ((12 ? 12 : -6756308922281002300))))));
            var_16 = (max(var_16, ((1 ? 640341896 : 2819))));
        }
        arr_9 [12] |= (max((min(2096152219, -2820)), (arr_0 [16])));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_17 = (arr_0 [i_3]);
        var_18 *= (min(7846780504786348016, 31));
        arr_12 [i_3] = ((+(((arr_5 [i_3] [i_3] [i_3]) ? (arr_5 [i_3] [1] [i_3]) : (arr_4 [i_3] [i_3] [i_3])))));
        arr_13 [i_3] [i_3] = (min((1 != 150), (max((arr_6 [i_3]), (arr_6 [i_3])))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                {
                    var_19 *= (min(((min((((1 ? 1 : 2829))), (arr_11 [18])))), ((-(min(var_8, 1))))));
                    arr_19 [i_4] [i_4] = (!147);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (1 < 12483)));
        arr_22 [16] = ((-2630325406 ? -12495 : (~18446744073709551604)));
        var_21 = (max(var_21, (!var_6)));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {
        arr_25 [0] = 147;
        var_22 = (max(var_22, ((((((1367001231160865202 ? -19654 : (max(var_10, 12479))))) ? (arr_15 [i_7]) : 7810952163470347094)))));
    }
    #pragma endscop
}
