/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [21] [i_0] |= ((var_10 ? ((max(65524, (max(-1421927629, 886869012))))) : ((11263073481760367403 ? 7183670591949184222 : 886869030))));
                var_11 &= -19;
            }
        }
    }
    var_12 = (max(var_0, (min(((min(var_9, 2069198139))), (min(var_9, 7835487434353801161))))));
    var_13 |= (min(var_2, var_0));
    #pragma endscop
}
