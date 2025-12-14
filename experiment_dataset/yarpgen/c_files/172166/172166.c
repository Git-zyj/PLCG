/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = (((((((-1 >= 5316315653728473002) < -var_14)))) + (((arr_0 [i_0]) ? var_10 : (arr_0 [i_0])))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_17 ^= (((((1 ? 9007199254478848 : var_4))) && (~10053)));
            arr_4 [i_1] [i_1 + 1] = (arr_2 [i_1 - 3]);
            var_18 = 12084847253699110093;
            arr_5 [i_1] = ((-10066 ? 1 : -23644));
        }
    }
    var_19 = ((-(((31223 << (922663239660504378 - 922663239660504364))))));
    #pragma endscop
}
