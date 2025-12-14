/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 209;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((min(18258634720731249514, (arr_1 [i_0] [i_1])))) ? ((((arr_1 [i_1] [i_0]) ? (arr_2 [i_1] [i_0]) : (arr_3 [i_0] [i_0] [i_0])))) : -18446744073709551615);
                var_17 = (max(var_17, ((((((-14 <= 11170) <= (arr_3 [i_1] [i_1] [i_0]))) ? var_15 : (((((max((arr_3 [i_0] [i_1] [i_0]), var_12))) <= (arr_3 [i_1] [i_1] [i_1])))))))));
                arr_5 [i_0] [i_1] = (((((arr_1 [i_1] [i_0]) > (arr_2 [i_0] [i_1]))) ? 28 : ((((-1 <= (arr_2 [i_1] [i_0])))))));
                var_18 = -113;
                var_19 = ((((1 > (((var_11 ? 1 : 91))))) ? ((55553 ? 65535 : 0)) : ((min(0, 4194303)))));
            }
        }
    }
    #pragma endscop
}
