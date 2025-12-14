/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((((((((arr_0 [i_0]) ? (arr_2 [i_0] [14] [2]) : (arr_2 [i_0] [i_0] [i_0])))) || ((((arr_7 [i_0] [14]) * (arr_4 [i_0] [i_0] [1] [i_0])))))) ? (((18025602687351479360 | 0) % ((-(arr_4 [i_2] [i_1] [i_0] [i_0]))))) : (((((arr_1 [i_2 + 1]) <= 13))))));
                    arr_9 [i_0] [8] = (((((+(((arr_1 [i_0]) & (arr_1 [i_2])))))) || ((((((~(arr_6 [i_1])))) * (((arr_1 [i_0]) ? (arr_6 [i_2]) : (arr_7 [i_0] [i_0]))))))));
                }
            }
        }
    }
    var_12 = min(var_6, ((var_6 ? (~var_5) : (~var_7))));
    #pragma endscop
}
