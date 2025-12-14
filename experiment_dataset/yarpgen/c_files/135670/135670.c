/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] = max((arr_3 [i_1 + 1]), 1);
                var_14 *= ((+((((((var_3 ? (arr_1 [i_0] [7]) : -1583598696))) || (((-7683614586568998973 ? 61498 : 135))))))));
                arr_5 [i_0] [1] [i_0] = (((((-((4762505542184596553 ? 50204 : var_9))))) || ((var_7 <= (740581083 || 4632718454448244738)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 12;i_4 += 1)
                            {
                                var_15 *= (((((15301 ? 122 : 4294967295))) ? (-10802 / var_0) : (((((-740581083 / (arr_12 [i_1] [4] [0] [i_3] [4])))) % (~1555261720)))));
                                var_16 = (((arr_6 [i_0] [i_0] [i_3] [i_4]) ? (((740581083 / ((max(var_13, 17021)))))) : (((((65529 ? 15332 : var_12))) ? var_9 : (24 / 740581081)))));
                            }
                            arr_14 [i_0] [i_0] [i_0] [i_3] = var_4;
                        }
                    }
                }
            }
        }
    }
    var_17 = var_9;
    var_18 += ((((!(((var_0 ? 1555261692 : -15316))))) ? var_10 : (((-50204 ? var_12 : 0)))));
    #pragma endscop
}
