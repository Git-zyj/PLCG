/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(9915959126462736728, 112));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [13] = (arr_3 [i_1]);
                var_20 = (arr_3 [17]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_21 += var_6;
                            var_22 = -112;
                            arr_14 [i_0] [i_0] [i_2] [i_2] = ((min((~-106), (min(5006436770658831823, -373326773)))));
                            var_23 = ((-((((~15026771157862725074) > ((((arr_0 [i_0] [i_2]) ? var_17 : 29932))))))));
                            arr_15 [i_0] [i_2] [i_0] [i_0] = (arr_10 [i_0]);
                        }
                    }
                }
                var_24 = ((((min(-121, 0))) >= (-105 ^ -18446744073709551611)));
                var_25 = var_7;
            }
        }
    }

    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_26 = 122;
        var_27 = (((((((~(arr_13 [i_4] [i_4] [i_4] [i_4] [1]))) << (((((arr_8 [15] [i_4]) ? (arr_10 [i_4]) : (arr_4 [23]))) - 2690898621))))) ? 15026771157862725074 : ((((((arr_10 [i_4]) << (901246178 - 901246169)))) ? 1274693137 : (arr_4 [i_4])))));
    }
    var_28 = (min(var_28, (!122)));
    var_29 = max(((23554 ? 1335546070989506997 : (((0 ? 9 : 0))))), ((max((var_13 & var_1), (var_18 + 2964795750)))));
    #pragma endscop
}
