/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151109
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_11 |= ((/* implicit */unsigned short) (_Bool)1);
        arr_2 [i_0] [i_0 - 2] |= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)11336))))));
        var_12 = ((/* implicit */int) var_5);
        var_13 = ((/* implicit */unsigned long long int) var_2);
        var_14 = ((/* implicit */unsigned char) 4816767774589807295ULL);
    }
    for (int i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1 + 1]))))) ? ((~((~(((/* implicit */int) (_Bool)1)))))) : ((~(-2103926795)))));
        var_16 |= ((/* implicit */short) ((min((((/* implicit */unsigned int) arr_4 [i_1 + 1])), (2239065285U))) >= (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)11331)))))));
    }
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) -2103926783))))) == ((~(((/* implicit */int) var_8))))));
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535)))))));
    var_20 ^= ((/* implicit */unsigned int) var_9);
}
