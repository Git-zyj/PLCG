/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148172
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
    var_17 = ((/* implicit */unsigned int) (-(max((((((/* implicit */_Bool) (short)0)) ? (-9223372036854775798LL) : (9223372036854775797LL))), (((/* implicit */long long int) ((int) var_1)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) var_14);
        var_19 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 224983667U))));
    }
    for (short i_1 = 2; i_1 < 18; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) -9223372036854775798LL)), (3123186065800907563ULL))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1)))))));
                    arr_12 [4] [4] [4ULL] [i_1] = ((/* implicit */_Bool) min((max((((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) min((var_16), (((/* implicit */signed char) arr_1 [(short)15] [i_1 + 1])))))));
                }
            } 
        } 
        var_21 &= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_10 [i_1 - 2] [i_1 - 1] [i_1])))));
        var_22 = (signed char)-1;
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((~(arr_5 [i_1]))) | (arr_5 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_15)));
        arr_13 [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    var_24 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_9)), (var_11)));
    var_25 = ((/* implicit */short) min((((((((/* implicit */unsigned int) ((/* implicit */int) (short)863))) * (4069983628U))) * (var_6))), (((var_15) / (((((/* implicit */_Bool) 15323558007908644063ULL)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
}
