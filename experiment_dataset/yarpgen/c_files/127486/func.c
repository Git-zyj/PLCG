/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127486
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_11 [i_2] = (~(2142361143554356593ULL));
                    arr_12 [i_0] [i_2] = ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_2 + 3] [i_1 + 1] [i_0])) ? (arr_5 [i_0] [i_1 + 1] [(_Bool)1]) : (arr_5 [i_0] [i_0] [i_0])));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_1)) : (max((((/* implicit */unsigned int) ((unsigned char) 17988408239112568304ULL))), (var_12)))));
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_6))));
    /* LoopSeq 3 */
    for (int i_3 = 2; i_3 < 20; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            var_21 &= ((/* implicit */unsigned char) ((458335834596983313ULL) << (((min((arr_14 [i_3 + 2]), (((/* implicit */unsigned long long int) (signed char)-9)))) - (5042448453342455635ULL)))));
            var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))) <= (3229388410U))))))), (arr_17 [i_3] [i_3])));
            arr_19 [i_3] [i_4] = ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) 1443267723)) ? (arr_15 [i_3]) : (458335834596983312ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3 + 1])))))) ? ((+(((/* implicit */int) (unsigned char)1)))) : (((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3 - 1]))))) : (((/* implicit */int) arr_18 [i_3 + 1] [i_3 + 3] [i_3])))));
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (max((((/* implicit */unsigned long long int) (-(2434018809U)))), (458335834596983328ULL)))));
        }
        arr_20 [i_3] = max((((/* implicit */int) var_5)), (((((/* implicit */int) (unsigned char)248)) & (((/* implicit */int) var_15)))));
        arr_21 [i_3] = ((/* implicit */_Bool) ((unsigned long long int) arr_14 [(unsigned char)15]));
        arr_22 [i_3] = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_18 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_18 [15] [i_3] [i_3]))))))));
    }
    for (int i_5 = 2; i_5 < 20; i_5 += 3) /* same iter space */
    {
        arr_25 [(unsigned short)9] = ((/* implicit */unsigned int) (((+(arr_14 [i_5 + 3]))) >= (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (unsigned short)28806)), (var_18))), (((/* implicit */long long int) (_Bool)0)))))));
        var_24 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_17 [i_5 - 2] [i_5 + 1]), (((/* implicit */unsigned int) var_7))))) ? (max((((/* implicit */int) (unsigned char)78)), (1501771509))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (arr_16 [18ULL]))))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
    {
        arr_28 [i_6] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((arr_14 [i_6]) - (5042448453342455657ULL))))));
        var_25 += ((/* implicit */unsigned long long int) arr_27 [i_6] [i_6]);
    }
}
