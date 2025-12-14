/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = (max(var_16, (((((((((var_10 >> (var_7 - 1517620848)))) & var_12))) ? var_7 : var_0)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((((min((arr_2 [i_0] [i_0]), (arr_0 [i_0])))) ? (max((arr_1 [i_0] [i_0]), (arr_2 [i_0] [i_0]))) : var_13));
        var_17 = (max(-9070891574535520305, (max((min((arr_0 [i_0]), 18446744073709551615)), (((var_0 ? (arr_0 [i_0]) : var_5)))))));
        var_18 = var_10;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] [5] = ((!((23778 != ((-(arr_4 [i_1] [i_1])))))));
        arr_7 [i_1] = var_6;
        arr_8 [i_1] [i_1] = (~41756);
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        var_19 = ((~((min(41743, -3112)))));
        var_20 = (min(var_20, (((arr_10 [i_2 - 1]) & (((((4024428570691730621 << (var_1 + 87)))) ? 18446744073709551615 : (arr_9 [i_2 + 2])))))));
        arr_11 [i_2] [i_2] = 29756;
    }
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        var_21 = (min((max(5854331507161928618, ((((arr_22 [i_3]) ? 23772 : var_7))))), ((min((var_6 | var_8), (~65515))))));
                        var_22 = (max((arr_12 [i_3 + 1]), ((((arr_21 [i_3 - 2] [i_3 + 2] [i_5 - 2]) && (((var_12 + (arr_20 [1])))))))));
                    }
                }
            }
        }
        var_23 = (arr_13 [i_3 + 1]);
        var_24 += ((((((-105 ? 1 : var_0)))) || (((((((var_11 || (arr_12 [15]))))) * (arr_14 [i_3] [i_3 - 1]))))));
    }
    #pragma endscop
}
