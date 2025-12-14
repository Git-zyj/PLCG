/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((4232141320 ? 243 : (-9223372036854775807 - 1)))) ? ((((max(1, var_0))) ? (~var_6) : (18446744073709551600 % -1599038302590064748))) : var_5));
    var_11 = (var_7 / var_5);
    var_12 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_13 = (((!-1599038302590064758) || (((arr_4 [i_0] [i_3]) || (var_3 || var_1)))));
                        var_14 ^= ((var_3 ? (((arr_7 [14] [14] [i_3]) ? (((arr_9 [i_3] [i_2] [i_1] [i_1 + 2] [i_0] [i_0]) ? (arr_4 [i_3] [i_3]) : var_8)) : (((var_5 << (((arr_10 [i_3]) - 1174262188234238484))))))) : ((((!(arr_3 [i_1] [i_1])))))));
                        var_15 = (((!-125) ? 11134 : (!var_0)));
                    }
                    arr_11 [i_0] [i_0] [i_0] = arr_7 [i_0] [i_1 - 2] [i_2];
                    var_16 = ((((37 > ((var_2 ? -2818 : 14171299856553641970))))) & var_2);
                }
            }
        }
    }
    var_17 = var_5;
    #pragma endscop
}
