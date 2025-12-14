/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (((!(var_5 && var_2))));
                arr_6 [i_1] [i_1] [1] = (min((1 % 4294967295), (min(((max(var_9, 189))), (min((arr_2 [i_1]), (arr_1 [3])))))));
            }
        }
    }
    var_19 += (min(var_10, ((~(~var_3)))));
    var_20 ^= (max((--4770826651043791799), (~2080253969)));
    #pragma endscop
}
