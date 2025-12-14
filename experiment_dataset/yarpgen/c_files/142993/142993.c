/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_3] [i_2] = (arr_1 [i_0]);
                            var_18 = 0;
                            arr_11 [i_1] [i_2] [i_2] [i_2] = (min((max((arr_1 [i_2 - 2]), var_0)), (((arr_7 [i_2 + 1]) ? (arr_7 [i_2 - 1]) : (arr_7 [i_2 + 2])))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_19 ^= ((-(min((arr_2 [1]), ((6590382781412859885 ? 5334711029755415082 : 1))))));

                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        var_20 = 6910446518138370041;
                        arr_18 [i_0] [i_5] [i_0] = ((~((-(arr_15 [4] [4] [i_5 - 1] [i_5 - 2])))));
                    }
                    arr_19 [i_0] [i_1] [i_1] [i_4] = -var_11;
                }

                for (int i_6 = 1; i_6 < 6;i_6 += 1)
                {
                    arr_23 [i_0] [i_6] [i_6] [i_0] = min(1, -2637887383910041895);

                    for (int i_7 = 1; i_7 < 8;i_7 += 1)
                    {
                        var_21 = (min(var_21, (arr_2 [i_0])));
                        arr_26 [i_0] |= ((((((arr_16 [i_0]) < (arr_16 [i_0])))) / (arr_16 [i_0])));
                    }
                }
                var_22 = ((-6278 ? 6910446518138370066 : var_7));
            }
        }
    }
    var_23 = var_1;
    var_24 = var_2;
    #pragma endscop
}
