/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((((((1438057892 ? (min(2856909404, 2856909406)) : ((var_14 ? 1 : 2856909403))))) && (((var_5 || 2856909394) == (~var_9))))))));
                arr_6 [i_0] [i_0] [i_1] = (max(2856909396, 3745525679));
            }
        }
    }
    var_20 = (max(var_20, var_2));
    #pragma endscop
}
