/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_1] = (min(1008456843265897657, 3288));
                    arr_7 [i_0] [i_1] [i_2] [i_2] = (((!var_7) ? ((((arr_4 [i_1] [i_0 + 4]) || (arr_4 [2] [i_0 + 1])))) : ((((arr_4 [i_0] [i_0]) < var_8)))));
                }
            }
        }
    }
    var_10 = ((((((var_1 ? 3288 : var_4))) && (((3269 ? var_3 : var_4))))) ? var_7 : ((((!(var_3 || var_9))))));

    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_11 |= (((arr_11 [i_3 + 1]) ? (((8784234684557758509 < (arr_3 [8] [i_4] [i_4])))) : (~var_4)));
            var_12 = (min(var_12, (arr_0 [i_3 - 1] [i_3 - 1])));
            arr_14 [i_4] |= var_7;
        }
        arr_15 [i_3] = (min(((((13489497104535763291 / var_9) ? (arr_8 [8]) : (arr_13 [i_3] [i_3 - 1])))), ((((min(var_9, (arr_1 [i_3])))) ? var_0 : (arr_9 [i_3 + 1])))));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_13 = ((((((((-19772 + 2147483647) << (var_8 - 9820662773589072285)))) ? (((arr_18 [i_5]) ? var_4 : 7589)) : 32767))) ? 7582 : (((7580 - 3576112228) ? ((35544 ? var_5 : var_8)) : -1437)));
        var_14 = (max(((min((max((arr_17 [i_5]), (arr_16 [i_5]))), var_1))), ((17258676721079038013 % (var_8 <= -32008)))));
        arr_19 [i_5] = 4868005553154735692;
        var_15 = (max(var_15, (((min((arr_17 [17]), (~227)))))));
        arr_20 [i_5] [i_5] &= ((-(((arr_18 [i_5]) ? (arr_18 [i_5]) : (arr_18 [i_5])))));
    }
    #pragma endscop
}
