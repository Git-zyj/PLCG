/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111932
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
    var_15 = ((/* implicit */unsigned char) var_11);
    var_16 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_17 = var_5;
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) var_3);
            arr_7 [i_0] = ((/* implicit */int) 18446744073709551615ULL);
            arr_8 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)235))));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)206)) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0]))), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) var_5)) ^ (var_10))))))));
        }
        for (int i_2 = 4; i_2 < 15; i_2 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) var_4);
            arr_14 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(var_0)))))) ? (((((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */unsigned long long int) 1011247347)) : (307830744851866145ULL))) % (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_4)) * (((/* implicit */int) var_8)))), (var_10))))));
        }
        arr_15 [i_0] = ((/* implicit */short) (-(min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_3)))))))));
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) min((((2631537966550381593ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_13 [i_0])))))));
    }
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
    {
        arr_19 [14U] = ((/* implicit */int) arr_13 [4]);
        arr_20 [i_3] = ((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (var_5)));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_8))));
    }
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        var_20 -= ((/* implicit */short) (!((!(((/* implicit */_Bool) ((unsigned char) var_10)))))));
        arr_25 [i_4] = ((/* implicit */_Bool) (short)32767);
        arr_26 [i_4] = ((/* implicit */_Bool) (signed char)45);
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
    {
        arr_29 [i_5] [i_5] = ((/* implicit */short) (+(((long long int) arr_12 [i_5] [(unsigned char)9] [(short)10]))));
        arr_30 [i_5] = ((/* implicit */unsigned char) ((arr_4 [i_5]) != (arr_4 [i_5])));
        arr_31 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) var_13)) & (((/* implicit */int) (signed char)52))));
        arr_32 [i_5] = ((/* implicit */signed char) var_0);
        var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_1 [(unsigned char)2]))) ? (((unsigned int) 15815206107159170023ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62)))));
    }
    var_22 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((signed char) ((signed char) var_10)))), ((+((-9223372036854775807LL - 1LL))))));
}
