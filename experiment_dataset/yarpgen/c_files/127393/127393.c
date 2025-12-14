/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_6));
    var_14 |= (var_12 / var_0);
    var_15 = ((var_12 ? (max(var_11, 2195875606946588617)) : ((((((2404554215 ? var_11 : var_12))) ? (-2195875606946588614 / 34359734272) : ((var_1 ? var_3 : var_9)))))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_16 = (var_6 % 3893108993);
        var_17 = ((var_5 ? ((-((2195875606946588617 ? 9223372036854775806 : -2195875606946588614)))) : (min(var_3, (arr_0 [i_0 + 2])))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_18 = -2195875606946588617;
        var_19 = ((-5505391191112486080 ? (arr_3 [i_1] [i_1 - 2]) : (arr_3 [i_1] [i_1 - 1])));
        arr_5 [14] &= (((((102 ? (arr_0 [i_1]) : 5))) ? ((var_6 ? 779914740976937957 : (arr_4 [i_1] [i_1]))) : (arr_3 [2] [i_1 - 1])));
        var_20 = (((((-2195875606946588601 ? -779914740976937957 : (arr_4 [i_1] [i_1])))) ? 62 : -4550956223381863195));
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((((9223372036854775806 ? 1646134913160106282 : 9121982861905137211)) <= (var_6 >= -2195875606946588615)));

        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            var_21 = -5076965422773145955;
            var_22 = (min(var_22, (arr_11 [12])));
            var_23 = (min(var_23, ((((max((arr_3 [6] [i_3 + 1]), (arr_3 [0] [i_3 - 1]))) ? (max(-8085601084035384147, 28966)) : (((2195875606946588595 ? (arr_3 [6] [i_3 - 1]) : var_9))))))));
        }
    }
    var_24 = (min(var_3, var_2));
    #pragma endscop
}
