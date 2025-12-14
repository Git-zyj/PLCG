/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16569
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
    var_18 = ((/* implicit */short) var_3);
    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (short)32767))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) (short)23002)), (2874354812U)));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-25796)) ? (7149301958657932119LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)76)))));
    }
    for (signed char i_1 = 4; i_1 < 16; i_1 += 1) 
    {
        var_22 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1] [i_1 - 3])) - (((/* implicit */int) arr_3 [i_1] [i_1 - 3]))))) - (((unsigned int) arr_3 [i_1] [i_1 - 4]))));
        arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) var_9)))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) + ((-(288230376151711743LL)))))));
        arr_6 [i_1] &= ((/* implicit */signed char) max(((+((+(var_10))))), (((((/* implicit */int) arr_3 [i_1] [i_1 - 3])) << (((((/* implicit */int) var_4)) - (105)))))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((long long int) ((short) (unsigned char)72))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (max((((/* implicit */int) var_13)), (-1401838342))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-23181))))))))));
    }
    var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-32747))))) : (min((3079242580U), (((/* implicit */unsigned int) (unsigned char)180))))))) ? ((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) ((unsigned char) 1179924188U)))));
}
