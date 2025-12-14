/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140497
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
    var_12 |= ((/* implicit */unsigned int) (short)-1);
    var_13 = ((/* implicit */int) var_4);
    var_14 ^= ((/* implicit */short) min((max((((/* implicit */unsigned long long int) (~(var_11)))), (((unsigned long long int) 14211733095882216457ULL)))), (((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) (unsigned char)48))))))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)3929)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8857128420701493938LL))), (((/* implicit */long long int) (+(arr_0 [i_0]))))))) ? ((-(((/* implicit */int) min((var_4), (((/* implicit */unsigned char) (_Bool)1))))))) : (((/* implicit */int) min((min(((short)29893), (((/* implicit */short) (signed char)112)))), ((short)-7099))))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) var_9)) | (((((arr_1 [i_0] [(_Bool)1]) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_9)))) : (((/* implicit */int) max((var_2), (((/* implicit */short) var_8)))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) 3268869705846882131ULL);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        arr_11 [4LL] [(_Bool)1] &= (!(((/* implicit */_Bool) min((min(((short)-22654), ((short)0))), (arr_8 [(_Bool)1] [i_1 + 2] [i_1 + 4] [(_Bool)1])))));
                        arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((((/* implicit */int) var_5)) * (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1])))))))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (arr_7 [i_0] [i_4] [i_0]))))));
            arr_15 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_0] [10ULL] [i_4] [(unsigned char)8])) : (((/* implicit */int) ((short) arr_4 [i_0])))));
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_0 [i_0]))))));
            var_20 -= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
            var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_4] [0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_0] [i_4] [9ULL]))));
        }
        arr_16 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)20491)) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [3U] [3U] [i_0]))))), (((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))) ? (min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0])), (3268869705846882131ULL))) : (arr_10 [i_0] [(unsigned char)2] [i_0] [i_0])));
    }
    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_22 ^= ((/* implicit */long long int) var_4);
        arr_19 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))))) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((((/* implicit */short) arr_17 [i_5] [i_5])), (arr_18 [(short)22] [(short)22])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [i_5] [i_5]))))))));
    }
}
