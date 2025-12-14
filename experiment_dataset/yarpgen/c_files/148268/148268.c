/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((~var_10) == 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_12 ^= (max(var_10, (arr_9 [i_0] [i_2] [i_0] [8])));
                    var_13 = (var_0 ? (((((var_2 ? (arr_5 [i_2]) : (arr_0 [i_0] [i_0])))) % ((var_8 ? var_5 : 1)))) : (((min(1, 1)))));
                    var_14 += (((arr_1 [i_0]) != ((~((var_7 ? var_8 : (arr_6 [i_0])))))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_12 [i_2] [6] [i_2] [1] [i_2] = ((((-(arr_9 [i_1] [i_1 - 1] [i_1 + 2] [i_1 + 1])))) ? ((+(max((arr_2 [i_0] [i_0]), 1)))) : var_5);
                        var_15 = 1;
                        var_16 ^= ((((((arr_9 [6] [i_1 - 2] [i_1] [i_1 + 1]) ? var_2 : var_10))) * ((~(min(var_8, var_2))))));
                        arr_13 [i_3] [i_3] [1] [i_3] = var_7;
                    }
                    arr_14 [i_0] = ((~((4294967295 ? (min(var_8, var_9)) : 1356162716))));
                }
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    arr_17 [i_1] [i_1 - 1] [0] &= ((((min((arr_0 [i_0] [i_0]), 1102342099)) <= var_5)) ? (((max((arr_0 [i_0] [i_4]), var_3)) ? ((var_9 ? 3373287934 : (arr_3 [i_4]))) : ((var_4 ? var_10 : (arr_7 [i_0] [i_0] [i_0] [i_0]))))) : (arr_0 [i_1] [1]));
                    var_17 = max((max(((((arr_11 [i_4] [i_4] [i_0] [i_0] [i_0] [i_0]) ? (arr_3 [11]) : 1))), (max(var_1, 0)))), var_6);
                    var_18 ^= var_6;
                    arr_18 [i_0] [i_4] [i_0] [i_4 - 2] = 1172945523;
                }
                arr_19 [i_0] = (3733570201 / -var_2);
                var_19 ^= ((!(((((((arr_2 [i_0] [9]) ? (arr_15 [i_0] [i_1] [i_1]) : (arr_8 [i_0] [i_1 + 2] [i_1 + 2])))) ? (max((arr_8 [i_0] [i_1] [i_1]), var_5)) : (((min((arr_0 [i_0] [i_0]), var_7)))))))));
                arr_20 [i_0] = max(-var_6, ((((var_5 ? var_5 : (arr_10 [i_1 + 1] [i_1] [i_0] [i_0]))) ^ (min((arr_4 [i_0] [i_1 - 1]), (arr_0 [i_1] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
