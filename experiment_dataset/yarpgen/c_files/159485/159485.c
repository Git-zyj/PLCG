/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((max((~-4213048955560302029), ((max(65527, 65527))))), (-1 / 62)));
    var_19 = ((((((9 && 2199022206976) * 65535))) || ((min(((min(65535, 0))), (min(var_8, var_16)))))));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_20 = (min(var_20, (((~(min((min(-554529945360929836, 65535)), 10035)))))));
        arr_3 [i_0] = (((((-3301854682892609211 ? 45121 : var_7))) - (max((((arr_2 [i_0] [i_0]) ? -6532798877669189996 : -3233678685901511178)), 65354))));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            {
                var_21 = (min(var_21, ((min(((((65524 > 9223372036854775788) ? (arr_8 [i_2] [i_1 + 1]) : 15259))), (((arr_8 [i_1 - 1] [i_1 + 1]) + 5237386834205182495)))))));
                arr_9 [18] &= 2700824274118714924;
            }
        }
    }
    #pragma endscop
}
