/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_6 ? ((((min(var_3, -8939))))) : (~var_11)));

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_13 += ((~((max(var_5, 293334549)))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] = ((((((((-(arr_2 [i_0] [i_0]))) <= ((-(arr_0 [i_0] [i_0]))))))) | (((var_8 < 2437883792) ? (arr_4 [i_1 + 1] [i_2 - 2]) : 3361579583))));
                    var_14 = (((arr_5 [i_0] [i_0]) ? (((var_5 ? var_6 : (((var_0 || (arr_9 [i_0] [i_0]))))))) : ((-514356287 ? (min(var_9, var_5)) : (max(4194303, var_7))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = (!211);
                                arr_17 [i_0 - 1] [i_0 - 1] [i_2] [i_2] [i_1] = max(-4294967295, (((!(arr_3 [i_0 - 3])))));
                            }
                        }
                    }
                    var_16 = ((!((5204723634019015882 >= (((860838148 << (var_9 + 6562585776340719474))))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        arr_29 [i_0] [i_5] [i_7] [i_6] [i_5] = (3434129152 ? 4906377816742946724 : 18446744073709551610);
                        var_17 = var_4;
                        var_18 ^= (min((((var_1 <= var_6) ? var_5 : var_7)), var_0));
                    }
                }
            }
        }
    }
    var_19 = ((var_8 < (var_2 || var_9)));
    #pragma endscop
}
