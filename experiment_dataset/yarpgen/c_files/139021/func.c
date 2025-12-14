/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139021
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [9U] [9U] = ((((/* implicit */int) arr_0 [i_0 + 1])) / (arr_2 [i_0 + 1] [i_0 + 1]));
        var_12 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (signed char)21))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) -573532696))) < (arr_1 [i_0 + 1])));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551606ULL)) ? (29U) : (((/* implicit */unsigned int) arr_1 [i_0 + 1]))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_13 = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) | (4294967267U))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) ((var_11) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1])))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        var_14 *= ((/* implicit */unsigned char) (((((-(((/* implicit */int) (unsigned char)255)))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))) * (((((/* implicit */int) arr_10 [i_2])) % (((/* implicit */int) arr_10 [i_2]))))));
        var_15 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2047ULL)) ? (arr_1 [i_2]) : (((/* implicit */int) (signed char)72))))) ? (((6745782937291465275ULL) | (((/* implicit */unsigned long long int) -573532691)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((16816077059107006561ULL) <= (((/* implicit */unsigned long long int) var_5)))))))), (max((((((/* implicit */_Bool) var_7)) ? (1ULL) : (((/* implicit */unsigned long long int) arr_8 [(short)4])))), (((/* implicit */unsigned long long int) var_1))))));
        arr_12 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_1 [i_2]))))));
        var_16 = ((/* implicit */unsigned long long int) arr_2 [i_2] [i_2]);
    }
    var_17 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((long long int) var_7)))) ^ (min((((int) (short)-22640)), (((/* implicit */int) var_3))))));
    var_18 = ((/* implicit */int) ((((long long int) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned long long int) var_5))))) / (501725616782901507LL)));
}
