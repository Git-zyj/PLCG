/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((7753306575895859912 ? ((16652173656260538058 ? 10693437497813691703 : 7)) : (10693437497813691703 & 16974341635926125782))), (max((var_11 | 798705352), var_7))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = (max(-10897, 10693437497813691703));
                    var_14 = (arr_6 [i_0]);
                }
            }
        }
    }
    var_15 = ((18446744073709551615 ? (((max(var_5, var_3)))) : (max((var_7 & var_0), (!215)))));
    var_16 *= (((((~(var_7 & 236)))) ? -var_0 : (((!((min(var_8, var_9))))))));
    #pragma endscop
}
