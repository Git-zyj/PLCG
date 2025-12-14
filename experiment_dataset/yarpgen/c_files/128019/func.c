/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128019
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
    var_14 = ((/* implicit */unsigned char) 3632604136U);
    var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 134152192)) ? (12069859861426503577ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_0)))))))) ? ((~(((((/* implicit */_Bool) (unsigned char)29)) ? (-9223372036854775786LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) : (9223372036854775786LL)));
    var_16 = ((/* implicit */int) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 13; i_0 += 1) /* same iter space */
    {
        arr_4 [7LL] [i_0] &= ((/* implicit */signed char) -9223372036854775786LL);
        var_17 = ((/* implicit */signed char) (_Bool)1);
        arr_5 [i_0 - 3] = ((/* implicit */int) -9223372036854775790LL);
    }
    for (long long int i_1 = 4; i_1 < 13; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            var_18 += ((/* implicit */unsigned short) ((9223372036854775786LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)68)))));
            var_19 = ((/* implicit */unsigned long long int) (((-(9223372036854775801LL))) > (-9223372036854775786LL)));
            arr_11 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_1 + 1])) >> (((((/* implicit */int) var_11)) - (28109)))));
        }
        arr_12 [i_1] [(_Bool)1] = ((/* implicit */signed char) max((((/* implicit */long long int) var_12)), (((((/* implicit */_Bool) (signed char)-11)) ? (-9223372036854775786LL) : (((/* implicit */long long int) (~(1103537846U))))))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (_Bool)1))));
    }
}
