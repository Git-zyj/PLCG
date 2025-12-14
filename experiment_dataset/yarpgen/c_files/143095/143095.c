/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((((((-((0 ? -48 : 65527))))) ? (max(0, 65535)) : (+-0))))));
    var_14 = ((((((var_12 ? 15407 : 4960)))) ? (((!(!7901)))) : (((max(65535, 65535))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((-(max(((21 ? 1 : var_12)), 11965))));
                    arr_9 [i_0] [i_0] [i_2] = ((((min(((max(61, 239))), (138 & -2147483635)))) ? -var_10 : ((6751814696744889936 ? 3565325702 : 16707928207952745305))));
                }
            }
        }
    }
    #pragma endscop
}
