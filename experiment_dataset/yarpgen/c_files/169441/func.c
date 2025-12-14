/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169441
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
    var_17 = ((/* implicit */_Bool) (short)4095);
    var_18 = ((/* implicit */short) var_16);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) arr_3 [i_0]);
        var_20 &= ((((/* implicit */_Bool) 2751560582850958963ULL)) ? (((/* implicit */long long int) arr_3 [i_0])) : (arr_1 [i_0] [i_0]));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 1; i_2 < 11; i_2 += 2) 
        {
            var_21 -= ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (-5269136220501549003LL)));
            var_22 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 + 2]))));
            var_23 = ((/* implicit */_Bool) ((unsigned short) arr_2 [i_1]));
        }
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4024284963U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193)))));
    }
}
