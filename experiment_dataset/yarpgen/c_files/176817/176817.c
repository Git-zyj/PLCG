/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((max((-124 & var_12), var_3)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((~((((!(arr_3 [i_0] [i_1]))))))))));
                    var_18 += ((-((-(arr_0 [i_1] [i_0 - 1])))));
                    var_19 = (max(var_19, ((min(18446744073709551596, (((+(((-1 + 9223372036854775807) >> (18446744073709551596 - 18446744073709551572)))))))))));
                    var_20 ^= ((((min(15, var_12))) ^ (((arr_5 [i_1] [i_1] [i_2] [i_2]) ? (arr_4 [7] [7] [i_2]) : (arr_5 [i_1] [i_1] [i_2] [i_2])))));
                    var_21 = (arr_2 [i_1] [i_0 - 2]);
                }
            }
        }
    }
    var_22 = 0;
    var_23 = ((-9 ^ ((~((var_0 ? var_7 : 24))))));
    var_24 = var_11;
    #pragma endscop
}
