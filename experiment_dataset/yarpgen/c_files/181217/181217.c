/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_8 [i_0] = -1926614888;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_18 += (((arr_1 [i_0]) ? (!13754981893669376142) : (arr_13 [4] [i_2] [i_2] [i_3 + 1] [i_2] [i_2])));
                            var_19 += (((((~(arr_13 [i_0] [i_0] [i_0] [i_0] [15] [i_3 - 2])))) ? (((!23) - ((4691762180040175473 & (arr_1 [i_0]))))) : (!6525203464706010697)));
                        }
                    }
                }
                var_20 = ((((-2047 ? 4691762180040175473 : -7)) != 4294967295));
                var_21 = 169;
                arr_14 [i_0] [i_1] = ((-((-2068 ? ((max(0, (arr_5 [i_0] [i_1])))) : -65535))));
            }
        }
    }
    var_22 = var_3;
    var_23 -= (!54022);
    #pragma endscop
}
