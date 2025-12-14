/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_4 ? ((-1 ? var_6 : var_4)) : (((1747665378 ? (-127 - 1) : var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((((!31296) || (arr_5 [i_0] [i_0])))))));
                                var_17 = (min(((((max(127, (arr_8 [i_4] [i_3 + 3] [i_2] [9] [1])))) ? ((~(arr_9 [i_3 - 1]))) : ((-(arr_7 [i_4] [0] [i_2] [0]))))), (-127 - 1)));
                                arr_12 [i_1 - 1] [7] = (((((min(-1655052761, 1)))) > (((((arr_6 [i_0] [i_0]) ? 3675349656 : var_6)) / (~var_6)))));
                                arr_13 [i_0] [0] [i_0] [i_0] [i_0] = (((!(arr_3 [7]))));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1] = (((min(30064, -7743690361145900563))));
                var_18 += (((((((min(1679974970449593914, -1295566372))) ? (((arr_9 [i_1]) ? (arr_4 [i_0] [i_0]) : 0)) : (((var_8 ? 186 : 1)))))) && ((((var_14 == -121) / ((var_4 ? var_10 : (arr_4 [i_0] [8]))))))));
                var_19 = ((var_11 ? (((arr_8 [3] [0] [0] [i_0] [5]) ? var_5 : var_8)) : (((((79 ? 0 : 4294967295)))))));
            }
        }
    }
    var_20 = ((+(max((var_9 / 217), var_12))));
    #pragma endscop
}
