/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_0] = (((~(76 | -77))));
            var_18 = (((arr_5 [0] [i_1]) != (min(var_7, (arr_5 [i_0] [i_1])))));
            var_19 = ((1311783470 ? (((max((!var_2), (max(31, var_9)))))) : ((((arr_4 [i_0]) ? 2983183836 : 4149449903)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_20 = -3128085697;
                        arr_11 [i_1] = 1738536391;
                        var_21 *= (((~(arr_7 [i_2] [i_2] [i_2] [i_2]))));
                        var_22 *= ((!(arr_5 [i_0] [i_0])));
                    }
                }
            }
            arr_12 [i_0] = var_8;
        }
        var_23 = (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                {
                    var_24 = var_17;
                    var_25 = (min(var_25, ((((arr_15 [i_0] [i_0] [i_0]) * (min(var_8, ((64259 ? 1738536391 : var_4)))))))));
                }
            }
        }
    }
    var_26 = ((+((var_17 ? (var_14 / 1268) : var_8))));
    var_27 = -var_10;
    var_28 = 1;
    #pragma endscop
}
