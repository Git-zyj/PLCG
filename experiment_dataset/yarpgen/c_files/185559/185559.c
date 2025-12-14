/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (min(170874936, 237))));
    var_19 = (((((~(var_14 | var_4)))) ? (!var_15) : ((-(max(4294967295, 114))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = ((((67 ? ((var_4 & (arr_0 [i_0] [i_0]))) : (arr_1 [i_0]))) + ((((!((-18948 || (arr_0 [i_0] [i_0])))))))));
        arr_2 [i_0] = (max(((~((var_7 << (((arr_1 [i_0]) - 18000013528578011345)))))), var_10));
        var_21 = ((!(((~(-127 - 1))))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_22 = (((min(-96, -1)) >= var_17));
            var_23 = (((arr_1 [i_1]) && ((min((min(var_6, 14)), (var_4 == 1))))));
        }
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_12 [i_2] = (min((arr_9 [i_2]), (((((min(1809820392, var_17))) >= ((1015891027 ^ (arr_10 [i_3]))))))));
            var_24 &= (arr_7 [7]);
            arr_13 [i_2] [i_3] [i_3] = (((arr_11 [i_3]) ? (min((((var_16 + (arr_8 [i_2])))), (((arr_10 [i_2]) + 6582071443227855521)))) : (arr_9 [i_2])));
        }
        arr_14 [i_2] = (((((max(var_8, var_1)) ? (((min(var_11, 125)))) : (arr_10 [i_2])))));
    }
    #pragma endscop
}
