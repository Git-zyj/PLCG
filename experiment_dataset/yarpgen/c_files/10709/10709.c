/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_9));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_1] &= 11;
                var_19 = ((50882 ? (((!(!72)))) : 0));
                arr_7 [6] [6] [6] = (+((((((-4777694514654242811 + 9223372036854775807) >> (274869518336 - 274869518335)))) ? (((arr_5 [i_1]) ? -274869518336 : (arr_2 [i_0] [i_0]))) : (~-55))));
            }
        }
    }
    #pragma endscop
}
