/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12075
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
    var_17 = ((/* implicit */int) (-(((unsigned long long int) var_0))));
    var_18 = ((/* implicit */unsigned int) var_15);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-63)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)245)))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((signed char) arr_1 [(unsigned short)22])))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
            arr_5 [i_0] = var_4;
        }
        for (signed char i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 + 2])) ? (((/* implicit */int) arr_7 [i_0 + 2])) : (((/* implicit */int) arr_7 [i_0 + 2]))));
            arr_11 [i_0] [i_0] = ((/* implicit */signed char) (+(((var_15) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245)))))));
            var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) var_2)) ? (arr_9 [18U] [i_0 - 1]) : (((/* implicit */int) ((short) arr_1 [8ULL])))))));
        }
    }
    for (short i_3 = 1; i_3 < 22; i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */int) (signed char)-19))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-1788689286451947577LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)35))))))) : (((arr_0 [i_3] [i_3 + 1]) << (((arr_0 [i_3] [i_3 - 1]) - (1631720767U)))))));
        var_23 |= ((/* implicit */unsigned long long int) var_10);
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_7 [i_3 + 2])) ? (arr_12 [14U]) : (((/* implicit */unsigned int) var_11))))))));
    }
    var_25 &= ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_8)) & (var_12)))) || (((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL)))))))), ((+(((/* implicit */int) (unsigned char)239))))));
}
