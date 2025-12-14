/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (0 != 7094048036653056516);

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        var_14 -= ((-((+(max((arr_3 [i_3]), (arr_2 [i_3])))))));

                        for (int i_4 = 4; i_4 < 7;i_4 += 1)
                        {
                            arr_14 [i_0 - 1] [i_1 - 1] [i_0] [i_1] |= var_9;
                            var_15 = 174;
                            var_16 = (min(var_16, (((var_0 > (((~(arr_5 [2])))))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 8;i_5 += 1)
                        {
                            var_17 = (min(var_17, var_4));
                            var_18 = (max(var_18, ((((arr_15 [i_0]) == (arr_15 [i_0]))))));
                            var_19 |= (((arr_15 [i_0]) ? ((~(arr_3 [i_0]))) : 1));
                        }
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            var_20 = (max(var_20, ((~(((((((arr_1 [i_0]) + 2147483647)) << (var_11 - 5163808364499064891))) << (241 - 241)))))));
                            arr_21 [i_0 - 2] [i_0] [i_0 + 1] [i_1] [i_2] [1] [i_0] &= (3552571193528610102 != -7380925142514703681);
                            var_21 *= 7784316147285048465;
                        }
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_22 = (max(var_22, ((((max(8830, var_5))) ? ((max(var_8, var_8))) : (arr_4 [i_0] [i_1 - 1] [i_2])))));
                        var_23 *= ((((max((((arr_2 [i_0 + 1]) | (arr_6 [i_0 + 1] [i_0 + 1] [i_2 - 4]))), ((((arr_19 [i_0] [i_1] [i_2 - 3] [i_2] [i_2]) < (arr_8 [i_0 - 1] [i_0 + 1] [i_1 - 1] [i_2] [7]))))))) ? 805174766 : (((((2147483647 ? 2147483635 : 2034227004))) ? (arr_22 [i_2 - 3]) : 255))));
                        var_24 *= (min((~var_11), var_10));
                    }
                    var_25 = (min(var_25, (~39437)));
                }
            }
        }
        var_26 ^= 14330;
        arr_24 [i_0] &= arr_11 [i_0] [i_0 - 1] [i_0 - 1];
    }
    #pragma endscop
}
