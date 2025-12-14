/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= 3097368690440283832;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_8 [i_0] = (((((arr_1 [i_0 - 1] [i_1]) ? (((0 && (arr_2 [i_1])))) : ((((arr_4 [i_0 + 1]) || (arr_2 [i_0 + 1]))))))) ? ((((((arr_3 [i_1] [i_0]) ? (arr_3 [i_0 - 1] [i_1]) : (arr_4 [i_1])))) ? ((-16 ? (arr_6 [i_0 - 1]) : (-9223372036854775807 - 1))) : (((18 ? -43 : (arr_4 [i_0])))))) : (((((arr_7 [i_0 - 1] [i_0 + 1]) && (65535 || 0))))));
                arr_9 [i_0 - 1] [i_1] [i_1] = (((arr_4 [i_0 - 1]) >> (((((-5806 | 224056146) ? -39 : ((32 ? (-9223372036854775807 - 1) : 1)))) + 45))));
                var_17 = (min(var_17, (((1182 - 752257389824424210) ? (((arr_0 [i_0 + 1]) + (arr_0 [i_0 + 1]))) : (((arr_0 [i_0 - 1]) - (arr_0 [i_0 + 1])))))));
            }
        }
    }
    #pragma endscop
}
