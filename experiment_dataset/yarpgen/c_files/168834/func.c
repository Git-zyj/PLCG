/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168834
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
    for (long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */int) (signed char)-64)) == (((/* implicit */int) (short)32767)))))));
        var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32767))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_14 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0)))))) != (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_0))))));
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((22ULL) << (((534773760U) - (534773749U)))));
        arr_8 [i_1] = ((/* implicit */long long int) arr_5 [i_1]);
    }
    for (signed char i_2 = 2; i_2 < 22; i_2 += 3) 
    {
        var_15 = ((/* implicit */signed char) ((short) -2147483639));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) * (0U))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) / (1ULL)));
    }
    var_18 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) -1LL)) ? (-2) : (((/* implicit */int) var_9)))));
    var_19 = ((/* implicit */unsigned char) var_11);
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32767)) ? (((((/* implicit */_Bool) var_5)) ? (4294967295U) : (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
    var_21 |= var_11;
}
