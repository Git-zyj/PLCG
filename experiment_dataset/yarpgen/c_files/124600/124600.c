/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((((min((arr_0 [i_0]), (arr_0 [i_0])))) & (min((-1724807341 & 63417), (((arr_0 [19]) >> (var_3 + 91)))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = (max(var_14, ((min((((arr_3 [i_1] [i_0]) & (arr_3 [i_0] [i_1]))), var_1)))));
            var_15 ^= ((((((arr_1 [i_0]) ? ((min(62537, -32748))) : (arr_4 [i_0] [i_1])))) ? (((((-3820547585049495913 ? -89 : 32743)) & (arr_3 [i_0] [i_1])))) : (((~32743) | (min(0, -9223372036854775798))))));
            arr_5 [i_0] = ((var_2 * ((((max(8338, var_1))) & (!164)))));
            var_16 *= (min((((arr_0 [i_1]) ? (arr_0 [i_0]) : 23130)), (arr_0 [i_0])));
        }
    }
    var_17 = (max(var_17, (49886 + 17601)));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 8;i_4 += 1)
            {
                {
                    arr_14 [i_4] [i_2] [i_2] [i_2] = ((-9223372036854775805 ? ((max((arr_0 [15]), (((!(arr_10 [i_2] [i_3] [i_3] [i_4]))))))) : (((-(arr_11 [i_2]))))));
                    arr_15 [i_2] [i_3] [i_2] = (arr_11 [i_2]);
                    arr_16 [i_3] [8] [i_4] [i_3] &= var_3;
                }
            }
        }
    }
    #pragma endscop
}
