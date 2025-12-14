/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min((min(18446744073709551615, 18446744073709551614)), (max(65534, 10))))) ? ((((var_0 + 2147483647) >> ((((max(var_9, var_0))) + 116))))) : ((var_7 + ((var_11 ? var_13 : 959692347803990469))))));
    var_15 *= (((~((max(var_8, var_9))))));
    var_16 ^= 65532;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (arr_0 [i_0] [i_1]);
                arr_6 [i_0] [i_1] [i_0] = (min((((+((min((arr_2 [i_1]), var_9)))))), (max(var_3, ((max((arr_3 [i_0]), (arr_3 [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
