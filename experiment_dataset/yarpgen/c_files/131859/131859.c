/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = ((((((arr_4 [i_0] [i_1]) ? (arr_4 [i_0] [i_1]) : (arr_3 [i_0] [i_0])))) ? ((~(arr_3 [i_0] [i_1]))) : ((((arr_3 [i_0] [i_0]) ? -92 : 3651176221018779161)))));
                var_12 = -1;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 = ((+((1458467173 ? (arr_3 [i_4 + 1] [i_4 + 1]) : 1))));
                                var_14 = ((~(arr_10 [3] [i_1] [i_2] [i_1] [3] [10] [i_4])));
                            }
                        }
                    }
                }
                arr_11 [i_0] [i_1] = ((((1 ? (((2337755340 ? 1 : 217203173))) : (((arr_4 [i_0] [i_1]) | -1127766472156708859)))) % 452420670335573879));
            }
        }
    }
    var_15 = ((~(((((1 ? var_0 : 12528533929354943569))) ? var_1 : var_7))));
    var_16 = ((var_1 ? ((134216704 ? 134216733 : -452420670335573879) : (!3031428639))));
    var_17 = ((var_9 % (max((452420670335573879 / 112), var_4))));
    #pragma endscop
}
