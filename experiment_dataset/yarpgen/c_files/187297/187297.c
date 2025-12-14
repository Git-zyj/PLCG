/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (max(var_15, (((((((9223372036854775808 ? 9223372036854775791 : 233)) & (((arr_1 [i_0] [i_0]) >> (arr_0 [i_0] [i_0]))))) << ((((~((9223372036854775801 ? (arr_0 [i_0] [i_0]) : var_9)))) + 23)))))));
        arr_4 [i_0] = ((((arr_0 [i_0] [i_0]) << (-1866586761 + 1866586773))));
    }
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                {
                    var_16 = ((((((max(2599017595, 9223372036854775808)) <= ((((var_4 > (arr_7 [i_2 + 1])))))))) >= (~1)));
                    arr_12 [i_2] [3] [i_2] [8] = (((((!(arr_5 [i_2 + 1] [i_1 + 1])))) < (((!(((1695949683 ? 50 : var_5))))))));
                    arr_13 [i_2 + 1] [i_2] [i_2] = (min((((((0 ? var_6 : -117))) ? (min((arr_1 [i_1 - 2] [i_3 - 1]), 233)) : (((29360128 << (((arr_9 [i_1] [i_1] [i_1]) - 225))))))), ((min(33554431, 1)))));
                    var_17 ^= (min((((min(123, 4294967295)) == ((12323624 ? 1368623530 : var_3)))), ((((min(var_5, 31))) || ((min(754585442, (arr_6 [i_3]))))))));
                }
            }
        }
    }
    #pragma endscop
}
