/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((!var_6) - (!var_7))))));
    var_11 = (min(var_11, (((var_8 ? 4294967295 : var_2)))));
    var_12 += (!1);

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_13 -= (((-1 | var_1) ? (arr_1 [1] [i_0 - 2]) : -var_3));
        var_14 -= (arr_0 [16]);
        var_15 = 1;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_16 = (min(var_16, (((((((-((((arr_5 [i_1]) == (arr_5 [i_1])))))) + 2147483647)) >> (((var_4 <= (((arr_3 [i_1]) ^ var_9))))))))));
        var_17 ^= ((((!(~7216)))) ^ (arr_5 [i_1]));
        var_18 += (arr_4 [14]);
        arr_6 [20] [i_1] |= ((+((~(((arr_4 [i_1]) + (arr_4 [6])))))));
        arr_7 [i_1] = (1410028383 + (!24));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_19 = (arr_5 [i_2]);
        arr_10 [6] |= (arr_5 [1]);

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_13 [i_2] [i_2] = ((-(arr_2 [i_2])));
            var_20 = (min(var_20, ((((arr_9 [i_2]) >= (((var_2 && (arr_5 [i_3])))))))));
        }
        var_21 -= ((~(arr_11 [6] [i_2] [i_2])));
    }
    #pragma endscop
}
