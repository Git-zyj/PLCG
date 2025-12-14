/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 15506289224908730851;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((13479 ? (((((((-9223372036854775807 - 1) / (arr_0 [i_1] [i_0]))) >= ((min(585643703, 0))))))) : ((((~(arr_3 [i_0] [i_0]))) | (min(var_4, (arr_3 [i_0] [1])))))));
                arr_6 [i_1] [i_1] = (min((max(52048, 14085)), (2771026743 >= 3949855156)));
                arr_7 [i_1] = ((!((!((max((arr_2 [i_0] [i_0]), var_12)))))));
                arr_8 [i_0] [i_1] = -479126701;
                arr_9 [i_0] [i_0] = (min(((min((arr_0 [i_0] [i_1]), (arr_2 [i_0] [i_1])))), 55104));
            }
        }
    }
    #pragma endscop
}
