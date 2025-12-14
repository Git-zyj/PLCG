/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((min((min((8 * 4575657221408423936), 13018421145176698151)), ((min((arr_0 [i_1 + 1] [i_1 + 1]), (arr_3 [i_1 - 1] [i_1 + 1])))))))));
                var_14 ^= (min(var_7, ((~((min((arr_1 [i_0]), (arr_2 [i_0]))))))));
            }
        }
    }
    var_15 = ((((((min(181, 131008)) == (max(var_4, 2053125604))))) & var_4));
    var_16 = (min(var_4, (min((min(4543892944610532967, var_9)), (max(var_8, -5217614502034817420))))));
    var_17 = ((((536870910 ? var_5 : (min(179, 536870888)))) >= (var_12 & var_5)));
    #pragma endscop
}
