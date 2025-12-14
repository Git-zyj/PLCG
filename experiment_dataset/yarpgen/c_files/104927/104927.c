/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (min(791494088, (max(791494084, 124))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (((arr_0 [i_0]) ^ (arr_1 [i_0])));
                    arr_8 [i_0] [i_0] [i_1] [i_1] = (((arr_3 [i_0] [i_1] [i_0]) % -112));
                    arr_9 [i_0] [i_0] [20] [i_0] = (min((((((max(791494088, 791494089))) && ((max(var_17, (arr_6 [i_1] [i_2]))))))), ((1 >> (112 / 6545450587291230879)))));
                }
            }
        }
    }
    var_20 += (var_15 != var_5);
    var_21 -= var_11;
    #pragma endscop
}
