/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_1 ? (min((max(2008310766, -395753958)), (395753957 % -1277199225))) : (((-724389942 ? var_6 : var_6))));
    var_14 -= var_11;
    var_15 &= var_0;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (((((!(arr_0 [i_0] [i_0])))) > var_7));
        arr_2 [4] = max(((1690553711 ? (2147483647 && 2063547946) : -1784297326)), 950427847);
        var_17 = min(1936562713, 395753958);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 |= var_7;
                    var_19 = arr_4 [i_0];
                }
            }
        }
    }
    var_20 = 4128768;
    #pragma endscop
}
