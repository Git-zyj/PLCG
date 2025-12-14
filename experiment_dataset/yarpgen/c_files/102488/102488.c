/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(~var_7)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 -= (~39021950);
                    arr_10 [i_2] [i_1] [i_0] = ((+(((-2147483647 - 1) & (~var_1)))));
                    var_13 -= (max((max(((-(arr_1 [i_0]))), 4255945338)), (((!var_2) ? (max(17280978055318292198, 16389403419625483711)) : (~0)))));
                    var_14 += (max(16389403419625483737, 68));
                }
            }
        }
    }
    var_15 = var_0;
    var_16 = ((~(((max(var_8, var_5)) / (!var_1)))));
    #pragma endscop
}
