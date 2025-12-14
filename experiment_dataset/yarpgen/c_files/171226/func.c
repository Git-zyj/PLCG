/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171226
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
    var_12 = ((/* implicit */_Bool) var_0);
    var_13 *= ((long long int) max((((((/* implicit */_Bool) (short)-7075)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    var_14 &= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)22681)) == (((/* implicit */int) (short)26665))));
                    var_15 -= ((/* implicit */short) (+(((((var_4) + (9223372036854775807LL))) << (((arr_1 [i_2]) - (2454101746U)))))));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */unsigned long long int) arr_2 [i_0 - 2])) : (var_11)));
    }
    var_16 ^= ((/* implicit */unsigned short) max((((/* implicit */int) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 4680804655181454898LL)))) || (((/* implicit */_Bool) var_0))))), (((((/* implicit */int) max(((short)-24152), (var_3)))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)25889)) : (((/* implicit */int) var_0))))))));
}
