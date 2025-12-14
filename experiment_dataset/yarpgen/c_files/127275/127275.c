/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((min((min(var_12, 41830)), (min(var_8, 65535)))))) == (((var_13 | 0) >> (((min(var_7, 1331700837)) - 19164))))));
    var_17 = (max(var_17, ((((((min(var_4, var_10))) * ((min(var_10, var_9))))) / (min(((min(var_10, var_12))), (65535 / 65535)))))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_18 = (max((min((min((arr_1 [i_0]), 0)), ((min(0, var_8))))), (((((min((arr_2 [i_0]), var_4))) << ((min(var_7, (arr_3 [i_0])))))))));
        var_19 = (max(var_19, (((((((((arr_2 [i_0]) * 8096))) * (max(var_15, (arr_1 [14]))))) >> (((min((min(-2147483617, (arr_3 [i_0]))), ((max(var_4, var_12))))) - -2147483637)))))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (i_1 % 2 == zero) ? ((min(((((min(0, (arr_5 [11]))) != (((var_10 >> (var_1 + 31664))))))), ((((((min(var_9, var_1))) + 2147483647)) >> (((((arr_4 [i_1]) & var_0)) - 380624864214538227))))))) : ((min(((((min(0, (arr_5 [11]))) != (((var_10 >> (var_1 + 31664))))))), ((((((min(var_9, var_1))) + 2147483647)) >> (((((((arr_4 [i_1]) & var_0)) - 380624864214538227)) - 18429293569659355160)))))));
        var_20 = (min((((min(var_14, var_7)) % (((arr_5 [i_1]) - (arr_3 [i_1]))))), (min((var_15 ^ var_12), ((min(139, (arr_3 [i_1 - 1]))))))));
        arr_8 [i_1] = (((min((min(1, (arr_4 [i_1]))), ((min((arr_3 [i_1]), var_8))))) >> (((min((var_7 * 18446744073709551615), (1705136325 ^ 0))) - 1705136287))));
    }
    #pragma endscop
}
