/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~7626439441613139051) == ((var_1 ? var_6 : (7135741037291621273 % 141))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [15] [i_0] = (max((min(54356, (arr_0 [i_0] [i_0]))), -95));
        arr_3 [i_0] = 983707021;
        arr_4 [i_0] [2] = (arr_0 [2] [2]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [i_1] = ((((arr_1 [i_1] [i_1]) + (arr_1 [i_1] [i_1]))));
        arr_10 [i_1] = ((54356 ? var_12 : ((61804 ? -669907236 : 2063638757706875022))));
    }
    var_17 = min((max((max(var_15, var_8)), ((max(var_10, var_15))))), var_2);

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_14 [i_2] = var_8;
        arr_15 [i_2] = (arr_11 [i_2]);
        arr_16 [i_2] = (((arr_11 [i_2]) ? ((min(((((arr_13 [i_2] [i_2]) <= var_3))), var_5))) : (((arr_13 [i_2] [i_2]) ? var_4 : (arr_13 [i_2] [i_2])))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_20 [1] = ((((max((~var_8), (arr_7 [14])))) ? 16383105316002676594 : (16383105316002676594 - var_11)));

        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {
            arr_25 [i_4] &= (((max(((var_11 ? var_11 : var_12)), ((min(-978392958, (arr_13 [i_4] [i_4])))))) << (var_11 - 529018688)));
            arr_26 [i_4] [16] [i_4] = ((-54356 ^ ((-(((arr_12 [i_3]) ? -875712273232475194 : (arr_21 [i_4])))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
        {
            arr_29 [i_3] [i_3] [i_3] = var_8;
            arr_30 [i_3] = (47725 ^ 12136);
        }
    }
    var_18 = var_3;
    #pragma endscop
}
