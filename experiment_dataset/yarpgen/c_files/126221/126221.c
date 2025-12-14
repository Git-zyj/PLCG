/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 += (((arr_4 [i_1]) ? ((((((arr_1 [i_1]) ? (arr_4 [i_0]) : 8664894676989660827))))) : (arr_2 [i_0])));
                arr_5 [2] = 9781849396719890799;

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_19 = (min(var_19, ((min(var_13, ((((max(var_7, var_13))) ? ((9781849396719890772 ? (arr_0 [i_0]) : 18343032231576221103)) : (arr_4 [2]))))))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_3] [i_2] [i_0] = (arr_1 [i_0]);
                        var_20 &= (((max((min(9781849396719890806, (arr_9 [i_3] [i_1] [i_3] [i_3]))), (arr_0 [i_0])))) ? -var_17 : (((var_17 + 2147483647) >> (21830 - 21820))));
                        arr_12 [1] = ((var_17 * (max((arr_4 [i_3]), (arr_10 [i_2] [i_1])))));
                    }
                    arr_13 [i_2] [i_1] [i_1] [i_0] = (max(0, (min(-63, -21811))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_21 = (min(var_21, ((((arr_6 [i_0] [i_0] [10]) != var_13)))));
                        var_22 = (min(var_22, (((19 ? var_3 : 127)))));
                    }
                    arr_17 [i_0] [i_0] [i_2] [2] = ((((!(arr_6 [i_0] [i_1] [i_2]))) && ((((arr_4 [i_0]) ? var_9 : (arr_16 [i_0] [i_1]))))));
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    arr_20 [i_5] = (((arr_9 [i_0] [i_1] [i_5] [i_5]) ? (arr_16 [0] [i_5]) : (((var_14 ? 18343032231576221075 : 167)))));
                    var_23 = 7934223205217509639;
                    var_24 += var_5;
                }
            }
        }
    }
    var_25 += var_10;
    var_26 = var_11;
    #pragma endscop
}
