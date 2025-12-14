/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_16 * 17517) ? 9 : ((~((248 ? 254 : var_17))))));
    var_20 = (max(var_20, var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] = (max((min(127, var_4)), (((!((min(-1108788174, 65288))))))));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((-(~6731757028875778196)));
                    arr_9 [i_1] [i_0] = ((((~(arr_3 [i_1] [i_1])))) || ((min(-29, 248))));
                    arr_10 [i_1] [i_1] = ((~((18446744073709551615 ? 2112396770 : 28))));
                    arr_11 [i_1] [i_1] [0] = (min((min((arr_6 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_1]))), ((min((~-26969), (~var_17))))));
                }
            }
        }
    }
    #pragma endscop
}
