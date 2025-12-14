/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (((arr_0 [i_0] [11]) + (arr_2 [i_1])));
                arr_5 [i_0] [i_0] = (((min((arr_3 [i_0 - 2] [1] [i_0]), (arr_3 [i_0 + 1] [i_0 + 1] [i_0]))) != (((~(0 | 1))))));
                var_14 = var_12;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_15 = ((((max((arr_6 [i_2]), 1))) * (((arr_6 [i_2]) / (arr_4 [i_3] [i_3])))));
                var_16 *= ((((((arr_9 [i_2] [11] [i_3]) >= (0 & 246))))) & ((~(((arr_7 [i_2]) >> (((arr_10 [i_3]) - 3149535067308920093)))))));
                var_17 = (max(var_17, ((max((arr_8 [i_3] [i_2] [i_2]), (max((((var_10 ? 17879 : (arr_2 [i_2])))), (var_0 * var_2))))))));
            }
        }
    }
    var_18 = (max((1532229548597830446 - var_0), (((var_11 >= (min(1, var_7)))))));
    var_19 = ((-((((max(var_4, var_5))) ? -4701634672125121794 : (~0)))));
    var_20 = var_6;
    #pragma endscop
}
