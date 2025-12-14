/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10867
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
    var_12 ^= var_3;
    var_13 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((unsigned short) (signed char)72))) && (((/* implicit */_Bool) var_0)))));
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_5)), (var_1)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_15 *= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) var_0))))))) : (var_11)));
        var_16 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) var_10)), (arr_3 [i_0] [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0])))))));
        arr_4 [i_0] [8LL] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((max((((/* implicit */long long int) arr_3 [i_0] [i_0])), (-1LL))) + (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))) + (1483393988U))), (((/* implicit */unsigned int) arr_2 [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            arr_11 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) var_1)))))));
            arr_12 [i_1] [i_2] [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) (unsigned short)43928)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)27)))))), (((/* implicit */int) ((_Bool) (-(((/* implicit */int) (unsigned char)47))))))));
            arr_13 [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)237)) ? (arr_8 [i_1] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
        }
        arr_14 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (unsigned char)3)) * (((/* implicit */int) arr_10 [i_1] [i_1])))))) ? (((unsigned long long int) arr_9 [i_1])) : (((/* implicit */unsigned long long int) var_4))));
    }
}
