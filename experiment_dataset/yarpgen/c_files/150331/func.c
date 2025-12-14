/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150331
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) 4994150474382218346LL)) ? (1U) : (3970602870U)));
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) 2297052601U)) : (9223372036854775807LL)));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_12 += ((/* implicit */int) ((((((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (var_6)))) ? (((((/* implicit */_Bool) -9223372036854775790LL)) ? (((/* implicit */unsigned long long int) 962190558U)) : (1729993813368757805ULL))) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) | (((/* implicit */unsigned long long int) (~(arr_2 [i_0] [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) arr_3 [i_0]);
        arr_5 [i_0] = (~(((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_1 [i_0]))));
    }
    for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        var_13 = ((/* implicit */long long int) var_0);
        arr_9 [i_1] [i_1] = ((/* implicit */long long int) var_7);
        arr_10 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (arr_7 [i_1 - 1] [i_1 - 1]) : (arr_7 [i_1 - 1] [i_1 - 1]))) / (min((((/* implicit */long long int) (~(((/* implicit */int) var_9))))), (((((arr_6 [i_1]) + (9223372036854775807LL))) >> (((arr_8 [i_1] [i_1 - 1]) - (56692905)))))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (arr_7 [i_1 - 1] [i_1 - 1]) : (arr_7 [i_1 - 1] [i_1 - 1]))) / (min((((/* implicit */long long int) (~(((/* implicit */int) var_9))))), (((((arr_6 [i_1]) + (9223372036854775807LL))) >> (((((arr_8 [i_1] [i_1 - 1]) - (56692905))) - (910048440))))))))));
        arr_11 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 3970602887U)) : (arr_6 [i_1])))) ? (var_5) : (((((/* implicit */_Bool) var_6)) ? (arr_7 [i_1] [i_1]) : (((/* implicit */long long int) var_6)))))) <= (((((((/* implicit */long long int) var_3)) - (arr_6 [i_1 + 1]))) ^ ((+(arr_6 [i_1 + 1])))))));
    }
    for (signed char i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
    {
        arr_16 [i_2] [i_2] = ((/* implicit */long long int) ((int) ((-9223372036854775803LL) + (((/* implicit */long long int) 4047122343U)))));
        var_14 *= ((/* implicit */int) (-9223372036854775807LL - 1LL));
    }
    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_4 = 2; i_4 < 16; i_4 += 4) 
        {
            arr_22 [i_3] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3970602870U)) ? (((/* implicit */unsigned int) -1)) : (4047122334U)))) ? (arr_13 [i_3]) : (((((/* implicit */_Bool) ((int) arr_6 [i_3]))) ? (324364402U) : (((/* implicit */unsigned int) 511))))));
            var_15 = ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_15 [i_4])) - (var_2)))))) ? (((/* implicit */long long int) (-(arr_14 [i_3])))) : (arr_17 [i_4] [i_3]));
            var_16 = ((/* implicit */int) (-(var_1)));
        }
        for (signed char i_5 = 4; i_5 < 18; i_5 += 1) 
        {
            arr_25 [i_5] = ((/* implicit */long long int) (~(1506289371U)));
            var_17 += var_9;
            var_18 ^= ((/* implicit */int) min((((/* implicit */long long int) arr_14 [i_5 - 3])), (((long long int) -9223372036854775803LL))));
        }
        arr_26 [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) 520))) ? (((arr_24 [i_3] [4LL]) / (arr_24 [4LL] [4LL]))) : (((int) arr_24 [i_3] [0ULL]))));
    }
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_0))));
}
