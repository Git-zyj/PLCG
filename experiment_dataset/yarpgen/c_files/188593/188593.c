/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_11, (min(var_8, var_0))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = (((min((arr_0 [i_0]), (((arr_2 [i_0] [i_0]) ? 1 : var_1))))) < (min(((min(550485860, var_15))), (min((arr_3 [i_0]), (arr_0 [i_0]))))));
        arr_4 [i_0] = (!12977663014011716711);
        var_20 = (max(var_20, ((((((arr_1 [i_0]) != ((12977663014011716711 ? 960293854 : 16619)))) ? var_12 : ((5469081059697834905 ? 1353332151 : 1)))))));
        var_21 = (((min(1, 1)) ? (arr_3 [7]) : (arr_1 [i_0])));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_22 = (var_13 - (((1 >= (min(var_7, var_13))))));
                        var_23 = arr_16 [i_1] [i_1] [i_3] [i_4];
                        arr_17 [i_3] [i_2 - 2] = -398676050;
                        var_24 = (max(var_24, ((min((arr_14 [i_1]), (1 != 0))))));
                    }
                }
            }
        }
        arr_18 [i_1] &= (((min(1, 5469081059697834904))));
    }
    #pragma endscop
}
