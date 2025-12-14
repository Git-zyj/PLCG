/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_0, ((((((115 ? 2147483648 : var_9))) && 17099503320437121629)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [8] [i_1] [i_1] [i_2] = (max(var_9, (max(1048575, 4294950912))));
                    var_11 = ((69 ? (((((~243) == -109)))) : ((-109 ? 389947807 : 0))));
                }
            }
        }
    }
    var_12 = ((~(min(var_1, ((12089476384666340678 ? 65535 : -109))))));
    #pragma endscop
}
