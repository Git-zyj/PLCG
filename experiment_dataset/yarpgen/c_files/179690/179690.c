/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 ^= ((((max(4503599627370496, ((((arr_0 [i_0]) < 17091909029879076540)))))) ? (arr_0 [i_0]) : (((min((-2147483647 - 1), (255 > 4503599627370496)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    {
                        var_20 = -4503599627370501;
                        var_21 = (min(var_21, 4503599627370496));

                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            var_22 += (max(((-4503599627370497 ? 71 : -4503599627370493)), (arr_5 [i_2])));
                            var_23 = (((((((((arr_6 [i_0] [i_0]) + (arr_12 [i_0] [i_1] [i_2] [i_0] [i_4] [i_0])))) ? (arr_6 [22] [i_4]) : 47433972))) ? (((4503599627370483 + ((max((arr_13 [i_1] [i_1]), (arr_9 [i_0] [i_0]))))))) : (((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (1125899906841600 * 7) : ((((arr_2 [i_3]) | (arr_1 [i_2]))))))));
                            arr_14 [i_2] [i_2] = (((((-4503599627370483 <= (arr_8 [i_0] [i_2] [i_0] [i_0]))) ? 12 : (arr_11 [i_1] [i_1] [i_2] [i_4 + 1]))));
                            var_24 ^= (max((((-(arr_2 [i_0])))), 18445618173802710005));
                        }
                        var_25 = 1125899906841588;
                        var_26 = (min(var_26, ((max((((arr_3 [i_2 + 3]) ? 18445618173802710027 : (arr_7 [i_3 + 2] [i_1] [i_2 - 2]))), ((((arr_5 [i_1]) ? -28288 : 3112401369))))))));
                    }
                }
            }
        }
    }
    var_27 = ((((((min(var_1, var_10))) + (min(1125899906841595, var_15))))));
    var_28 = 4503599627370496;
    var_29 = (min(var_29, (!1125899906841578)));
    #pragma endscop
}
