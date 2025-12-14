/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_15 = ((((((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0])))) ? (((!(arr_0 [i_0] [i_0])))) : (arr_2 [i_0 - 1])));
        arr_3 [i_0] = (-32767 - 1);
        var_16 = ((arr_0 [i_0] [i_0]) || (arr_2 [i_0]));
        arr_4 [i_0] = ((((((arr_0 [i_0] [i_0]) ? (arr_1 [6] [1]) : (arr_2 [i_0])))) ? ((~(arr_2 [i_0]))) : (((arr_2 [i_0]) >> (4266721852 - 4266721850)))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_17 = (((arr_7 [i_0 - 1]) ? (arr_5 [i_0 - 1]) : (arr_7 [i_0 + 1])));
            var_18 = (arr_2 [i_0]);
            arr_8 [i_0 + 1] [i_0 + 1] = (!5269);
            var_19 = (((arr_0 [i_0 - 1] [i_1]) > (arr_2 [i_0 + 1])));
        }
    }
    var_20 = (~-4284965994523221563);
    #pragma endscop
}
