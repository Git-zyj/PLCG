/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~4290772992);
    var_15 ^= 32766;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_1 - 1] [i_0] = (((((3057784568 ? 1237182740 : 3057784555))) ? ((max(3377699720527872, 93))) : 4622762495060230612));
                var_16 ^= (arr_2 [i_0] [i_1 - 2]);
                arr_8 [i_0] [i_0] = var_6;
            }
        }
    }
    #pragma endscop
}
