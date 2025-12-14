/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_11 || -114);
    var_20 = (min(var_20, ((((min(-1, 119))) ? -1300 : (((((var_0 ? var_9 : var_17))) ? (((min(1, 65513)))) : (0 & var_1)))))));
    var_21 = 255;
    var_22 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_23 = var_1;
                var_24 = (((min(384, 12233675477412168934)) % ((((((46082 ? (arr_0 [i_0]) : (arr_0 [i_0])))) / ((40853 ? 14981 : (arr_3 [i_0]))))))));
                arr_5 [i_0] = ((max(((~(arr_2 [i_1]))), (((var_5 || (arr_4 [i_0] [i_0] [4])))))));
            }
        }
    }
    #pragma endscop
}
