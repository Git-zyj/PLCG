/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (1 == -5366824402749364496);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_1] = ((124 >= (((arr_3 [i_1] [i_1]) ^ var_14))));
                    arr_8 [i_0] [i_1] = var_12;

                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_1] [6] = ((-114 ? 3561660255 : (((~(arr_2 [i_3 - 2]))))));
                        arr_13 [i_0] [i_1] [i_2] [i_3 - 2] [i_1] = (1945994073 != 3561660258);
                        arr_14 [3] [3] [i_1] [12] [i_2] [13] = (((((+(((-87 + 2147483647) >> (16366138776826586165 - 16366138776826586160)))))) ? (((~(arr_10 [i_0] [i_3 + 1] [8] [i_1])))) : (min(3686762750, (((25168 ? 125 : 235)))))));
                    }
                }
            }
        }
    }
    var_16 = (min(((((((max(var_8, var_12)))) >= (117 - 3561660282)))), ((~((229 ? 9711317652644657753 : 238))))));
    var_17 = var_13;
    #pragma endscop
}
