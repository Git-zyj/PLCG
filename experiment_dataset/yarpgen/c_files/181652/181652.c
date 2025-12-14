/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 8006;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_16 = ((((((arr_8 [i_0] [i_1] [i_2] [i_2] [i_0] [i_4]) ? (((((arr_3 [i_0]) >= var_2)))) : 4524008867126237761))) ? (arr_4 [i_0]) : var_10));
                            var_17 -= (((((((7168 ? (arr_1 [i_0]) : var_12))) ? (~1) : (((var_6 + 2147483647) << (var_5 - 24000718))))) == (((((0 ? (arr_7 [i_0] [i_0] [i_0]) : 7168)) >= (206 || 32126))))));
                            arr_12 [i_0] [i_1] [i_0] = 71909230;
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_0] = (((-8467731650455265823 ? 536870911 : -9223372036854775796)));
                            var_18 = (max(var_18, var_0));
                        }
                        var_19 = ((max(1, ((33411 ? 1 : 251)))));
                        var_20 = ((8467731650455265823 ? (min((!-12), (min(22, -1)))) : (((((((min(var_0, 22525)))) < ((var_6 ? (arr_2 [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0])))))))));
                    }
                    var_21 = (((arr_6 [i_0] [i_0] [i_0]) * (((((min(1, var_6))) / var_5)))));
                    var_22 ^= (min(1, -2099931086));
                    arr_14 [i_0] [i_1] = (min((((~(arr_7 [i_2] [i_2] [i_2])))), ((((((0 ? var_6 : (arr_11 [i_0] [1] [i_0] [i_0] [1] [i_0])))) ? (arr_9 [i_0] [i_1] [i_1] [i_0]) : ((((33423 < (arr_4 [i_0]))))))))));
                }
            }
        }
    }
    var_23 = var_4;
    var_24 = var_4;
    var_25 = var_0;
    #pragma endscop
}
