/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (!var_6)));
    var_17 = (max(var_17, var_1));
    var_18 = ((+(max((!3755716253109483839), (4290692156 & var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [19] [i_0 - 1] = (--362998095325065024);
                var_19 ^= max((((arr_5 [i_0] [i_0 - 1] [i_0 - 1]) ? 14691027820600067776 : (arr_5 [i_0] [i_0 + 1] [i_0 + 1]))), ((((arr_1 [i_0 - 1] [i_0 - 2]) / (-127 - 1)))));
                var_20 = (min(var_20, (((~((3755716253109483858 << (((arr_0 [i_0] [i_0 - 1]) - 38845)))))))));
                arr_8 [i_1] = (((max(362998095325065026, -11015)) << (((max(362998095325065026, (arr_1 [i_0] [i_0 - 1]))) - 362998095325065025))));
            }
        }
    }
    #pragma endscop
}
