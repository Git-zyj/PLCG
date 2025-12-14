/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153221
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
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        var_10 = ((/* implicit */short) var_0);
        arr_2 [i_0] [(_Bool)1] |= ((/* implicit */short) ((arr_0 [(short)16]) ? (arr_1 [i_0 - 1]) : ((~(arr_1 [i_0])))));
        var_11 = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) (+(min((((/* implicit */int) arr_3 [i_1] [i_1])), (((int) (short)4449))))));
        var_12 ^= ((/* implicit */unsigned int) min(((+(-873247190))), ((+(((/* implicit */int) arr_3 [(short)14] [i_1]))))));
        arr_6 [(_Bool)0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) min(((short)4449), (((/* implicit */short) var_1))))), ((-(-873247190)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_4 [i_1] [i_1])), (arr_3 [i_1] [i_1]))))) : (((((/* implicit */_Bool) ((long long int) var_4))) ? ((+(var_7))) : (((/* implicit */unsigned long long int) ((unsigned int) var_2)))))));
    }
    for (unsigned char i_2 = 4; i_2 < 16; i_2 += 1) 
    {
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 960182219)) ? (min((((/* implicit */int) (_Bool)1)), (873247190))) : (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)27)))))))), (min((min((((/* implicit */unsigned long long int) (unsigned short)65508)), (2110759932508091263ULL))), (min((((/* implicit */unsigned long long int) 2056420093816015835LL)), (17294869919331251463ULL))))))))));
        arr_9 [i_2 - 1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */long long int) arr_4 [i_2 - 2] [i_2 + 1])), (((var_8) / (var_8)))))));
    }
    var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_9)) >= (((/* implicit */int) (short)24034)))))) ? (min((var_2), (((/* implicit */unsigned long long int) ((var_8) % (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) : ((~(var_0)))));
}
