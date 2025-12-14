/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((((var_3 || (-3465 - var_7)))) ^ ((~(var_3 ^ var_0))))))));
    var_14 = (31 - 1);
    var_15 = ((-((((-605987893 != 1) || (1 != var_11))))));
    var_16 = ((~((~(!var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (((((19185 ^ var_0) <= -1)) || ((((!(arr_1 [i_0] [i_1]))) && ((var_10 != (arr_2 [i_0])))))));
                arr_5 [i_0] = (i_0 % 2 == zero) ? (((((~((7141662369542298957 >> (((arr_2 [i_0]) - 3741395389116877541)))))) ^ (((~(24659 - var_0))))))) : (((((~((7141662369542298957 >> (((((arr_2 [i_0]) - 3741395389116877541)) - 4657846088779361520)))))) ^ (((~(24659 - var_0)))))));
            }
        }
    }
    #pragma endscop
}
