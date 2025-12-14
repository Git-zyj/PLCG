/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((0 == ((var_1 ? var_1 : var_10)))))) == (((((1 ? 1 : var_5))) ? var_8 : (~1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_14 ^= (arr_3 [i_2]);
                    var_15 &= (min(((((((3731244219472142254 ? 107 : (arr_2 [i_0])))) >= (arr_0 [i_2])))), var_10));
                }
            }
        }
    }
    #pragma endscop
}
