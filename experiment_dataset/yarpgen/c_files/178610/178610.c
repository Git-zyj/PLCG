/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((~(min(var_4, 339175378))))) ? -2807186903043972074 : 3955791938));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((min(3955791917, (((12228762447817525182 + 18446744073709551615) ? (max(18446744073709551615, var_8)) : (3955791917 * 27655))))))));
                var_16 = ((((!((min((arr_0 [i_0]), var_5))))) ? (((!(arr_1 [i_0 - 1] [i_0 + 1])))) : (((((23623 ? var_1 : 339175389)) <= 28)))));
                var_17 = (arr_2 [i_0]);
                var_18 = (((min(var_4, (-2147483647 - 1))) == (arr_1 [i_0 + 1] [i_0 + 1])));
            }
        }
    }
    var_19 = ((((var_2 ? ((min(var_13, 6629828478472259534))) : ((var_3 ? var_9 : var_11)))) & 3955791918));
    #pragma endscop
}
