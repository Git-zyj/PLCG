/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((var_16 ? var_5 : var_11))) ? ((min(var_10, var_17))) : var_16))) ? (((!((min(8577446077582307270, -1)))))) : (var_14 / var_3)));
    var_20 = ((((min((1073740800 > -1), -1))) ? ((((((min(var_10, var_7))) && (var_1 < var_5))))) : var_13));
    var_21 = var_3;

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_22 -= ((((!(max(0, 1)))) ? var_17 : ((~((1 ? 31835 : -14))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_23 = (~25863);
                        var_24 = (!-120);
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        var_25 = (((var_0 ? 255 : 16)) * (!var_5));
                        var_26 = (101 && 75);
                        var_27 -= (((((-1369282542 ? var_6 : 65535))) ? var_7 : var_12));
                        var_28 += (!var_5);
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_29 = var_15;
                        var_30 = var_14;
                        var_31 = (((((1 ? -59 : -4153979212204615451)) >= -5780042082336888732)));
                    }
                    var_32 ^= (max(((((-4090084931210309415 ? var_9 : 55405)) + -59)), ((var_8 ? var_8 : var_16))));
                    var_33 = ((var_2 ? ((((-530498815 ? -83 : var_12)))) : (((!((min(67108863, var_13))))))));
                    var_34 &= ((((((1503369277 | -26589) ? ((var_17 ? 32768 : var_15)) : var_17))) ? (!-1) : (min(((var_12 ? var_10 : 12)), (63 & var_4)))));
                }
            }
        }
        var_35 &= (((~-2037127787) < var_2));
    }
    #pragma endscop
}
