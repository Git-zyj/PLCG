/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_7;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_16 = (max(4, 18446744073709551596));
            var_17 = var_5;
        }
        arr_4 [i_0] = ((((min(1, var_3))) >> ((((arr_3 [2]) >= var_3)))));
        var_18 = (min(var_18, (((!(var_10 && var_2))))));
        arr_5 [i_0] = (min(((((min(var_2, var_10))) ? (min(18064182806441144109, 1)) : (var_8 + 1))), 30720));
        var_19 = (((255 & 4) % ((((arr_1 [i_0 + 1] [i_0 + 1]) ? -37 : var_0)))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = ((18064182806441144109 ? -5211736653791987774 : 30474));
        var_20 = (min(var_20, (((min(((min(var_0, var_0))), (arr_1 [i_2] [9])))))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 7;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_2] [i_2] = (max(2047, 4));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] = (((var_9 / var_4) < ((((var_4 || (arr_14 [i_2]))) ? 14705842735853539294 : var_3))));
                                var_21 = ((246 | (arr_3 [i_2])));
                            }
                        }
                    }
                }
            }
        }
        arr_22 [i_2] = ((((min(32767, 13123))) == (arr_14 [i_2])));
    }
    for (int i_7 = 2; i_7 < 10;i_7 += 1)
    {
        var_22 = (arr_23 [4]);
        var_23 += (min(var_12, (176 % 1)));
    }
    var_24 = (max(var_24, ((((var_0 && var_11) >= var_2)))));
    #pragma endscop
}
