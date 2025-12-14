/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_12 - -8546769150641362584);
    var_17 = var_0;
    var_18 = (((((min(var_1, var_8))) ? 8546769150641362607 : 3928111138)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 += (arr_1 [i_0] [i_1]);
                var_20 += ((((((arr_1 [i_1] [i_0]) ? (arr_1 [i_1] [i_0]) : 111))) ? (~8546769150641362612) : ((~(arr_1 [i_0] [i_1])))));
                var_21 = ((((((min(1556115049, var_10))) ? -895784171 : 9223372036854775778)) <= ((min(2738852242, (arr_2 [i_1]))))));
            }
        }
    }
    #pragma endscop
}
