/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184562
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) var_0);
        var_20 = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_0)))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (unsigned short)18354))))));
                    var_21 = ((/* implicit */signed char) ((short) var_2));
                    var_22 ^= ((/* implicit */unsigned char) ((var_5) > (((/* implicit */unsigned int) ((((((/* implicit */int) var_18)) + (2147483647))) << (((((/* implicit */int) (unsigned short)18347)) - (18347))))))));
                    arr_14 [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)18348));
                    arr_15 [i_3] [i_2] [i_1] = ((/* implicit */signed char) (+(((1292239817U) & (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                }
            } 
        } 
        arr_16 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 3002727479U)) ? (3002727486U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
    var_23 = ((/* implicit */signed char) 402653184U);
}
