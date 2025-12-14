/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((((min(6559118895645023426, (!6559118895645023426))) << (((((((var_6 ? 6559118895645023426 : 6559118895645023439))) ? var_8 : var_2)) - 17390295503312571501)))))));
    var_15 = (min(var_15, (((((206 * ((46725 ? 11887625178064528188 : var_1)))) >> var_0)))));
    var_16 = (max(var_16, ((min(var_13, ((((((524224 ? 2147483647 : var_4))) ? var_2 : (526299414 || var_0)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((~((6559118895645023428 << (187 - 185))))))));
                arr_5 [i_1] = (((((((1832443782 ? -23315 : (arr_1 [i_1 + 1]))) + -1696963256))) - (((arr_1 [i_1 + 1]) ? (arr_1 [i_1 + 1]) : 263356219439210971))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_18 *= (min((max(204, ((208 ? 6559118895645023441 : var_12)))), (((52341 ? 56170 : 526299414)))));
                            var_19 = ((((((268419072 ? 1982659900 : -3528762507880025150)) < (arr_8 [i_0] [12] [i_2] [i_3 + 1]))) ? (((arr_8 [i_0] [i_0] [i_0] [6]) ? (arr_8 [1] [3] [1] [i_3 + 1]) : (arr_8 [i_0] [i_0] [i_0] [i_3 + 3]))) : 224));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
