/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((((max((var_18 != var_5), (max(-2014938129, var_11))))) > (((var_10 / 65535) ? (((var_5 ? var_7 : 1))) : 4294967295)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    arr_9 [i_1] [i_1] = (((((var_1 ^ ((var_15 ? (arr_2 [12] [i_0] [i_2]) : (arr_1 [2] [2])))))) ? (((min((((var_2 > (arr_0 [i_0])))), (max((arr_0 [i_0]), var_3)))))) : (min(-var_2, (var_0 && var_10)))));
                    arr_10 [1] [7] [i_2] [6] = ((((7526028772498378051 ? (arr_2 [i_0] [i_0] [i_0]) : (((2014938105 << (3 - 3)))))) < (arr_1 [i_0] [i_0])));
                    var_20 = ((!(((((~(arr_7 [12] [12] [12])))) || (arr_1 [i_1] [i_2 + 1])))));
                    var_21 = 61440;
                }
                var_22 ^= (arr_7 [i_0] [i_0] [i_0]);
                var_23 -= (min((((((62358 >> (var_0 - 85)))) ? ((var_9 * (arr_0 [1]))) : (max((arr_4 [i_0] [1]), 67)))), ((((arr_1 [i_0] [i_1]) | (1 & var_7))))));
            }
        }
    }
    var_24 *= ((((max((var_3 != var_6), var_3))) > ((((var_7 ? 127 : var_14)) / ((max(var_17, var_16)))))));
    var_25 = 2465628859522459194;
    var_26 = (min((((((var_3 ? var_16 : var_2))) ? var_17 : ((min(1, 78))))), ((-(var_12 < var_3)))));
    #pragma endscop
}
