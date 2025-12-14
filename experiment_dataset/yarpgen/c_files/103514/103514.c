/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (min((max(-4142957883, var_13)), var_0));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            var_20 = ((-(arr_1 [i_1 + 3] [i_1 + 4])));
            arr_5 [i_0] [i_1] = ((((((arr_2 [i_0] [i_0] [i_1]) | -152009412))) || -1375224121));
        }
        var_21 = (min(1, 4142957883));
        arr_6 [i_0] = (arr_1 [i_0] [i_0]);
    }
    var_22 = ((var_8 + var_11) * (((1 ? 869485337 : ((max(1, 1)))))));
    #pragma endscop
}
