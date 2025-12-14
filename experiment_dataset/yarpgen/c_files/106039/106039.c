/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 ^= 7317885640416008026;
    var_16 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (min(((~((18446744073709551615 ? 6318158493097099337 : -7950898051948087328)))), -7950898051948087328));
                arr_5 [i_1] = (((((arr_2 [i_0]) & 689)) < (((var_0 > (arr_2 [i_0]))))));
                var_17 = 7950898051948087328;
                arr_6 [i_0] [i_1] = (((((124 * (arr_1 [i_0])))) ? (!11430751819959604416) : (!var_12)));
            }
        }
    }
    #pragma endscop
}
