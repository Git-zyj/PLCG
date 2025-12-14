/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159307
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)7783)) : (var_11)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_17 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) (short)-20610)), (6382771340758730158LL)));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */long long int) arr_0 [i_0])) : (-1LL)))) ? (((/* implicit */int) arr_1 [i_0])) : (0)))) ? (((((/* implicit */_Bool) (unsigned short)7783)) ? (var_0) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)236))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((15791229924654214236ULL), (((/* implicit */unsigned long long int) -8986128013202800160LL))))) ? (((-8986128013202800160LL) | (4874614701317560651LL))) : (((/* implicit */long long int) var_5)))))));
        arr_3 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        var_18 = ((/* implicit */int) max((((((long long int) arr_1 [i_0])) << (((((((/* implicit */_Bool) arr_0 [i_0])) ? (4874614701317560651LL) : (var_7))) - (4874614701317560633LL))))), (5475756048631175359LL)));
        arr_4 [i_0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_2))) >= (((((/* implicit */_Bool) 4294967295U)) ? (arr_0 [i_0]) : (((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 0)))) : (var_0)));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])));
    }
    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (var_6)));
    var_20 = ((/* implicit */int) var_4);
}
