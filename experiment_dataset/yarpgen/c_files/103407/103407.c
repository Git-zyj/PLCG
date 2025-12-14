/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!5896895121152051648);
    var_16 |= (((((-((var_13 ? 1 : 6337284613083561386))))) ? (min(var_14, var_2)) : (min((max(114, var_10)), var_5))));
    var_17 = var_8;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = (arr_2 [i_0]);

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_19 ^= 8468781029182201202;

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_20 -= ((var_8 ? var_2 : (~8445165419598765704)));
                var_21 = 102;
                arr_9 [i_2] = -3748;
                arr_10 [i_2] = 5896895121152051629;
                var_22 = var_5;
            }
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            var_23 = var_10;
            var_24 = 18308013175383711728;
        }
        arr_14 [i_0] = (arr_13 [i_0] [i_0]);
        var_25 = -633601047;
    }
    var_26 = (max(var_26, 102));
    #pragma endscop
}
