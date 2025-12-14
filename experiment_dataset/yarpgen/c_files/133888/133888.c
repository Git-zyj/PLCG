/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_10 = (((25 >= (arr_5 [i_0] [i_1]))) ? (min((arr_6 [i_1 - 1] [i_1 - 2]), var_0)) : (((((min(6421586313609563542, 20)) != (((((arr_0 [i_0]) != var_9)))))))));
                var_11 = (arr_3 [i_0] [i_0]);
                var_12 &= (min(var_7, ((((min(25419, (arr_5 [i_1] [i_0])))) ? 18446744073709551602 : ((min((arr_0 [i_1]), var_4)))))));
                var_13 = (min(60790275469742355, (arr_4 [20] [i_0] [i_1])));
                arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 2] = (min((min((arr_4 [i_0] [i_1 - 1] [i_0]), 95)), ((((225812637 ? (arr_6 [i_1] [i_1]) : -26894))))));
            }
        }
    }
    var_14 = (min(((min(var_6, (!1292929282)))), var_9));
    var_15 += (((min(var_9, var_7)) - 37461));
    var_16 = ((((min((((var_6 ? var_9 : var_8))), (min(-3, var_4))))) || var_1));
    var_17 *= ((var_9 == (((~-31058) ? (((var_8 ? 9564 : var_8))) : var_1))));
    #pragma endscop
}
