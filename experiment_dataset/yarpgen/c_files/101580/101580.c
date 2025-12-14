/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (arr_7 [i_2] [i_1] [i_0] [i_0]);
                    arr_8 [i_0] [i_1] [i_2] = (min(((min(var_4, (arr_2 [i_1])))), (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_2))));
                    arr_9 [i_0] [i_0] [i_0] = (arr_7 [i_0] [i_1] [i_0] [i_2]);
                    arr_10 [i_0] [i_0] [i_2] = (65524 - -5877);

                    for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
                    {
                        var_13 -= 65524;
                        var_14 = (((((((max(0, var_2))) ? (((-20229 ? 0 : var_0))) : (max(1090715534753792, 8611))))) ? var_11 : (min(7447523366526308964, (((!(arr_5 [i_0] [i_0] [i_0] [i_0]))))))));
                        arr_15 [i_0] [i_2] [i_2] [i_2] [i_0] &= 10552617572698647731;
                    }
                    for (int i_4 = 3; i_4 < 9;i_4 += 1) /* same iter space */
                    {
                        var_15 = (54 & -79);
                        var_16 -= var_11;
                        var_17 = (min(var_17, ((((((0 ? 358318362 : 10))) ? 65509 : var_4)))));
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_18 = (max(var_18, (arr_14 [i_0] [i_1] [i_0] [i_2] [i_0] [i_2])));
                        var_19 = (3653907075 >= 225);
                        var_20 = (max(var_20, 2728682477));
                        var_21 |= 297597904;
                    }
                }
            }
        }
    }
    var_22 = ((((min(var_9, (!var_0)))) ? var_9 : ((39814 ? 201 : 130023424))));
    var_23 *= (((var_6 && (((4294967288 ? -1780797800 : 8))))));
    var_24 *= var_4;
    var_25 -= (((((-(var_11 & var_1)))) ? ((3617949856 % (((var_2 ? -2048 : 65509))))) : (var_5 ^ var_3)));
    #pragma endscop
}
