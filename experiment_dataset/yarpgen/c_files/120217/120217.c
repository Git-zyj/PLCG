/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((((min(3, 4294967295))) ? (max(var_1, var_12)) : var_8)), ((var_6 ? var_14 : var_4))));
    var_16 = ((((((319371767 > -296027203) % var_3))) ? (((!(var_10 / 3)))) : var_14));
    var_17 = (((var_14 + 2147483647) << ((((var_5 ? 10783566835857974736 : var_9)) - 18446744073709551570))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_18 = (min(((max((((34698 ? 6175 : 1))), (arr_2 [i_0] [i_0])))), (((arr_0 [4]) ? (min(319371791, 7663177237851576891)) : (((var_3 ? 2098311310 : (arr_1 [i_0]))))))));
        arr_3 [i_0] [i_0] = (max(((max((((arr_1 [3]) ? 0 : (arr_0 [i_0]))), (arr_1 [i_0])))), (max(((max(-273031215, (arr_0 [i_0])))), ((-1 ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (arr_4 [i_1] [i_1]);
        var_19 = ((((max(1, ((377206884 ? 3975595505 : 319371787))))) != -7735425360344252959));
    }
    #pragma endscop
}
