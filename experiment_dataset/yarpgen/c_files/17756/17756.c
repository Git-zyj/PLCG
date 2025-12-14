/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] [i_0 + 1] [i_1] = ((+(((arr_0 [i_0 + 1] [i_0 + 3]) % (arr_0 [i_0 + 3] [i_0 + 2])))));
                var_14 = (!179);

                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    var_15 = (((235 < -1) % (((arr_3 [i_2 - 3] [i_2 - 3] [i_2]) >> (1852475201 - 1852475201)))));
                    var_16 = (min(var_16, ((max(((-4701619860719228587 ? ((((arr_4 [i_0]) / var_11))) : (0 / var_6))), (max((((var_7 ? -1852475171 : -1852475202))), var_6)))))));
                    arr_8 [i_0] [i_1] [i_2] [i_2 - 2] = ((((((var_3 ? (arr_0 [i_0] [i_2]) : 1852475201))) ? (!7782411749778174543) : -var_1)));

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_17 *= (min(1852475202, 0));
                        var_18 = var_10;
                        arr_12 [i_1] [i_1] [i_2] [i_3] = (min((arr_6 [i_2 - 1] [i_2 - 1] [i_3 + 2]), (((!(arr_2 [i_0 + 1]))))));
                    }
                    for (int i_4 = 4; i_4 < 17;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 3] = ((-(max((!var_9), (((-127 - 1) % var_8))))));
                            var_19 -= (126 ? 137405399040 : (max((!var_0), (8301647636366886171 ^ 1852475181))));
                            var_20 = (max(var_20, (min(var_12, 8301647636366886171))));
                            arr_20 [i_0] [1] = (!255);
                            var_21 *= (((arr_1 [i_0] [i_4 - 1]) % (max((~8301647636366886165), (arr_0 [i_0] [i_0])))));
                        }
                        arr_21 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3] = (-((~(~50955))));
                        var_22 = (min(-var_7, (arr_2 [i_4 - 2])));
                        arr_22 [i_0 + 1] [i_0 + 1] [i_0] = (8301647636366886171 || -1852475202);
                    }
                }
                var_23 = var_12;
            }
        }
    }
    var_24 = var_6;
    var_25 -= ((var_3 << (((--1852475180) - 1852475124))));
    var_26 = ((var_1 ? var_10 : ((((((var_0 ? var_3 : 1852475181))) ? var_3 : -1852475198)))));
    #pragma endscop
}
