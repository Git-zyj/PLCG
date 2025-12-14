/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 3145203234;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((~((+(((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : 3145203227))))));
        var_16 = (!3145203264);
        var_17 = (((arr_2 [i_0]) ? (~131071) : ((2503621542892857501 ? 3145203269 : 4294836224))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_18 = (max(var_18, 137438691328));
            var_19 = (((((((((arr_4 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : -11480))) ? (!3145203264) : 0))) ? ((~(arr_5 [i_1] [i_1] [i_0]))) : ((-((~(arr_1 [i_0])))))));
            arr_7 [i_0] [i_1] [i_0] = (!-90);
            var_20 = (((((((!(arr_6 [i_1] [i_0]))) ? (arr_4 [i_0] [i_0]) : (arr_1 [i_1])))) ? (((arr_6 [i_0] [i_1]) ? 1869199867522652514 : 245)) : (((2147483648 ? 15 : (arr_4 [i_0] [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_21 = (((arr_9 [i_2] [i_0] [i_0]) ? ((134217727 ? -823221901442480004 : 4294836224)) : (-2147483647 - 1)));
            var_22 = (arr_6 [i_0] [i_0]);
        }
    }
    #pragma endscop
}
