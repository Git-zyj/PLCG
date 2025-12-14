/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125900
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
        var_17 = ((((/* implicit */int) (unsigned char)177)) / (((/* implicit */int) (_Bool)1)));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_18 = ((/* implicit */_Bool) -7448010990713784572LL);
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                arr_8 [i_1] [11] [i_1] [11] = ((/* implicit */short) var_9);
                var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_3] [i_3])) ? (arr_6 [i_1] [i_1] [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)154)))));
            }
        }
        for (unsigned short i_4 = 3; i_4 < 18; i_4 += 1) 
        {
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (unsigned char)79))));
            var_21 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1835646266)) || (((/* implicit */_Bool) (unsigned char)70)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)106)) && (((/* implicit */_Bool) -1835646264))))) : (((/* implicit */int) var_8))));
        }
        arr_11 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1835646264)) ? (266820638) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)77)) : (8)))));
    }
    var_22 = ((/* implicit */int) var_11);
}
