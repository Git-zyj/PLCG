/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167390
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (_Bool)1)))))));
        arr_4 [i_0] = (~(var_8));
        arr_5 [i_0] = (((!((!(((/* implicit */_Bool) arr_0 [i_0])))))) ? (((/* implicit */int) (short)25621)) : (((/* implicit */int) var_10)));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */long long int) (((-(((/* implicit */int) var_2)))) + (((/* implicit */int) var_2))));
        arr_10 [0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [(unsigned short)20]))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        arr_15 [(unsigned char)2] [i_2] = ((/* implicit */short) (signed char)-28);
        arr_16 [i_2] [i_2] = 10181809903847022945ULL;
        arr_17 [i_2] [i_2] = ((/* implicit */unsigned short) arr_11 [i_2 + 1]);
    }
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) 9400416928226786782ULL)) && ((!(((/* implicit */_Bool) (unsigned char)124))))));
    var_13 = ((/* implicit */signed char) (unsigned char)132);
    var_14 = ((/* implicit */int) var_4);
}
