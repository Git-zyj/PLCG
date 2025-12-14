/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108356
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
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) 4022119191U))));
    var_16 = ((/* implicit */signed char) (unsigned short)58173);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) arr_1 [17]);
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) arr_0 [i_0]))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))) != (arr_1 [i_1])));
            arr_6 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))));
            var_21 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)255))));
            var_22 = ((/* implicit */short) 11451092704359153989ULL);
        }
        for (short i_2 = 2; i_2 < 23; i_2 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) 1040384);
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0])) / (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) (unsigned short)25379)) : (((/* implicit */int) ((arr_3 [i_0]) == (((/* implicit */long long int) arr_7 [i_2] [9LL])))))));
            var_24 = ((/* implicit */_Bool) (-((-(arr_1 [i_0])))));
        }
    }
    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 4) 
    {
        var_25 = ((/* implicit */int) ((unsigned char) 3ULL));
        var_26 = ((/* implicit */int) max((0ULL), (11451092704359153987ULL)));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) ((arr_1 [i_3]) >> (((max((arr_10 [i_3 + 1]), (((/* implicit */unsigned long long int) (short)-300)))) - (18446744073709551260ULL)))));
        var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((6995651369350397627ULL), (((/* implicit */unsigned long long int) (signed char)22))))) ? (var_13) : (min((arr_1 [i_3]), (((/* implicit */long long int) arr_11 [i_3] [(short)3])))))))));
        var_28 = ((/* implicit */unsigned int) max((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) max((arr_12 [i_3]), (arr_7 [i_3] [i_3])))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_11)) ? (arr_2 [i_3] [i_3]) : (var_4))), (-867446619))))));
    }
    for (unsigned char i_4 = 3; i_4 < 12; i_4 += 1) 
    {
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((11451092704359153989ULL), (((/* implicit */unsigned long long int) 5662504762910778649LL))))) ? (((/* implicit */int) (short)-309)) : ((+(((/* implicit */int) (short)-13629))))));
        var_30 = ((/* implicit */unsigned char) (-(((int) ((unsigned long long int) -3475601139671096352LL)))));
    }
    for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        var_31 = ((int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)12906)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8801))) : (var_13)))), (((((/* implicit */_Bool) 11451092704359154015ULL)) ? (11451092704359153995ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52815)))))));
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_5] [(short)21])) ? (((/* implicit */int) arr_16 [i_5])) : (((((/* implicit */_Bool) arr_2 [i_5] [i_5])) ? (((((arr_2 [i_5] [i_5]) + (2147483647))) >> (((((/* implicit */int) arr_8 [3ULL] [i_5])) - (23686))))) : (((/* implicit */int) arr_16 [i_5]))))));
        var_33 = ((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */short) (unsigned char)127)), ((short)313)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25192)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-315))))) ? (arr_3 [i_5]) : ((-(-4395630730456479024LL)))))));
        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */unsigned long long int) min((arr_1 [i_5]), (arr_1 [i_5])))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (11451092704359154028ULL)))));
        var_35 = ((/* implicit */unsigned short) min((18446744073709551605ULL), (11451092704359153997ULL)));
    }
}
