/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (arr_1 [i_0] [i_0]);
                    var_17 ^= (!var_1);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 ^= (min(((((arr_6 [i_2] [i_2 + 1] [i_2 - 1]) <= (arr_6 [i_2] [i_2 + 1] [i_2 - 1])))), (-9223372036854775807 - 1)));
                                arr_13 [6] [i_4] = 15;
                            }
                        }
                    }
                    var_19 = 203;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_20 = (min(12981, (((arr_14 [i_5] [i_5]) ? (arr_14 [i_5] [i_5]) : -4072223004360978852))));
        var_21 += ((((((min(68719476735, 14748182850786159670)) << (var_7 + 7132470014345953460)))) || ((((-8186826747285949133 <= 8186826747285949148) * ((-(-32767 - 1))))))));
        var_22 = 94;
    }
    var_23 = 5413;

    for (int i_6 = 2; i_6 < 12;i_6 += 1)
    {
        arr_19 [i_6] = ((((((var_2 + (arr_16 [i_6]))))) >= ((((((arr_16 [i_6]) ? (arr_16 [i_6]) : var_11))) ? (((min(var_1, (arr_16 [i_6]))))) : 9194027781231010531))));
        arr_20 [i_6] [i_6] = (i_6 % 2 == 0) ? ((((((max((arr_18 [i_6 + 2] [i_6]), 1)) >> (((arr_16 [i_6]) - 59587)))) | (((32 ? 1988780634 : 1)))))) : ((((((max((arr_18 [i_6 + 2] [i_6]), 1)) >> (((((arr_16 [i_6]) - 59587)) + 57707)))) | (((32 ? 1988780634 : 1))))));
    }
    #pragma endscop
}
