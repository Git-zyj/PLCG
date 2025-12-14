/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_7 | ((-(var_12 % var_1)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 ^= max(33981, 45179);
        arr_3 [i_0] = (((((arr_2 [i_0]) >> ((((var_14 ? 35916 : 34917)) - 35913)))) > ((min(var_4, 4763)))));
        var_19 -= 51706;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_20 |= (((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1])));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_21 = ((56666 ? 58002 : 4746));
            arr_8 [i_1] [i_2] [i_2] = (((arr_2 [i_2]) ? (((!(arr_5 [i_2])))) : var_7));
            var_22 = ((!(arr_0 [i_1])));
            arr_9 [i_1] [i_2] &= 51706;
        }
    }

    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        var_23 = ((((min((arr_12 [i_3 + 2]), var_7))) ? (max(-14719, (arr_12 [i_3]))) : (((var_16 * 37938) ? ((max(51686, 65532))) : (arr_11 [i_3 + 2])))));
        var_24 |= (((3784 % 4763) > (((arr_12 [i_3]) ? 13811 : ((min(37005, 4750)))))));
        arr_13 [i_3] = (i_3 % 2 == zero) ? (((((min(4756, (min(65522, 60780))))) >> (((arr_10 [i_3] [i_3]) - 58875))))) : (((((min(4756, (min(65522, 60780))))) >> (((((arr_10 [i_3] [i_3]) - 58875)) + 33106)))));
        var_25 &= 55898;
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_26 -= var_15;
        arr_18 [i_4] [i_4] = var_13;
        arr_19 [i_4] [i_4] &= (max((((arr_2 [i_4]) ? 40628 : (arr_14 [i_4]))), (arr_12 [i_4])));
    }
    #pragma endscop
}
