/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = (min(var_10, (((var_2 != (((var_7 > (((-(arr_0 [1]))))))))))));
                arr_6 [i_0] [i_1] |= ((arr_5 [i_1] [16]) ? ((-(arr_4 [i_0 + 1] [18] [i_0 - 2]))) : ((((min(60129542144, (arr_4 [i_0] [7] [7]))) >= ((min(3098195659, 1196771636)))))));
                var_11 = (((((((((arr_2 [i_1]) <= var_9))) * (arr_2 [i_0 + 1])))) ? (arr_4 [i_1] [i_1] [i_0]) : (max(((-(arr_1 [i_0]))), (var_1 >= var_8)))));
            }
        }
    }
    var_12 = ((-(((~3098195671) ? ((max(3098195660, 3098195659))) : 2251250057871360))));
    #pragma endscop
}
