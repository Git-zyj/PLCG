/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_0 - ((1892823910573682730 ? 65535 : 33554368))))) ? var_2 : ((((min(-2143779280, var_1))) ? ((60422 ? 5549527361086735770 : var_8)) : ((var_10 ? var_3 : -5549527361086735771))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1 + 2] [i_1 - 2] = ((((min((arr_9 [i_2] [13] [i_2]), (arr_9 [i_2] [i_1] [i_2])))) ? ((var_7 & (arr_9 [i_2] [i_1] [i_2]))) : (var_1 <= 5549527361086735771)));
                    var_14 += 1130521251;
                    var_15 += (min((arr_4 [i_0] [i_1 - 1]), (((arr_4 [6] [i_1 - 1]) / (arr_4 [1] [i_1 - 1])))));
                    var_16 *= var_12;
                    arr_11 [i_0] [i_0] [i_2] [i_0] = (((((arr_7 [i_0] [i_1] [i_2] [i_1]) + ((var_4 ? 13649115155150986016 : (arr_5 [7]))))) ^ (((-(((-5549527361086735792 + 9223372036854775807) >> (((arr_8 [i_0] [i_0]) + 467940111)))))))));
                }
            }
        }
        var_17 ^= var_11;
        var_18 = -5549527361086735770;
        var_19 = (min(var_19, ((min(var_10, (((((var_9 ? (arr_6 [i_0] [i_0]) : var_10))) ? ((var_4 ^ (arr_2 [i_0] [i_0]))) : (((arr_7 [i_0] [i_0] [i_0] [14]) + (arr_9 [1] [i_0] [i_0]))))))))));
    }
    var_20 = (min(var_20, (((~((~((var_3 ? var_3 : var_4)))))))));
    var_21 = (((((var_4 <= var_7) ? var_7 : var_9)) == ((((var_8 + 2147483647) >> var_5)))));
    #pragma endscop
}
