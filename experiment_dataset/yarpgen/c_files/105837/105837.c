/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] = (min((((((min(2147483648, var_5))) ? (arr_1 [i_0] [i_0]) : (arr_3 [i_0] [i_1] [i_0])))), ((-(var_2 - var_3)))));
            var_10 &= (((((arr_1 [i_0 - 1] [i_1]) ? (((arr_2 [i_0] [i_1] [i_0]) % (arr_2 [i_0] [i_0] [i_0]))) : (arr_0 [i_0 - 2])))) ? (((arr_1 [i_0] [i_0]) ? var_5 : (-127 - 1))) : ((((arr_1 [i_0] [i_0 + 1]) ? (arr_3 [i_0] [i_0 - 1] [i_0]) : (arr_1 [i_1] [i_0 - 2])))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_11 = ((max((((!(arr_7 [i_0] [i_0] [i_0]))), (arr_0 [i_0 + 1])))));
            var_12 = 22;
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_13 = (((((1 ? 770794802 : 11994))) ? (((9223372036854775807 ? 127 : 255))) : (((arr_1 [i_0 + 1] [i_0 - 1]) - (arr_9 [i_0 - 1] [i_0 - 1])))));
            var_14 = (arr_10 [i_0 + 1] [i_3]);
            var_15 = (max(var_9, (((arr_5 [i_0] [8] [i_3]) * (~var_8)))));
        }
        var_16 -= (((arr_10 [i_0 + 1] [i_0 - 2]) ? 2147483627 : (arr_10 [i_0 - 2] [i_0 - 2])));
        arr_11 [i_0] [i_0 - 1] = (min((((((arr_6 [i_0] [i_0]) <= (arr_7 [i_0] [i_0] [i_0]))) ? (arr_8 [i_0] [i_0] [i_0 - 2]) : ((-(arr_9 [i_0 - 2] [i_0 - 2]))))), (arr_2 [i_0 - 2] [15] [15])));
        var_17 = ((!(arr_9 [i_0 + 1] [i_0])));
        arr_12 [i_0] = (arr_3 [13] [i_0] [i_0 - 2]);
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_18 = 1968053380700513674;
        arr_16 [i_4] [i_4] = min((((arr_15 [i_4] [i_4]) * (arr_15 [i_4] [i_4]))), (arr_15 [i_4] [i_4]));
    }
    var_19 = (-241887594 || -1593984170);
    #pragma endscop
}
