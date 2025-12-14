/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173385
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_12))));
    var_18 = ((unsigned char) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) var_11)))) << (((var_14) - (2304701260007698514LL)))));
    var_19 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) min(((short)-12217), ((short)20066)))) > (((/* implicit */int) ((signed char) var_15))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) ((long long int) arr_1 [i_0]));
        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-27899)), (((((/* implicit */_Bool) (short)20066)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20066))) : (2843723769117806472LL)))))) ? (((long long int) (short)10302)) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-61))))));
    }
    for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_2 [i_1 - 1]))) ? (((((/* implicit */_Bool) arr_2 [i_1 + 3])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_2 [i_1 - 1])))) : (((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (((/* implicit */int) arr_2 [i_1 + 2])) : (((/* implicit */int) arr_2 [i_1 + 3]))))));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_5 [i_1]))));
    }
    for (short i_2 = 1; i_2 < 17; i_2 += 1) 
    {
        var_24 *= ((_Bool) ((unsigned int) 2960534747U));
        var_25 *= ((/* implicit */short) ((((unsigned int) arr_9 [i_2])) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)10))))));
        var_26 = ((/* implicit */short) ((_Bool) ((long long int) ((signed char) arr_7 [i_2 - 1]))));
        arr_10 [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_9 [(unsigned char)9]))));
    }
}
