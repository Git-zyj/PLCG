/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = (max((((min(15768, 3701409526646251477)))), var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (arr_2 [i_0]);
        arr_5 [i_0] [5] = (((var_18 ^ var_3) ? (arr_0 [i_0] [i_0]) : 1000554206));
        var_21 = var_7;
        var_22 &= (((((var_11 == (arr_2 [i_0])))) == (arr_2 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_23 = (min(var_23, (arr_8 [i_1 - 3] [i_1 - 3])));
                    arr_11 [i_1] [i_1] [i_2] = ((var_12 ? (!1) : (arr_7 [i_1 + 1])));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = ((+((var_18 * ((((arr_9 [i_3] [7] [i_3] [i_3]) == (arr_0 [i_3] [i_3]))))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    arr_20 [i_3] [i_3] [i_5] = ((!(arr_7 [i_3])));
                    var_24 = (min(var_24, (((-5942 ? 18446744073709551615 : -15769)))));
                    arr_21 [i_3] [6] [i_5] |= (min((min(var_7, (((arr_9 [i_5] [i_5] [i_4] [i_3]) ? (arr_3 [i_3]) : (arr_18 [12] [12]))))), (!0)));
                    var_25 = (min(1172499463, 82));
                    arr_22 [i_3] = (min((max((((arr_1 [i_3] [i_4]) ? var_6 : (arr_13 [i_4]))), -5141710493855231273)), ((((arr_12 [i_3] [i_3]) ^ (arr_2 [i_3]))))));
                }
            }
        }
    }
    var_26 |= (-23219 ^ 6792);
    #pragma endscop
}
