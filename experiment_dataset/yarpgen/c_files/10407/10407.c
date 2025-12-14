/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 &= (min((((!232) || ((min(4032, 3740483070168852277))))), (((arr_10 [i_4] [i_0] [i_0] [i_0]) > (var_5 | -108182117)))));
                                var_20 = (max(var_20, var_9));
                            }
                        }
                    }
                    arr_14 [i_2] [i_0] [i_0] = ((220 == (227 >= 36)));
                    arr_15 [i_0] [i_0] [i_0] [i_0] &= (((((((5 >= (arr_13 [i_0] [4] [i_0] [i_2] [i_1] [i_1] [i_1])))) << ((max((arr_12 [i_0] [1] [i_1] [1] [i_2]), (arr_7 [1])))))) == ((((max(var_14, (arr_1 [i_0] [i_2]))) != (arr_6 [i_0] [7] [i_2]))))));
                }
            }
        }
    }
    var_21 = (min(var_21, ((((((min(var_3, var_9))) ? var_1 : var_3)) - ((-(!var_14)))))));
    var_22 = (((((var_6 ? 3740483070168852276 : 48))) ? (((min(32767, var_18)) ^ (((14727040615393318145 ? 114 : 63))))) : (~-1614369517)));
    var_23 = var_18;
    #pragma endscop
}
