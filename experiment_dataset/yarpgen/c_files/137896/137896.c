/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((var_7 << ((((((min(var_7, var_7))) ? (((var_7 ? var_0 : var_2))) : 375588640)) - 14984)))))));
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((((((arr_0 [i_0]) && 4114436287)) ? (arr_0 [i_0]) : var_0))) ? ((((!(arr_3 [i_0]))))) : ((var_5 ? (~var_10) : var_7))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 ^= var_8;
                    var_14 = (((((var_5 ? (arr_2 [13] [i_1]) : (((28 ? var_0 : (arr_7 [i_0]))))))) && ((min((((var_5 ? var_5 : var_4))), var_7)))));
                    var_15 = (max(var_15, (((803295539 ? var_5 : (max((arr_9 [i_0] [i_1]), (var_2 - var_3))))))));
                    arr_11 [i_2] [i_1] [i_0] |= var_2;
                    var_16 |= (((arr_0 [i_0]) ? (((arr_0 [i_2 - 3]) & var_4)) : ((((arr_1 [i_2 - 3]) ? ((-803295539 ? 36247 : (arr_9 [i_1] [17]))) : ((var_4 - (arr_1 [i_0]))))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_17 = ((!((max(8135, 544825384304803385)))));
        var_18 = ((((((arr_7 [i_3]) >> (((arr_8 [i_3]) - 4174073654))))) > ((16855811776176951397 ? var_7 : (arr_8 [i_3])))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_19 = ((((544825384304803409 >= (((-1367677217 ? var_10 : -608611693))))) ? (((1590932297532600219 >> var_2) & (var_6 == var_9))) : var_8));
        var_20 += ((!2104520807) && (arr_15 [14]));
        arr_18 [i_4] = arr_7 [i_4];
    }
    #pragma endscop
}
