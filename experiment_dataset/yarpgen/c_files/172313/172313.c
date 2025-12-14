/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [10] [i_0] = ((-(arr_2 [i_1] [i_1])));
                arr_6 [i_0] [i_0] = (min(4095, 99));
                var_11 = (((((var_9 >= ((min(var_9, 79)))))) != ((max(var_4, (arr_3 [i_0]))))));
            }
        }
    }
    var_12 |= ((!((((402207601 % var_0) % var_4)))));
    var_13 = (max(var_13, var_2));
    var_14 = (~var_9);
    #pragma endscop
}
