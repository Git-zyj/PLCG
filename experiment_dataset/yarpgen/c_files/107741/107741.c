/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (max((max(5435805175329979219, ((~(arr_1 [i_0] [i_0]))))), ((((((~(arr_0 [6])))) || (((var_1 ? var_7 : var_6))))))));
        arr_5 [i_0] = 2657;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (((arr_1 [i_1] [0]) / (((arr_0 [i_1]) ? (arr_0 [i_1]) : 6))));
        var_16 += (min((arr_2 [9]), 13010938898379572396));
        var_17 = (((min(2679, var_5)) - (~4294967288)));
    }
    var_18 *= var_11;
    #pragma endscop
}
