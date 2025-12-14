/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 809378649;
    var_21 = var_8;
    var_22 = ((-(max(-13387, ((3485588651 ? 58319 : -2026950569094330806))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = ((((max(536870656, 809378633))) ? (((arr_4 [i_0] [i_0] [i_1 - 3]) ? (arr_4 [i_0] [i_1] [i_1 - 3]) : 11192251722826089587)) : (((3485588662 ? var_5 : (arr_4 [i_1] [i_1] [i_1 - 3]))))));
                var_23 = (max((max(var_17, 9086)), (arr_4 [i_1 + 1] [i_1] [i_1])));
                var_24 = 0;
                var_25 = (((arr_4 [i_1 + 2] [i_1 + 1] [5]) || (arr_4 [i_1 - 1] [i_1] [i_1 - 1])));
                var_26 = (max(((max(var_1, (min(-2701338, (arr_1 [i_0])))))), ((809378649 ? (arr_0 [i_0] [i_1 + 1]) : (arr_3 [i_0])))));
            }
        }
    }
    #pragma endscop
}
