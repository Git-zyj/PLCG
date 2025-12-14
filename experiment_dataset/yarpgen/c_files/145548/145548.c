/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((((((var_6 ^ var_6) + (((var_12 >> (var_8 - 10615416315963976002))))))) || ((((1 % var_14) + (var_0 == var_4)))))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [6] |= (((((((((-9223372036854775779 + 9223372036854775807) << (var_2 - 8999785411661214276))) < (((((arr_0 [i_0]) < var_8)))))))) < ((((((var_14 <= (arr_1 [i_0]))))) ^ ((1111416004891918000 * (arr_0 [i_0])))))));
        var_20 = (max(var_20, (((((((((var_0 && (arr_0 [i_0]))) || (var_7 || 122))))) * (((var_12 / var_2) % (var_13 | var_4))))))));
        var_21 = (max(var_21, ((((((0 || 15560324640817995421) || ((var_12 || (arr_0 [5]))))) || (((((arr_0 [i_0]) && var_10)) || (((arr_0 [i_0]) || -3986348246872811426)))))))));
        arr_3 [12] &= (((((var_16 - -24882) + ((var_12 * (arr_1 [i_0]))))) | ((((((((arr_0 [i_0]) % (arr_0 [i_0])))) && (var_10 | var_9)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = ((((((-24882 != (arr_5 [i_1]))))) + (var_0 | -9223372036854775779)));
        arr_7 [i_1] [i_1] = (((((((arr_5 [i_1]) > 5242934925544806083)))) > ((17335328068817633616 << (arr_4 [i_1])))));
    }
    var_22 = ((((((65521 && 17335328068817633588) || (325 || 9707)))) | ((((var_9 >= var_10) && (var_4 % var_2))))));
    var_23 = (((((var_5 / var_8) + (var_13 / 107596837))) + ((((3505 & 122) ^ (var_10 < var_11))))));
    var_24 = (max(var_24, ((((((-27 - 102) + 2147483647)) << (((((509975871964692897 || 14) << (((var_1 - 34084860461056) - 18446709988849104234)))) - 65536)))))));
    #pragma endscop
}
