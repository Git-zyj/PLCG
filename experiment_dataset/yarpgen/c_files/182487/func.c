/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182487
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
    var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((-577899384) | (((/* implicit */int) var_1)))) : (((/* implicit */int) var_11)))) : (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) var_1)))), (((((/* implicit */int) (unsigned short)14)) - (((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_0] = arr_1 [i_0] [i_0];
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    var_15 ^= ((/* implicit */unsigned int) 8405733598038566147ULL);
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) (~(((/* implicit */int) (short)-6440))))))));
                }
                arr_9 [i_0] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
    var_16 &= ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (2481696332067396563ULL)))))));
    var_17 = ((/* implicit */_Bool) var_10);
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)25725)) ? (((/* implicit */int) (short)-32761)) : (((/* implicit */int) (short)-126))));
}
