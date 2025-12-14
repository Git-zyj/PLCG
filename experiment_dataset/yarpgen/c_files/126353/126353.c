/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] = (arr_5 [0] [0]);
                var_15 = (arr_2 [i_1]);
                arr_7 [i_1] [i_1 + 1] = arr_1 [i_1];
                arr_8 [i_1] = ((((min((arr_3 [i_0 + 1] [i_1 - 1]), (arr_3 [i_0 - 2] [i_1 - 1])))) ? (((arr_3 [i_0 - 3] [i_1 - 2]) ? (arr_3 [i_0 + 1] [i_1 + 1]) : (arr_3 [i_0 + 1] [i_1 - 2]))) : (((arr_3 [i_0 - 2] [i_1 - 1]) ? (arr_3 [i_0 - 1] [i_1 - 1]) : (arr_3 [i_0 + 1] [i_1 - 2])))));
            }
        }
    }
    var_16 = var_1;
    var_17 = ((((min(var_5, var_12))) ? (((((var_10 ? var_12 : var_8))) & ((var_7 << (var_10 + 247148768))))) : var_8));
    var_18 = 1030792151040;
    var_19 = ((((var_10 ? ((6485836317301818409 ? 1030792151041 : var_13)) : var_4))) ? (((((var_10 ? var_2 : var_0)) != ((1508949300 ? var_11 : 1675019727))))) : var_3);
    #pragma endscop
}
