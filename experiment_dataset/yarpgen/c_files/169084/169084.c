/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] = (((4294966272 == 1291681806) <= 2495904997));
                        var_14 = ((-(var_12 && var_0)));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_15 = (max(var_7, 664190105));
                        var_16 = (((max((~var_3), (min(1799062298, var_5)))) << (3731809296149996416 - 3731809296149996390)));
                        arr_13 [i_2] [i_0] = (max(((max((1628505092 ^ 47791), (!11)))), 2495904997));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = 2196184966;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] [0] = (var_6 & var_1);
                        var_17 = var_10;
                        arr_19 [i_0] [2] [i_0] [i_0] = var_10;
                        var_18 = ((((4294966272 ? 21 : -20286)) >> (var_9 - 10114)));
                    }
                    var_19 *= -3815470330637142801;
                }
            }
        }
    }
    var_20 = ((((((max(var_12, var_13))) || ((max(-1314636540, var_7))))) ? ((min((max(var_4, var_11)), 1033))) : ((-2032887889 ? (((-(-127 - 1)))) : var_1))));
    #pragma endscop
}
