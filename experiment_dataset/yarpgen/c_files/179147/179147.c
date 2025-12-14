/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 |= ((~((~(arr_1 [i_0])))));
        arr_2 [i_0] = (!var_3);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_19 = (max((((((arr_0 [1] [1]) / 288160007407534080)) + (((~(arr_1 [i_1])))))), var_13));
        arr_5 [i_1] = (arr_3 [i_1] [i_1]);
        var_20 = (((max(18158584066302017535, 18158584066302017535)) * (!36)));
    }
    for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_21 += (176629817385067422 ^ 288160007407534082);
        arr_10 [i_2] [i_2] = 255;
    }
    for (int i_3 = 3; i_3 < 12;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_15 [i_3] [6] [i_3] |= (min((!15545962758645124705), ((((max(10, var_13))) % (arr_12 [i_3 + 2] [11])))));

            for (int i_5 = 4; i_5 < 13;i_5 += 1)
            {
                arr_18 [i_4] [i_5] = (arr_3 [i_4] [i_4]);
                var_22 = (max(var_22, (arr_12 [i_4] [i_4])));
                var_23 = ((var_13 ? ((max(var_17, var_14))) : (((10 ? 205 : 218)))));
                arr_19 [i_3] [i_4] &= var_2;
            }
        }
        var_24 *= ((!((((arr_4 [i_3 - 1]) ? (((arr_16 [i_3]) & (arr_8 [2]))) : (arr_14 [i_3 - 2]))))));
        var_25 = 288160007407534082;
    }
    var_26 = (max(var_26, (((-(((min(var_2, -1)))))))));
    #pragma endscop
}
