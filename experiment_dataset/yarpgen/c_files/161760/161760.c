/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((-var_5 ? var_11 : var_9))) ? ((~(!var_13))) : ((min(65535, 0)))));
    var_18 = (max(((((((2 ? 31474 : 172))) ? ((min(var_6, 65535))) : ((8262460132290010978 ? 65528 : 59))))), 4204080304));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_9 [i_0] [i_2] [i_0] = (~var_8);
                    var_19 = (max(var_19, var_0));
                    arr_10 [i_2] = (min((((!(arr_1 [i_1])))), (min((arr_7 [i_0] [i_0] [i_1] [i_2]), var_11))));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_4] = ((~(1 == var_8)));
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((-(!4445730799314478964)));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_20 = (min(var_20, ((((((-18962 ? 1 : (arr_4 [i_0 - 1] [i_0 - 1])))) == 8491140942642034345)))));
                        arr_20 [i_1] [i_1] [i_1] [i_1] = (((arr_5 [i_0 - 1] [i_5]) << (((~33538048) - 4261429233))));
                        var_21 = (arr_3 [i_0 - 1]);
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_22 = (((min((arr_13 [i_6] [i_1]), (max(0, (arr_22 [i_0] [i_0] [i_1] [i_3] [i_1] [i_6]))))) == (arr_6 [i_6] [i_0] [i_0])));
                        arr_24 [i_0] [i_1] [i_1] [i_0] = min(((((arr_21 [i_0] [i_1] [i_0] [i_3] [i_0]) > (arr_18 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))), (((3447396811 >> 0) >> 3)));
                    }
                    arr_25 [i_1] [i_1] [i_1] [i_1] = (4445730799314478964 && 7);
                }
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    arr_28 [i_1] [i_1] [i_7] = ((var_12 ? (((arr_2 [i_7 - 1]) ? (arr_2 [i_7 - 1]) : (arr_2 [i_7 + 1]))) : (((arr_2 [i_7 + 1]) / 8))));
                    var_23 += (arr_8 [i_1]);
                }
                arr_29 [i_0] [i_0] = 1;
            }
        }
    }
    var_24 &= (!var_7);
    #pragma endscop
}
