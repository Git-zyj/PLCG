/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [1] [i_2] = (min(-32767, -86));
                    var_13 &= (1 & -6997698903372258434);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                arr_16 [i_3] = (max(((((arr_5 [i_3 + 3] [i_3 + 3] [i_3 + 3]) ? (arr_5 [i_3 - 1] [i_3] [i_3 - 1]) : (arr_5 [i_3 + 3] [i_3] [i_3 + 2])))), (max(-8029093541573144952, ((min(-1746, -8388608)))))));
                var_14 = (arr_12 [7]);
            }
        }
    }
    var_15 = var_1;
    var_16 = ((~-118) ? ((max((max(var_12, var_2)), ((max(var_4, var_5)))))) : (((-8029093541573144946 + 9223372036854775807) >> (2939437124 - 2939437103))));
    var_17 = var_1;
    #pragma endscop
}
