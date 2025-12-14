/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15915
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
    var_14 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (signed char)127)) >= ((+(((/* implicit */int) var_9))))))) == (((/* implicit */int) var_9))));
    var_15 |= var_13;
    var_16 = ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_4 [i_1] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_1 - 1])));
            arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (arr_0 [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (((arr_3 [i_0]) >> (((((/* implicit */int) arr_2 [i_0] [i_1])) + (235)))))));
            var_18 = ((/* implicit */unsigned char) 524287U);
            var_19 *= ((/* implicit */short) 524287U);
        }
        for (int i_2 = 4; i_2 < 18; i_2 += 3) /* same iter space */
        {
            var_20 ^= ((/* implicit */signed char) ((arr_9 [i_0 - 1] [i_2 - 2]) >= ((+(((/* implicit */int) arr_2 [(unsigned char)7] [i_2 + 1]))))));
            var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) + (2147483647))) << (((var_8) - (983760419633064407LL)))));
            var_22 = ((/* implicit */int) arr_3 [i_0]);
        }
        for (int i_3 = 4; i_3 < 18; i_3 += 3) /* same iter space */
        {
            var_23 *= ((/* implicit */unsigned short) (+(((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [15LL] [i_3]))) / (1894465251U))) * (((/* implicit */unsigned int) ((/* implicit */int) (short)9740)))))));
            arr_14 [(unsigned short)10] [(short)6] |= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 3])))))));
        }
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_13 [(unsigned char)12]))))) / (((arr_4 [i_0] [i_0 + 1] [i_0]) * (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0])))))), (((/* implicit */unsigned long long int) var_0))))));
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 524302U)) ? (((/* implicit */unsigned long long int) (~(((2245063305U) << (((((/* implicit */int) arr_10 [(short)4] [i_0] [i_0])) - (82)))))))) : (arr_7 [i_0] [i_0])));
        var_25 *= ((/* implicit */short) (unsigned char)255);
    }
}
