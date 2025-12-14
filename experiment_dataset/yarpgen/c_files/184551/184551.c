/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, -33554432));
    var_20 = (min(var_20, ((((min(var_1, var_8)))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (min(var_4, ((2964 ? -13849 : ((min(var_5, (arr_1 [12]))))))));
        var_21 ^= ((((4309107494371223693 ? var_6 : (arr_0 [i_0 + 1]))) + ((var_2 ? (arr_1 [i_0 + 2]) : (arr_0 [i_0 + 3])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = ((((!(arr_5 [i_1] [i_1]))) ? var_3 : var_18));

        for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_23 = max(((max((110 && 0), (max((arr_1 [i_1]), 0))))), (max(-29056, var_7)));
            var_24 = ((2964 + (arr_0 [i_2])));
            arr_8 [i_2] = (((arr_4 [i_1]) || ((((min(0, -2964)) - (((max(96, 7)))))))));
            arr_9 [5] [9] [i_1] = -17716;
            arr_10 [i_1] [i_1] [i_2] = (min((((((min(7, var_8))) ? ((max(17716, (arr_4 [i_1])))) : 721))), (min(var_13, (max((arr_1 [i_1]), -2130589303220225371))))));
        }
        for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_13 [i_1] [i_1] [i_1] = ((((((min(-1, -2964))) ? ((175 << (((arr_5 [i_3] [12]) - 15747729376633223481)))) : var_3)) != (arr_12 [i_1] [i_1])));
            arr_14 [i_1] [i_1] [7] = -13845;
            var_25 = (min(var_25, ((max(21, ((~(arr_11 [i_3 + 1] [i_3 - 2]))))))));
            var_26 = (min((((arr_12 [i_3 + 1] [i_3 + 1]) / 65535)), 0));
        }
    }
    var_27 = (((max(-20841, 5748923573835729528))));
    #pragma endscop
}
