/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 += (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (((var_0 | (arr_2 [i_2]))));
                    var_19 = ((!((min((arr_1 [i_0]), -16143)))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_10 [i_3] &= ((((3712850395 ? 1 : 3712850395)) >= var_14));
        arr_11 [i_3] |= ((-587499852 ? 0 : -9223372036854775796));
        arr_12 [i_3] = (min((((!(arr_9 [i_3])))), (arr_9 [i_3])));
    }
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        var_20 = (max(var_20, ((min(((-(arr_13 [i_4 + 1]))), ((var_17 ? (arr_9 [i_4 + 1]) : ((9223372036854775796 ? 0 : (arr_8 [i_4]))))))))));
        var_21 = (((((max(1, 10539))) || ((32763 && (arr_8 [i_4 - 1]))))));
    }
    var_22 = (min(var_17, ((var_12 >> (var_6 + 8277837543116290986)))));
    #pragma endscop
}
