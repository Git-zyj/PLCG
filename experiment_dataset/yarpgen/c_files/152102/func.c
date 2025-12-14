/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152102
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
    var_19 *= ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_12)))), (min((14075367680756943680ULL), (((/* implicit */unsigned long long int) var_0))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [13LL])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-33))) : (var_12)));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) 4371376392952607936ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (1313405750U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)33)) | (((/* implicit */int) (short)0))))) ? (((/* implicit */unsigned long long int) arr_7 [i_1])) : (14075367680756943680ULL)));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
    {
        var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_15)) : (arr_7 [i_2])));
        var_23 = ((/* implicit */unsigned short) ((arr_1 [i_2]) * (((((/* implicit */_Bool) arr_0 [i_2])) ? (72057594037927808ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    }
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2981561546U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)178)) - (((((/* implicit */_Bool) (short)10040)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */unsigned long long int) var_8)) / (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-33), ((signed char)-83)))))))));
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((14075367680756943680ULL), (((/* implicit */unsigned long long int) 15633148U))))) ? (((/* implicit */unsigned long long int) var_8)) : (max((14075367680756943680ULL), (((/* implicit */unsigned long long int) (signed char)0))))));
}
