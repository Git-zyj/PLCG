/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142942
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
    var_17 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_7)) > (((var_3) / (((/* implicit */int) var_11))))))) != (((/* implicit */int) var_12))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        arr_11 [i_1] [i_2] [i_1] [i_1] [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)128)) <= (((/* implicit */int) (_Bool)0))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [(unsigned char)7])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_3])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) == ((+(((/* implicit */int) arr_9 [(unsigned short)9] [(unsigned short)9] [i_3] [7]))))))));
                        var_19 += ((/* implicit */unsigned short) arr_5 [i_0] [3] [i_0]);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [i_0] [i_1] [i_4] = ((/* implicit */_Bool) var_0);
                        arr_17 [i_4] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (unsigned char)127);
                    }
                    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 7836855074854217725ULL)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) var_8)))) >> (((((/* implicit */int) arr_6 [i_2] [i_1] [i_0])) - (225)))));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [16LL] [i_1])) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) arr_5 [i_0] [16] [i_2]))))) ? ((+(((/* implicit */int) var_16)))) : (((/* implicit */int) arr_13 [i_2] [i_0])))))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_13 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
    {
        arr_20 [i_5] = ((/* implicit */_Bool) 10609888998855333890ULL);
        arr_21 [i_5] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (769115493013890542ULL))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))) : (arr_1 [i_5])));
        var_23 += ((/* implicit */short) (+(((var_15) << (((((/* implicit */int) var_6)) - (19454)))))));
    }
    var_24 |= var_14;
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7836855074854217725ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min((var_11), (max((var_4), (((/* implicit */unsigned char) (_Bool)1)))))))));
}
