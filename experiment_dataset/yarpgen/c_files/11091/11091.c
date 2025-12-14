/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = (min((min(((min(var_7, (arr_7 [i_0])))), (min((arr_5 [i_1]), (arr_6 [i_2] [i_1]))))), (((((((arr_7 [i_0]) ? (arr_0 [i_0]) : var_9))) ? 0 : ((9 ? 2013265920 : -7698)))))));
                    arr_9 [i_1] [i_2] [i_1] [i_1] |= ((((min(-576460752303423488, 3237394384782995960))) ? (((1329315244082706496 ^ 8355960598602637095) << (((min(var_6, 2087551797)) - 60178)))) : (min(27876, (max(9223372036854775807, 2570))))));
                }
            }
        }
    }
    var_11 = ((((min(8103, 4080))) ? (((((var_8 ^ var_10) || ((min(10500453618573680781, 122))))))) : (((((var_8 ? var_7 : var_1))) ? var_3 : (min(var_10, var_9))))));
    #pragma endscop
}
