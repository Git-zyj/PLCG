/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (min(var_8, (((!1) ? 1 : -var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (min((((var_0 ? var_8 : (arr_0 [i_0] [i_0])))), (!1)));
                var_15 += (((-var_11 < var_10) ? 3063097317 : (arr_5 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_2] [i_3] = (((((1 ? ((var_6 ? (arr_3 [i_0]) : var_7)) : ((min((arr_4 [i_1] [i_2] [i_3]), 1450763542)))))) && ((min(var_0, (arr_3 [i_0]))))));
                            var_16 *= ((+(((arr_5 [i_0]) ? 9223372036854775807 : (arr_5 [i_0])))));
                            var_17 = (arr_0 [i_2] [i_2]);
                            var_18 += (min((min((!1), (min(var_13, var_3)))), ((max(19969, (arr_4 [i_0] [i_3] [i_2]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_19 = (max((((19981 << (((arr_13 [i_4]) - 40871))))), (((arr_3 [i_5]) ? 1 : (arr_3 [i_1])))));
                            var_20 = (arr_7 [i_5] [i_5]);
                            arr_17 [i_5] [i_1] [i_1] [i_4] [i_5] = (((arr_3 [i_0]) == (((((1484138555196013336 ^ (arr_8 [i_0] [i_1] [i_4] [i_5]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
