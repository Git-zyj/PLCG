/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((((max(var_4, var_5))) || (var_1 || var_9)))), var_7));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (((!(((-((~(arr_1 [16])))))))))));
                    arr_11 [i_1] [i_1] = ((~(!var_5)));
                    arr_12 [i_2] [i_1] [i_1] [i_0] = (arr_7 [16] [1] [11] [1]);
                }
            }
        }
    }
    var_12 &= (min(var_6, (min(var_9, var_8))));
    #pragma endscop
}
