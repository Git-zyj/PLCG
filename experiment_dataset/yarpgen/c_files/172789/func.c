/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172789
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
    var_11 = ((/* implicit */_Bool) min((3465841124472314533LL), (((/* implicit */long long int) (unsigned short)39217))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) var_7);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_3] [i_0] [i_0] [0U] [i_0] &= ((/* implicit */unsigned short) var_3);
                                var_12 *= ((/* implicit */unsigned char) (((~(946017135U))) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_13 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_9 [(unsigned short)8] [(signed char)16] [i_2])) : (arr_10 [i_2] [i_2])))) ? (var_1) : (((var_0) >> (((var_4) - (38516981)))))))));
                    var_14 = ((/* implicit */int) (((~(((unsigned int) (signed char)-24)))) >= (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_6)) == (127)))) | (((/* implicit */int) ((short) var_5))))))));
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */long long int) ((var_4) == (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(short)10]))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((((((/* implicit */int) min((((/* implicit */unsigned short) var_8)), ((unsigned short)63840)))) * (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))), ((~(((/* implicit */int) (unsigned short)65535)))))))));
        var_16 = ((/* implicit */short) min((593815998585411603ULL), (((/* implicit */unsigned long long int) ((_Bool) arr_10 [(unsigned short)8] [i_0])))));
        arr_21 [i_0] = ((/* implicit */unsigned char) var_1);
    }
    for (unsigned int i_5 = 4; i_5 < 17; i_5 += 4) 
    {
        arr_24 [i_5] = ((/* implicit */_Bool) 18446744073709551615ULL);
        var_17 += min((((/* implicit */unsigned long long int) arr_22 [i_5])), (((((/* implicit */_Bool) (unsigned short)52127)) ? (((((/* implicit */_Bool) (short)6625)) ? (593815998585411603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) arr_22 [i_5])) ? (593815998585411632ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))))))));
    }
}
