/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (min(((253 ? (min(520, 1610717997853917489)) : (min(16836026075855634154, 65017)))), ((min(32767, 52132)))));
                var_15 = (min(var_15, ((min(4367727786005165227, ((12177887194850256087 << (((min(714177965, var_2)) - 38425)))))))));
            }
        }
    }
    var_16 = var_9;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_17 = (arr_8 [i_2 - 1] [i_2 - 1]);
                var_18 ^= ((!((((arr_8 [i_3] [i_2 - 1]) ? (arr_8 [8] [i_3]) : (arr_8 [i_2] [i_3]))))));
                var_19 = (arr_8 [i_2] [i_2]);
            }
        }
    }
    #pragma endscop
}
