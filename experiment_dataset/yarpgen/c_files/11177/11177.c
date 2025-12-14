/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (arr_3 [i_0] [i_1 - 1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [0] [0] [i_3] [16] = ((((((min((arr_5 [i_0] [i_0]), (arr_10 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1]))) == (((~(arr_0 [i_0] [i_3]))))))) >> (((max(122, -6173621961772591058)) - 97))));
                                var_17 = ((~(max((arr_1 [i_1 - 1]), -var_13))));
                            }
                        }
                    }
                }
                var_18 += (~((~(arr_13 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1 - 1]))));
            }
        }
    }
    var_19 = 123;
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            {

                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    var_21 = (max((min(134, 221)), 176));
                    var_22 = 3;
                    arr_26 [i_5] [i_5] [i_6] [i_5] = (arr_20 [i_5]);
                }
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    var_23 = (((-(arr_19 [i_5 - 1]))));
                    var_24 = (arr_21 [i_5]);
                    arr_29 [i_5 - 2] |= (min(((((arr_19 [i_5 + 1]) <= (arr_21 [18])))), (max(65535, (arr_20 [i_5 - 2])))));
                    var_25 = (!((max((min(var_13, -32760)), var_11))));
                }
                var_26 = (arr_19 [i_5 + 1]);
            }
        }
    }
    #pragma endscop
}
