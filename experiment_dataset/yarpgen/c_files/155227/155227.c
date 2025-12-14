/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((max((((arr_0 [i_1]) - 62115)), (arr_0 [i_0 - 1]))) / (arr_4 [i_0 + 1] [i_1])));
                var_10 = (min(var_10, ((min((((var_2 <= (arr_2 [i_0 - 1] [i_0 - 1])))), (((arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 1]) - (arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 1]))))))));
            }
        }
    }
    var_11 = (((((-284670141 ? ((var_1 ? var_5 : -19012)) : (var_1 / var_8)))) / ((((min(var_9, var_2))) ? ((var_7 ? var_5 : -6487580677090482489)) : var_7))));
    var_12 = var_6;
    var_13 = -19012;
    #pragma endscop
}
