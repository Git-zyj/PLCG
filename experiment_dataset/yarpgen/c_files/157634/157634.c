/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1864028161;
    var_16 = (max(var_16, (((((max(var_6, (1 * 1557890850)))) && ((((~var_0) & var_10))))))));
    var_17 = 29062;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 -= ((-(36466 * 11881505946020965376)));
                                var_19 += (~1602218926999794097);
                                var_20 = ((((((arr_0 [i_1 - 1] [i_4]) ? 7579047155484297963 : (arr_0 [i_0 - 1] [7])))) ? 36475 : (3040641542 != -25813)));
                            }
                        }
                    }
                }
                var_21 = (((((12618 * (arr_5 [i_1 - 1] [i_1] [i_1])))) ? var_14 : (((((var_5 ? 1320424925133074791 : 12633))) ? (min(1, 7069581432822889311)) : -6841486471423811250))));
                var_22 += 184;
                arr_14 [i_0] = (((((((((arr_6 [i_0] [i_1] [i_0 + 1] [i_0]) + 2147483647)) << (((var_5 + 7913931417033766389) - 10)))))) - (arr_4 [i_1])));
            }
        }
    }
    var_23 -= (((max((~1), var_13)) >> (max(var_7, var_12))));
    #pragma endscop
}
