/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~((((1980698542 && var_5) || var_6)))));
    var_18 = ((~(((!0) - (128 / var_13)))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_0] &= (4294967295 < 3075405049);
            var_19 = (((((((min(-4327506724471868233, (arr_2 [i_0] [i_0] [i_0])))) ? (!-4073204829153161434) : var_15))) ? 7101799038383083469 : (~252)));
        }
        var_20 = ((20709 ? -16358235951370432450 : -27479));
    }
    #pragma endscop
}
