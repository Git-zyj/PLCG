/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = ((255 ? ((255 ? 385367784141459328 : 385367784141459328)) : 39));
                    var_22 = ((((242 ? -3672790123091950632 : 17592186044415))) ? (((!(arr_7 [i_2] [0] [i_2] [i_0 - 1])))) : 60);
                }
            }
        }
        var_23 = var_14;
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_16 [i_4] [i_3] [0] = 1147;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_23 [8] [4] [8] [8] = 1505275284334558609;
                                var_24 = (min((((!((!(arr_19 [i_6] [0] [i_4] [i_3] [i_0] [3])))))), 68719476735));
                                arr_24 [i_6 - 1] [i_3 - 1] = -43;
                            }
                        }
                    }
                    var_25 &= (((((!(((104 ^ (arr_1 [i_3] [i_4]))))))) == ((((min(10996726058667356648, var_10))) ? (!-3720447052800750811) : -33554431))));
                }
            }
        }
        var_26 = var_9;
    }

    for (int i_7 = 2; i_7 < 8;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    var_27 = (((((((var_3 ? var_13 : (arr_0 [i_9] [7])))) ? (arr_10 [i_7] [i_8] [1]) : -var_17)) >= (((arr_1 [i_7] [7]) ? (~17306596639697211824) : (((max(220, (arr_7 [5] [i_9] [1] [5])))))))));
                    var_28 = (!var_15);
                }
            }
        }
        arr_36 [i_7] [i_7 - 1] = (min(var_6, var_7));
    }
    for (int i_10 = 2; i_10 < 20;i_10 += 1)
    {
        var_29 *= (!var_6);
        var_30 = 6986340054372339326;
    }
    #pragma endscop
}
