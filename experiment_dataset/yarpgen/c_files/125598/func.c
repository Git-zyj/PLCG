/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125598
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
    var_20 = ((/* implicit */unsigned short) var_9);
    var_21 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        var_22 += ((/* implicit */short) (unsigned short)14732);
        var_23 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-44))))), (((/* implicit */long long int) (~(-2147483631))))));
        arr_2 [16] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (~(arr_0 [i_0]))))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1] [(_Bool)1])) ? (arr_0 [i_0]) : (((/* implicit */long long int) 947824231U)))) : (arr_0 [(short)1])))));
        arr_3 [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 31525197391593472LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_24 = ((/* implicit */int) min((arr_0 [i_2]), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) var_2)) : (arr_0 [i_1])))));
            arr_11 [i_1] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_0 [i_2])) ? (((((/* implicit */_Bool) var_4)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (-1620399355) : (((/* implicit */int) var_1)))))))));
            var_25 = ((/* implicit */long long int) ((short) 7LL));
        }
        for (long long int i_3 = 1; i_3 < 21; i_3 += 3) 
        {
            var_26 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])), (((unsigned long long int) arr_13 [i_1] [i_3 + 1] [i_3 + 1]))));
            var_27 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)25798)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) ((unsigned short) arr_6 [i_1] [i_3])))))));
        }
        var_28 &= (-((~(((/* implicit */int) arr_15 [i_1])))));
    }
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
    {
        var_29 |= ((/* implicit */long long int) ((var_17) / (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) max((((/* implicit */int) ((short) arr_14 [i_4] [i_4] [i_4]))), (((((/* implicit */int) arr_5 [i_4])) + (((/* implicit */int) var_5)))))))));
    }
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        arr_21 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5] [i_5])) ? (((/* implicit */int) arr_1 [i_5] [i_5])) : (520192)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_5] [i_5]))))) : (((unsigned int) arr_1 [i_5] [i_5]))));
        var_31 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5])))))));
        var_32 = (unsigned short)64486;
        arr_22 [i_5] |= ((/* implicit */unsigned short) arr_13 [i_5] [(unsigned char)2] [i_5]);
    }
}
