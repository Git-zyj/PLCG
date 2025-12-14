/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_0;
    var_11 += var_4;

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_12 -= (min((((!(arr_1 [i_0 - 3])))), var_2));
        var_13 = (max(var_13, (((((13077389741026761483 ? (min(2251799812636672, (arr_0 [i_0 - 4] [i_0 - 4]))) : 127)) / (((((~var_4) != (((var_7 << (64771 - 64761)))))))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_14 = -5569749652896086540;
        arr_4 [i_1 - 3] = (arr_2 [i_1 - 2]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_8 [i_2] = max((((((var_1 + (arr_6 [i_2])))) + (1506820542 - 5369354332682790133))), (arr_7 [i_2]));
        var_15 = (max(var_15, var_3));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_16 *= var_2;
                                var_17 = (((((64765 % (arr_5 [i_2])))) ? ((((arr_5 [i_2]) & 0))) : (~13077389741026761467)));
                                var_18 = (-(max((arr_19 [i_2] [i_2] [i_4] [i_5] [i_4]), (arr_13 [i_2] [i_4] [i_5] [i_6]))));
                                var_19 = ((((((((arr_7 [i_4]) ? (arr_12 [i_4] [1] [1]) : -877458321)) != (arr_7 [i_2])))) | ((max(54737, 10798)))));
                            }
                        }
                    }
                    var_20 = (((var_6 ? 60 : (max(-489285080836554180, var_8)))));
                    var_21 -= (((((var_7 > var_9) ? ((min(32413, var_1))) : ((min((arr_5 [i_2]), (arr_12 [i_4] [i_3] [i_2]))))))) < (arr_13 [1] [1] [11] [1]));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {
                var_22 = (max((max((arr_14 [i_7] [i_8] [i_7]), ((-7135505401347323722 ? (arr_21 [i_7]) : 13077389741026761483)))), (arr_5 [16])));
                var_23 = 1006873804408942943;
                var_24 = var_4;
            }
        }
    }
    var_25 = (((((max(var_9, var_4)) != 0)) ? (((((min(2917964026541556183, var_5)) <= (var_0 & -9223372036854775794))))) : -var_9));
    #pragma endscop
}
