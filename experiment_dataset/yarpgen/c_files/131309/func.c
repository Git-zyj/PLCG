/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131309
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_0 [(signed char)0]))))) <= (((unsigned long long int) arr_1 [i_0] [4ULL])))))));
        arr_2 [i_0] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((long long int) (signed char)-27)));
        arr_3 [11ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((((/* implicit */_Bool) arr_1 [i_0] [1LL])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_14 *= 16082123252971289439ULL;
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_1 [i_1] [(signed char)5]))));
        arr_6 [i_1] = var_7;
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) arr_7 [i_2]);
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_9 [i_2]))));
        var_17 = ((((/* implicit */_Bool) arr_9 [i_2])) && (((((/* implicit */_Bool) 2251558053698004544ULL)) && (((/* implicit */_Bool) arr_8 [i_2] [i_2])))));
        arr_11 [i_2] = ((((/* implicit */_Bool) ((signed char) arr_9 [i_2]))) ? (16195186020011547069ULL) : (var_1));
    }
    var_18 = ((/* implicit */int) ((signed char) ((unsigned long long int) (unsigned short)40554)));
    var_19 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1))))), (var_1))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))) * (((/* implicit */int) var_12)))))));
}
