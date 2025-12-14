/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((var_2 ? var_14 : 10730124671306704085), var_0)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((((min(1, var_4)) ? var_8 : var_10)) ^ var_8));
        var_16 = (((min((var_7 + var_12), ((35383 ? var_8 : var_13))))) ? (max(((var_5 ? var_1 : var_3)), (min(var_8, 35359)))) : (((((var_10 % var_8) != 5324749875040597887)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = min((max(((var_13 ? var_6 : 7909981635759081522)), (var_14 & var_14))), (!13121994198668953725));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3 + 1] [i_2] = (max(((min(10085928715581871381, 18446744073709551615))), ((30176 ? ((var_1 ? 26985 : 7203402492418756268)) : ((var_5 ? var_11 : 6829761593458779785))))));
                                var_18 = ((63310 ^ 35330) ? (min(var_14, ((var_8 ? var_9 : var_10)))) : -var_5);
                            }
                        }
                    }
                    var_19 += ((((!(var_10 && var_13))) ? var_14 : ((((1 || var_6) || (!127))))));
                }
            }
        }
    }
    var_20 = (max((max((max(var_7, 4529821652279468852)), (max(1, var_12)))), ((~(~var_6)))));
    #pragma endscop
}
