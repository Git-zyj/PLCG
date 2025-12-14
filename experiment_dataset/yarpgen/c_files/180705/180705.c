/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (max((min(var_0, (((473415733 ? var_14 : -473415734))))), ((((((var_0 | (arr_5 [i_0] [i_0])))) ? (min((arr_3 [i_0] [i_0]), -473415720)) : (((var_17 + 2147483647) >> (((arr_6 [i_0] [i_1]) - 9148343704856117960)))))))));
                arr_8 [i_0] [i_1] = (arr_1 [i_0] [i_1]);
            }
        }
    }
    var_18 = (min(var_18, var_5));
    #pragma endscop
}
