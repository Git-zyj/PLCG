/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144299
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
    var_17 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) 255U))) << (((((/* implicit */int) var_2)) - (67)))));
    var_18 ^= ((var_3) | (((/* implicit */unsigned long long int) ((int) ((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) (unsigned char)47)) - (47))))))));
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */int) max((var_11), (var_11)))) << (((((/* implicit */int) max(((unsigned char)223), ((unsigned char)209)))) - (217))))) - (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1)))) ? (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (short)-30479))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_7 [(unsigned char)9] [i_1 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)46)), (var_15)))) % (((/* implicit */int) ((unsigned short) (unsigned char)201)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))) : (arr_2 [i_1 - 1] [(short)12])))))))) : (max((((/* implicit */unsigned long long int) ((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6401)))))), (arr_0 [2])))));
                arr_8 [i_1] = (_Bool)1;
                arr_9 [(unsigned char)12] [i_1 + 3] [(unsigned char)12] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) var_16))))))) / (((((/* implicit */int) (unsigned char)3)) % (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-24)) : (((/* implicit */int) (unsigned char)79))))))));
            }
        } 
    } 
}
