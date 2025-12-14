/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15165
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
    var_20 ^= ((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (+(4294967295U)))))))));
    var_21 = ((/* implicit */short) var_15);
    var_22 -= ((/* implicit */short) ((signed char) min((max((((/* implicit */unsigned int) (short)0)), (4294967295U))), (((/* implicit */unsigned int) (signed char)64)))));
    var_23 += ((/* implicit */signed char) (~(4294967295U)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_24 = ((/* implicit */_Bool) var_13);
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((signed char) var_19)), (((/* implicit */signed char) arr_0 [(short)1] [i_0]))))) ? (((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) 0U))))) ? (((var_5) + (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) arr_2 [i_0])))) : ((+((~(17399272834895592033ULL)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_7 [i_1] = ((((((/* implicit */_Bool) var_7)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))) != (((/* implicit */unsigned long long int) 0U)));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
        var_25 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 1047471238813959582ULL)) ? (4499875375850257839ULL) : (((/* implicit */unsigned long long int) 4294967295U))));
    }
    for (short i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), ((-((~(((arr_14 [9U] [9U] [i_4]) ? (17399272834895592033ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18372)))))))))));
                    arr_16 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (min((0ULL), (((/* implicit */unsigned long long int) (short)18372))))))) ? (((/* implicit */unsigned int) min((var_17), (((/* implicit */int) var_6))))) : (4294967295U)));
                    var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (max((var_1), (((/* implicit */unsigned long long int) (short)26068)))) : (((/* implicit */unsigned long long int) (-(0U)))))) * (min((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL)))));
                    arr_17 [i_2] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) % (((((/* implicit */_Bool) ((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))) ? (((/* implicit */unsigned long long int) ((1228555720) - (((/* implicit */int) var_12))))) : (((1047471238813959582ULL) >> (((((/* implicit */int) (short)-6902)) + (6921)))))))));
                    arr_18 [i_2] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((arr_13 [0ULL]) - (var_1)))))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) <= ((+(((/* implicit */int) (short)0))))))) : (var_2)));
                }
            } 
        } 
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) 0ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_19 [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (short)1920))))), (var_13)))), (((16287857981717340443ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-27342), (var_12)))))))));
    }
}
