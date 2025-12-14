/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((((-((1 ? 0 : 61))))) ? 1 : (max(((1645 ? 61 : 1648357807003589492)), var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((((69 < 1) | (max(var_5, 1648357807003589492)))))));
                var_12 = (max(var_12, (~-55)));
            }
        }
    }
    var_13 += ((min(-1648357807003589492, (!536805376))) <= var_3);
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {
                arr_10 [i_2] [i_2] [i_2] = var_6;
                arr_11 [i_2] = (max(111, (min((69 >= 69), (var_1 ^ 122)))));
                var_14 = (~1073741824);
            }
        }
    }
    #pragma endscop
}
