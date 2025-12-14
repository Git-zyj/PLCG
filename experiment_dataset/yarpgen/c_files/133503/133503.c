/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                arr_4 [7] [i_1 + 4] = -1;
                var_14 = (min(var_14, (((~(min(3787668185, 1)))))));
                var_15 ^= (max(((((max(1, 65535))) - ((min(13544, 60846))))), ((-(13544 * 1)))));
                var_16 ^= ((1843714546 ? ((min(1, 1))) : ((4092516505 ? -7502 : 1))));
            }
        }
    }
    var_17 = ((((((((max(-1, -1843714546))) && (-3026 * 51992))))) < var_9));
    var_18 = 4294967295;
    #pragma endscop
}
