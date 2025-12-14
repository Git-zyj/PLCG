/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123816
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
    var_10 *= ((/* implicit */_Bool) ((var_8) / (((long long int) ((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */unsigned long long int) -533675148)) : (var_6))))));
    var_11 += ((/* implicit */short) min((var_3), (var_3)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_8 [i_3] [(unsigned char)5] [i_2] = ((((/* implicit */_Bool) arr_7 [(short)7] [i_2 + 1] [i_2] [i_1] [i_2] [i_1])) ? (5914580666505219648ULL) : (0ULL));
                        var_12 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(_Bool)1] [7] [i_3 - 1] [i_2 + 1]))) : (((((/* implicit */_Bool) arr_7 [2] [i_1] [2] [i_1] [i_2] [i_3 + 2])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2040)))))));
                    }
                } 
            } 
        } 
        var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [(_Bool)1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((((/* implicit */_Bool) 2297752613U)) ? (((/* implicit */int) arr_1 [(unsigned char)1] [0])) : (((/* implicit */int) arr_0 [5LL]))))));
        arr_9 [i_0 - 2] = arr_6 [(unsigned short)8];
    }
}
