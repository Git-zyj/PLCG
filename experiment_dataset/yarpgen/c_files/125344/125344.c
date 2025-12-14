/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((-2050099456 + var_9) + (var_9 + var_0)))) % (((max(var_3, 12)) + (52728 & var_9)))));

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_11 ^= ((((((((arr_0 [i_0] [i_0]) <= 0))) + ((((arr_1 [i_0 - 4]) > -30323)))))) && (((((var_7 ? 2961923573 : (arr_1 [i_0]))) >> ((((arr_1 [i_0]) >= -1177553478)))))));
        arr_2 [i_0] = ((((((((var_2 ? 13668 : 2582922053027639338))) ? ((max(var_1, 56))) : ((~(arr_1 [i_0])))))) & ((((max((arr_0 [i_0] [i_0]), var_6))) ? ((((arr_1 [i_0]) - 9499))) : (((var_4 + 9223372036854775807) << (((var_1 + 8238) - 6))))))));
    }
    for (int i_1 = 4; i_1 < 9;i_1 += 1)
    {
        var_12 -= ((((((28356 ? (arr_4 [i_1]) : var_4)) & ((-10 ? var_9 : (arr_0 [i_1] [4]))))) != (min(((((-9223372036854775807 - 1) > var_8))), ((-529202663 ? (arr_0 [i_1 - 4] [i_1 - 4]) : -17))))));
        var_13 = (((max((((12420121592183585090 == (arr_3 [i_1])))), (((arr_3 [i_1]) / 1269298988)))) ^ (((((~(arr_5 [7])))) ? ((1261572845 ? var_3 : var_5)) : ((((!(arr_4 [i_1])))))))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    arr_10 [i_3] [i_2 + 1] [i_1] = (((max((20 > -59), (max(var_2, var_7)))) != (((var_9 < var_3) - ((var_8 ? var_4 : -70))))));
                    arr_11 [i_1] [i_2] [i_3] [i_3] = ((-1 <= ((((9007199254740991 < 59645) < (1 >= -9223372036854775805))))));
                }
            }
        }
        arr_12 [i_1 + 1] = (((-((313327807851046445 ? 10681737781198880029 : var_9)))) >> (((((min((arr_0 [17] [i_1]), (arr_5 [i_1]))) ^ ((82 ? 8288105792564743695 : -4010218916622654150)))) - 8288105792564745061)));
    }
    #pragma endscop
}
