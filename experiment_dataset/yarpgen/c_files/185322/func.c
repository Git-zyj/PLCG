/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185322
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
    var_10 ^= ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)12)), (((int) (_Bool)1))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_11 = ((/* implicit */_Bool) 511ULL);
        var_12 = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) < (((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) ((unsigned char) arr_1 [(unsigned short)11] [i_0])))))));
        var_13 = ((/* implicit */unsigned short) ((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_1 [i_0] [i_0])))) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((max((18446744073709551105ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (((/* implicit */unsigned long long int) var_9))))) && (((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [(short)9]))))))));
            var_15 = ((/* implicit */unsigned char) max(((+(6U))), (((/* implicit */unsigned int) ((short) var_5)))));
            var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))), ((-(((/* implicit */int) arr_4 [i_1] [(signed char)10] [i_0]))))));
        }
    }
    var_17 = ((/* implicit */signed char) var_8);
    var_18 = ((/* implicit */unsigned short) var_0);
}
