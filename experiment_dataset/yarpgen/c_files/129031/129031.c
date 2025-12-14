/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (max((((!(((230 ? var_1 : var_10)))))), var_5));
    var_13 = 31;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_14 *= ((2466342002 - (((12786 ? var_6 : 128)))));
                arr_4 [i_0] = (min(7151, ((12786 ? var_3 : 2466342002))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_15 = (((((-12777 ? (arr_7 [i_3] [i_2] [i_1 - 2] [i_0]) : (arr_7 [i_3] [i_2] [i_1 - 1] [i_0])))) / ((((min(230, 127))) ? 4294967295 : (arr_5 [i_0] [i_2] [i_3])))));
                            arr_11 [11] [15] [11] [11] [i_3] = ((((((arr_2 [i_1 + 2] [i_1 - 2]) | ((21 ? 4294967295 : (arr_2 [i_0] [i_0])))))) - 1240217535));
                            var_16 *= ((((((!(((28 ? 4114128829 : (arr_1 [i_0])))))))) * (max((min(var_1, 0)), ((var_2 ? 251 : var_1))))));
                            var_17 = var_11;
                        }
                    }
                }
            }
        }
    }
    var_18 = (((28 + (var_9 - 4294967295))));
    #pragma endscop
}
