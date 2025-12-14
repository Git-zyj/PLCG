/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153460
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        var_19 *= ((/* implicit */_Bool) (~(arr_0 [i_0 - 3] [(short)1])));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
        {
            var_20 ^= ((/* implicit */short) arr_3 [i_0 - 1] [i_0 - 3]);
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((int) 12804853183102074267ULL)))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_3 = 2; i_3 < 23; i_3 += 3) 
            {
                for (unsigned char i_4 = 2; i_4 < 22; i_4 += 4) 
                {
                    {
                        arr_13 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((long long int) var_9)) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)5)) >> (((arr_4 [i_4 - 1]) - (223212116)))))))))));
                    }
                } 
            } 
            arr_14 [(_Bool)1] = ((/* implicit */signed char) ((arr_8 [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0]))) : (arr_12 [(short)11] [21ULL] [i_0])));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_17 [i_5] [(_Bool)1] [12LL] = ((/* implicit */_Bool) ((short) arr_1 [2LL] [i_0 + 1]));
            var_23 = ((/* implicit */short) var_6);
        }
    }
    var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
    var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (var_16)));
    var_26 += ((/* implicit */unsigned short) var_10);
}
