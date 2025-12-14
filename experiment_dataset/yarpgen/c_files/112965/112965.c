/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (~18446744073709551615)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_18 = ((((var_5 ? -20983 : 18446744073709551606))) ? (((113635475 / (max((arr_1 [i_2]), (arr_2 [i_1])))))) : (max(27, ((18446744073709551608 ? var_15 : 10384774377762854559)))));
                    var_19 = (max((4735 | -5470), (min((arr_5 [i_1] [i_1] [13]), var_1))));
                    var_20 = (max(var_20, ((min(3072, 4181331837)))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    arr_11 [i_3] [i_1] [i_0] = 210134297;
                    var_21 = ((~(arr_4 [i_0 - 1] [i_1])));
                    var_22 = 20977;
                }
                var_23 ^= ((853255864367125640 >= (((arr_2 [i_0 - 2]) ^ -24497))));
            }
        }
    }
    #pragma endscop
}
