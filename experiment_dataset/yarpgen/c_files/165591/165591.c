/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [8] [8] = (15638342319243576343 ? 1 : (~1));
                arr_5 [i_1] [i_1] [i_0] |= ((1 ? var_4 : -1));
            }
        }
    }
    var_11 = ((var_2 >= var_6) ^ (~var_5));

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (2147483638 - -1);
        var_12 ^= (arr_7 [i_2]);
        arr_10 [i_2] = ((((min(var_1, 15))) >= (var_5 ^ -26)));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_13 = (min((((((((-32767 - 1) ? var_2 : var_5))) ? (((((arr_12 [i_3]) >= -1)))) : (((arr_12 [i_3]) ? var_1 : -1961321594373627006))))), (min(var_2, ((var_7 ? var_6 : 132120576))))));
        arr_13 [6] |= ((((((min(var_7, var_4)))) == ((19 ? -1 : 4)))));
        var_14 = (1 >= 1);
        arr_14 [1] = ((-(min((arr_11 [i_3 - 1]), (arr_11 [i_3 - 1])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_15 = ((18446744073709551615 - 18446744073709551613) ? (arr_17 [i_4]) : -3);
        var_16 = (min(var_16, ((var_10 ? (arr_16 [i_4]) : (arr_16 [i_4])))));
    }
    #pragma endscop
}
