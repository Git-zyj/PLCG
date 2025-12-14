/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_12 [i_1 + 2] [i_1 + 2] [i_0] [8] = (((((63067 ? (-32767 - 1) : (arr_11 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1])))) - ((-(arr_2 [i_0] [i_1 + 1])))));

                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            var_20 = (((min((arr_7 [i_1] [i_1 + 1] [i_1 + 2] [i_4 + 1]), var_12))) ? (((((((arr_0 [i_1]) * 6494197563769438565))) ? 7190765695743727727 : (((arr_3 [i_1] [i_2] [i_4 + 1]) / (arr_7 [i_1] [i_1] [i_2] [i_3])))))) : 17273436699580482772);
                            arr_17 [i_0] [i_3] [11] [11] [5] [i_0] = var_5;
                        }
                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            var_21 = (((((-1047243795 ? (max(15516870886528596387, -14442)) : (arr_13 [i_0] [i_1 + 1] [11] [i_3] [i_5 + 1])))) ? (~13067261234113241524) : ((((11824 / 7190765695743727727) / 2476)))));
                            var_22 = ((15509447904136218162 ? (arr_6 [i_0] [i_0]) : (((var_3 && var_0) ? ((((!(arr_3 [i_0] [i_0] [i_0]))))) : (arr_8 [i_1 + 2] [i_0] [i_5 - 1])))));
                            arr_21 [i_3] [i_1 + 1] [i_3] [i_5] [i_5] [i_3] &= max((arr_11 [i_3] [i_3] [i_5 + 1] [i_1]), (((arr_11 [i_3] [i_1] [i_5 - 1] [i_3]) ? 122880 : (arr_11 [i_3] [i_1 - 1] [i_5 - 1] [i_3]))));
                        }
                    }
                }
            }
        }
        var_23 = (((((((arr_11 [i_0] [i_0] [8] [i_0]) != (((arr_20 [i_0] [i_0] [i_0] [i_0]) & (arr_7 [i_0] [i_0] [i_0] [i_0]))))))) & (max(1914270484, 9147138986814323789))));
    }
    var_24 = (max((((((max(var_12, 1914270487))) ? var_11 : ((var_2 ? var_11 : var_5))))), ((min(var_11, var_2)))));
    #pragma endscop
}
