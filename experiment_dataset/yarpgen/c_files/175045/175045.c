/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = -9223372036854775803;
        arr_5 [i_0] = ((~((((arr_0 [i_0 - 1]) < (arr_0 [i_0 + 4]))))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_9 [i_0] [i_0 + 1] [4] = -2147483632;
            arr_10 [i_0] [i_1] = 1524356110;
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_13 [i_2] = (((((-(arr_3 [i_2])))) && (~2000347739)));
            arr_14 [i_0] [i_0] = (41897 & 54978);
            arr_15 [i_0] = 359679111;
        }
    }
    var_19 = ((((((var_12 / 121789295) <= var_13))) == var_8));
    var_20 &= 41894;
    #pragma endscop
}
