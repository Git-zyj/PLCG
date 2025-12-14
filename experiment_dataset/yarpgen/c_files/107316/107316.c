/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    var_10 = ((((((((((arr_1 [i_0] [i_0]) / (arr_6 [i_0] [i_0] [i_0] [i_0])))) && ((((-2147483647 - 1) - 18446744073709551609))))))) < (((((arr_3 [i_0]) ^ var_9)) - (((((-2147483647 - 1) < var_5))))))));
                    var_11 += (((((-2520167479379615770 <= -2520167479379615779) << (((arr_0 [i_0]) >> var_5)))) >> ((((var_6 && 2520167479379615770) >= (var_1 && var_8))))));
                }

                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_12 = (i_0 % 2 == zero) ? ((((((2520167479379615770 - -32753) / ((((arr_0 [i_1]) & (arr_2 [i_1] [i_0])))))) >= (((((var_0 > var_8) && (var_7 % var_2)))))))) : ((((((2520167479379615770 - -32753) * ((((arr_0 [i_1]) & (arr_2 [i_1] [i_0])))))) >= (((((var_0 > var_8) && (var_7 % var_2))))))));
                    var_13 += (((((((arr_6 [i_0] [i_0] [i_0] [i_0]) / -22)) * (((49152 * (arr_3 [i_0])))))) / ((((((arr_7 [i_0] [i_0] [i_0] [i_0]) ^ var_6)) ^ (var_4 | var_1))))));
                    var_14 = (max(var_14, ((((((((var_8 < (arr_7 [i_0] [i_0] [1] [i_0])))) * ((75 >> (((arr_8 [i_3] [1] [i_1] [i_1]) - 1956837729)))))) <= (((390007710 < 1) - (((arr_7 [0] [i_1] [i_1] [16]) * var_7)))))))));
                }
                arr_9 [i_0] [i_1] = (((((var_4 ^ var_2) * (16431674180190923165 % var_2))) <= (625 / 9223372036854775807)));
            }
        }
    }
    var_15 = (((((var_2 && 0) || (1487282511 || var_9))) && (((var_2 || var_1) && (var_7 && var_6)))));
    #pragma endscop
}
