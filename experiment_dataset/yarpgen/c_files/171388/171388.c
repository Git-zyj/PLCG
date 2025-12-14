/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(-1731045521, var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_9 [i_0] [1] [12] [i_1] [8] [i_3] &= -2083591688;
                        var_20 = (arr_4 [11] [9]);

                        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                        {
                            var_21 = 29;
                            var_22 = (arr_0 [i_4]);
                            arr_13 [i_0] [12] [12] [i_3] |= (+-32751);
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            arr_16 [0] [17] [i_2 - 1] [i_0] [i_2 + 3] = ((-(arr_5 [15] [i_5] [i_2])));
                            var_23 = (min(var_23, (arr_7 [i_0] [i_1] [i_0] [i_3] [i_5] [14])));
                            arr_17 [i_0] [0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_2 [i_1]);
                            arr_18 [i_0] [i_1] [i_2] = 58543;
                            var_24 ^= ((107 ? (((~(~22577)))) : (((!1993159187) ? 1 : (arr_6 [i_0] [8] [i_5] [i_3])))));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            var_25 |= ((2564985244013804902 ? 75 : 7006));
                            var_26 = (min(var_26, ((((((!(arr_20 [15] [i_1] [i_2] [i_2 + 1] [i_6] [1] [i_2 + 1])))) == (((!(16227 != 7006)))))))));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_23 [i_0] [i_0] = -14612;
                            var_27 = 1009424524;
                            arr_24 [i_7] [i_3] [i_2] [4] [1] [i_0] = 415190942;
                            var_28 *= -32751;
                        }
                    }
                    var_29 = ((((((max(1, -3199277725555387948))) && ((min(-88, 84))))) || ((((arr_19 [i_2] [13] [13]) ? (var_13 / -32738) : (arr_5 [i_2 + 1] [i_2 + 3] [i_2 + 2]))))));
                }
            }
        }
    }
    #pragma endscop
}
