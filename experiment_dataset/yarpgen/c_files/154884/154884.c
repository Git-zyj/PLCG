/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (max((arr_0 [4]), 1222983885));
        arr_4 [i_0] [i_0] = ((((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])))) ? ((((arr_3 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) : ((-594108835 ? var_14 : var_13))));
        var_18 &= (((min(((-2050 ? (arr_3 [i_0]) : var_8)), (arr_0 [i_0]))) == ((15531 ? 1773131516 : 0))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_19 = (min((max((arr_3 [i_1 + 2]), var_8)), (((2147483647 ? (-2147483647 - 1) : -17055)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                {
                    var_20 = (!157);
                    var_21 = ((((arr_12 [i_3] [i_3] [i_3 + 1] [i_1 - 1]) ? var_14 : (arr_12 [i_3] [i_3] [i_3 - 2] [i_1 + 1]))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_15 [i_4] = ((((((arr_6 [i_4]) << (((arr_12 [i_4] [i_4] [i_4] [i_4]) + 1491432859))))) & (var_0 % var_5)));
        var_22 = (min(var_22, (((((443522040 != (arr_6 [i_4]))) ? 1363612698 : (arr_13 [i_4] [i_4]))))));
        var_23 = (((arr_10 [i_4] [i_4] [i_4]) ? (arr_10 [i_4] [i_4] [i_4]) : (arr_10 [i_4] [i_4] [i_4])));
        var_24 = ((var_9 ? ((var_5 + (arr_13 [i_4] [i_4]))) : (7476851727062795339 >= 0)));
        var_25 &= (arr_8 [i_4]);
    }
    var_26 &= (max((min((max((-2147483647 - 1), -20607)), var_13)), (-2147483647 - 1)));
    var_27 ^= (((max(3071983411, (((770858300 ? 1008740668 : 212771334))))) - (((var_4 ? (-212771334 - -15527) : 32767)))));
    #pragma endscop
}
