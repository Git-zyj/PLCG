/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = ((((((max(var_13, var_9))) >> (!var_14))) * ((((arr_1 [i_0]) == ((7832 ? 5727 : 8977)))))));
                arr_4 [i_1] &= ((((((212 & var_8) == var_14))) > ((((~112) != var_7)))));
                var_18 = (((max((arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1]), (arr_2 [i_1] [i_1 + 1] [i_1 + 1]))) / (((-19 ? (var_6 + 40078) : 8977)))));
                var_19 = (min(-8388974950873098838, (((!((max(var_3, 1))))))));
                var_20 = ((1 ? 4161536 : 255));
            }
        }
    }
    var_21 *= ((min(((var_6 ? 7832 : 31)), (var_1 != var_5))));
    var_22 = (((((~(56558 > 65536)))) ? (((!((min(var_7, var_9)))))) : (19 > var_5)));
    #pragma endscop
}
