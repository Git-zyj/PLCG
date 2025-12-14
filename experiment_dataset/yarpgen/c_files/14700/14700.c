/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = (min(12690059712029402737, (((!(arr_0 [i_0] [i_0]))))));
        var_14 ^= 4294967285;

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_15 ^= 18446744073709551592;
            arr_4 [20] [i_1] &= -109;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((((max(var_5, var_7))) | (((((max(1, var_1)))) & (((arr_6 [i_0] [i_0] [i_0]) ? var_9 : (-2147483647 - 1)))))));
                        var_16 *= ((0 ? (((((var_5 ? var_2 : var_10))) ? (~25) : (arr_2 [i_1]))) : -64));
                        arr_10 [i_0] [20] = (max((max(32766, 1682449781)), (max(-var_0, (arr_6 [i_0] [i_0] [11])))));
                        var_17 &= ((~(min((min(24, -19677)), (12696 | 4)))));
                        var_18 = (((((max(var_3, (arr_2 [i_0]))))) ? (arr_0 [0] [i_2]) : ((max(var_4, (min((arr_1 [i_3]), (arr_3 [i_3] [i_1] [i_3]))))))));
                    }
                }
            }
        }
        var_19 *= (((((1792580070 ? 32743 : 33748))) << (min(((var_7 ? var_3 : 12701)), ((1 ? (arr_7 [2] [i_0] [14] [i_0] [i_0] [i_0]) : 17775))))));
    }
    var_20 = 85;
    #pragma endscop
}
