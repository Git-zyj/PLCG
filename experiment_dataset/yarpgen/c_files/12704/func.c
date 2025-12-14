/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12704
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
    var_10 += ((/* implicit */signed char) ((((var_9) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))))) * (min(((+(var_9))), (((/* implicit */long long int) var_6))))));
    var_11 = ((/* implicit */short) max((var_11), (var_8)));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */long long int) var_3)) : (arr_0 [i_0 + 1]))));
        var_12 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */int) arr_1 [i_0])) << (((((((/* implicit */int) (signed char)-85)) + (2147483647))) >> (((arr_0 [i_0]) + (830353827431591543LL))))))) : (((/* implicit */int) var_0))));
        arr_3 [i_0] = ((/* implicit */int) var_0);
        var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_1 [i_0 + 3]))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) arr_1 [i_0 + 3])) | (((/* implicit */int) min((var_8), (((/* implicit */short) arr_1 [i_0])))))))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [(signed char)11]))))) ? (((/* implicit */int) ((_Bool) arr_1 [i_0 - 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    }
    /* vectorizable */
    for (short i_1 = 4; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_15 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_1] [(_Bool)1])) ? (((/* implicit */int) arr_5 [i_1] [(short)12])) : (((/* implicit */int) var_6)))) | (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_1] [i_1]))))));
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) (-(var_2)));
        arr_7 [i_1 - 4] [i_1] &= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_1] [i_1 - 3])))));
    }
    for (short i_2 = 4; i_2 < 13; i_2 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) arr_9 [11ULL] [i_2]);
        arr_11 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-91)) ? (((((/* implicit */int) (signed char)-91)) + (((/* implicit */int) (short)-3818)))) : (((/* implicit */int) arr_5 [i_2 + 2] [i_2 + 2]))))) ? (min((((/* implicit */int) var_1)), ((+(((/* implicit */int) arr_5 [i_2] [(unsigned short)2])))))) : ((-(((/* implicit */int) arr_10 [i_2 + 2] [i_2 - 4])))));
    }
}
