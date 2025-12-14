/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (var_7 ^ var_1)));
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = (~var_4);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_18 = (min(var_18, ((((((((59 % 5105822309449744651) >= (min((arr_4 [16] [i_1]), -59)))))) - (max(34297, (arr_4 [i_0] [i_0]))))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_19 = var_11;
                        var_20 *= 7498266993663073555;
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 17150998411472724254;
                        var_21 = (min(var_21, (((10127015720043316579 | (arr_6 [i_0] [i_1]))))));
                        var_22 = 26;
                    }
                }
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_23 += (arr_3 [i_0] [i_1] [i_4]);
                        arr_18 [i_0] [15] [i_4] [5] = ((((-(arr_1 [i_1] [i_1]))) * (arr_16 [i_0] [i_0])));
                        var_24 = (arr_3 [i_0] [i_1] [i_5]);
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        arr_22 [i_0] [i_1] [i_4] [i_6] = (((((max(var_11, 3206449330285617215))) && ((((arr_14 [2] [2] [i_4] [i_6]) ? -2975 : var_7))))) ? (min(4223182773516116931, 10)) : 241);
                        var_25 = (min(var_25, ((((((-3206449330285617215 + (arr_4 [i_4] [i_6])))) ? (max((var_2 | var_15), 2974)) : (!15269122559905958782))))));
                        arr_23 [i_0] [i_1] [i_4] [i_6] = (max(((var_9 + ((var_6 ? var_3 : 0)))), ((max(1, var_9)))));
                    }
                    arr_24 [i_0] [i_1] [10] [i_4] = (max((((arr_0 [i_4]) ^ 15269122559905958774)), ((((arr_20 [1] [7] [i_4]) < -126)))));
                    var_26 ^= (arr_15 [i_4] [i_1] [i_0]);
                    var_27 = (max(3206449330285617215, ((max(32767, -3206449330285617216)))));
                }
                var_28 = (((!(arr_6 [i_0] [i_0]))));
            }
        }
    }
    #pragma endscop
}
