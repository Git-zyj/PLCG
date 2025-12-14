/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(-7680, ((var_9 ? var_4 : 5110595684806648176))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] &= (arr_4 [i_0]);
                var_11 = (max((max((((arr_3 [i_0] [i_1]) ? (arr_5 [i_0]) : (arr_4 [i_0]))), (arr_4 [i_0]))), (((arr_5 [i_1]) ? (arr_4 [i_0]) : (arr_1 [i_0])))));
                var_12 = ((!(((-(arr_1 [i_1]))))));
                arr_7 [i_0] [18] [i_1] = ((66584576 ? 43377 : -66584591));
            }
        }
    }
    var_13 = ((((max((((26629 << (10780 - 10779)))), ((13336148388902903439 ? 11691935265909724146 : 13336148388902903429))))) ? (((((5110595684806648196 >> (-4879788309223885782 + 4879788309223885841)))) ? 1 : (max(var_9, 2709799227126265790)))) : (var_7 - var_6)));
    #pragma endscop
}
