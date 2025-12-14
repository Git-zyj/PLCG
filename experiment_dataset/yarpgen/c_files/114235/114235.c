/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_17 *= var_2;
        var_18 = ((!((!(19401 && var_8)))));
        var_19 = ((65535 - (min(-1, (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = ((-(arr_3 [2])));
                    var_21 -= 1499021123;
                    var_22 &= ((-(((((6269135228996131175 ? 32767 : 102))) ? (arr_1 [i_1 - 2] [i_1 - 1]) : (((!(arr_5 [3]))))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_23 = (arr_9 [i_3]);
        var_24 = (min(var_24, (arr_8 [2] [i_3])));
        var_25 &= (((((min(-5694560922296943462, var_7)))) ? var_13 : (arr_9 [i_3])));
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 13;i_6 += 1)
                {
                    {
                        var_26 = var_13;
                        var_27 += min((min((arr_10 [i_6 + 3] [0] [i_4 - 2]), (arr_10 [i_6 + 1] [0] [i_4 - 2]))), (arr_10 [i_6 + 1] [2] [i_4 - 3]));

                        for (int i_7 = 3; i_7 < 13;i_7 += 1)
                        {
                            arr_21 [i_3] [i_3] [4] [i_3] [i_3] = (~((1 ? (min(114, 824633720832)) : (((64305 ? 65521 : (arr_7 [i_7 - 1])))))));
                            arr_22 [i_7 - 2] [i_3] [i_5] [i_3] [7] = (min((((((102 ? (arr_13 [i_3] [i_5]) : (arr_8 [i_3] [i_7])))) ? (((((arr_12 [i_3]) || var_2)))) : (((arr_16 [i_7] [i_4] [i_5] [i_7] [i_7]) ? (arr_19 [i_3] [i_3] [i_4 - 1] [i_5] [i_6 - 3] [i_7 + 1]) : var_12)))), (((((((-18 != (arr_10 [i_3] [i_3] [i_3]))))) <= ((46114 ? var_1 : 102)))))));
                            arr_23 [i_3] [i_3] [i_3] [i_4] = (arr_11 [i_5] [0] [i_3]);
                        }
                    }
                }
            }
        }
    }
    var_28 = (min(15237103363868755254, var_9));

    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        arr_26 [i_8] [i_8] = ((83 > (~var_16)));
        var_29 &= (arr_20 [i_8] [13] [i_8] [i_8] [i_8]);
    }
    var_30 = min((((var_10 - (var_16 >= var_16)))), var_5);
    #pragma endscop
}
