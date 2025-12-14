/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162436
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
    var_20 = -4256406843637736840LL;
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((signed char) ((var_16) | (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) << (((((/* implicit */int) (unsigned char)216)) - (211))))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_22 += ((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_0 [i_0] [i_0])))));
        var_23 ^= arr_1 [i_0];
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) min((((((((/* implicit */_Bool) 5321177774843295136LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) + (((/* implicit */int) max((((/* implicit */signed char) arr_2 [i_0])), (arr_0 [11] [(signed char)5])))))), (((((/* implicit */_Bool) ((long long int) 65535ULL))) ? (((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0])))) : (((/* implicit */int) var_12)))))))));
    }
    for (int i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((0U) + (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)61920))))))))));
        var_26 = ((/* implicit */int) arr_4 [i_1 - 1]);
        var_27 += ((/* implicit */unsigned char) ((short) arr_4 [(unsigned short)17]));
        var_28 = var_4;
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_29 = (!(((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 + 4])));
            var_30 *= ((/* implicit */unsigned char) ((3U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_2])))));
            var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
            var_32 = ((/* implicit */long long int) (signed char)42);
        }
    }
}
