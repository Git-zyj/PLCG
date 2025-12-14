/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (244 == 0);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = ((((((arr_1 [i_0]) - var_19)) - (((11 + (arr_1 [i_0])))))) - ((((var_12 + var_11) - ((((arr_2 [i_0]) - (arr_1 [i_0]))))))));
        var_22 = ((((((((var_1 == (arr_0 [i_0] [i_0]))))) ^ (244 | 274877906943))) | (((((244 < 26187) && (((var_15 + (arr_0 [i_0] [i_0]))))))))));
        var_23 = ((((((((var_5 >= (arr_2 [i_0]))))) * (((arr_0 [i_0] [i_0]) & 2704698309)))) - ((((((2023985010352033480 << (143 - 141))) != ((((arr_1 [i_0]) - 8860)))))))));
        var_24 = (min(var_24, (((((((1542633482348501796 << var_5) || (-1219278697 / 30720)))) - (((((((arr_2 [i_0]) + (arr_3 [i_0])))) || (((arr_1 [i_0]) || (arr_2 [i_0])))))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_25 = (((((arr_4 [i_1] [i_1]) & var_19)) < (23322 - var_6)));

        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            arr_9 [1] [i_2] [1] &= (((255 * var_14) == ((((arr_7 [i_1] [i_1] [i_1]) != 65)))));
            arr_10 [i_1] = (((46 - var_7) * (((((arr_6 [i_1] [i_1] [i_1]) != (arr_8 [i_1] [i_1])))))));
            var_26 *= ((var_18 > 65535) % (24074 % 229));
        }
        var_27 = (((((arr_8 [i_1] [i_1]) > var_6))) > (((1 == (arr_8 [i_1] [i_1])))));
    }
    var_28 = (7018414770483321502 ^ 248);
    #pragma endscop
}
