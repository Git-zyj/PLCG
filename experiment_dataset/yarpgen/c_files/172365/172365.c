/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((((((var_9 || (arr_0 [i_0]))) ? (!21) : (min((arr_0 [i_0]), 13)))) < -var_0));
        var_13 = (min(var_13, (((!(((min((arr_1 [i_0] [i_0]), var_5)))))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_14 = (((((!(arr_1 [i_1 - 2] [i_1 - 2])))) ^ ((max(36, var_6)))));
                        arr_13 [i_2] [i_2] [i_3] [i_2] = max((max(1, 14908502141098559349)), ((var_3 ? (var_4 + 128) : ((65525 ? 18446744073709551615 : var_8)))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_15 = -1803445050;
                            var_16 = ((((((!127) ? -19 : 65530))) ? (((((arr_21 [i_0] [i_0] [i_5] [i_0] [i_0] [i_0]) <= ((max(10, -43))))))) : 321717310));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_17 = (max(-119, (((arr_17 [i_5]) ? 1755269865 : (arr_2 [i_0] [i_0] [i_0])))));
                            arr_29 [i_5] = (max((((((105 ? 4646576012855492778 : 1879982105))) ? (arr_15 [3] [i_6]) : (((!(arr_22 [i_5])))))), (((!-29592) ? ((var_7 ? 1 : 20)) : -43))));
                        }
                        var_18 = -10;
                        arr_30 [i_0] [i_0] [i_0] [i_5] = -50;
                        var_19 += ((+(((((((-127 - 1) ? 4 : 239731646277652150))) && ((min(3330414210, 151))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
