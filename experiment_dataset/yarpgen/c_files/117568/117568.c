/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_6 ? ((((max(527095270, 13)) < var_15))) : ((((max(803093564, 0)) > var_15)))));
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (max((arr_0 [i_1]), (((var_11 * 0) / (arr_4 [i_0])))))));
                var_19 = ((1 ? 1 : 1));
                var_20 = ((((((!(((var_7 & (arr_2 [i_0])))))))) < ((((min(3767871999, 3767872015))) ? (arr_2 [i_1]) : ((-20 ? 1 : 8992081152404327343))))));
            }
        }
    }
    var_21 = var_9;

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = 13;
        arr_9 [i_2] [i_2] = ((((((!20) >> ((((~(arr_3 [i_2]))) + 24))))) <= ((4294967295 ? (max(-7082611419248536731, var_6)) : (arr_3 [i_2])))));
    }
    #pragma endscop
}
