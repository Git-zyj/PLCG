/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(~8752778513557485207)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 ^= (((max((!5806205351031046710), -24430)) >= (!24430)));
                    arr_7 [i_1] = ((-((-((((arr_2 [4] [i_2]) <= (arr_3 [i_2] [i_1] [i_0]))))))));
                    var_19 = ((+(((min((arr_3 [i_0] [i_1] [12]), (arr_0 [i_2])))))));
                    arr_8 [i_0] [i_0] [i_1] [4] = ((-(~125)));
                }
            }
        }
    }
    #pragma endscop
}
