/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143718
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_10))));
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)101)) || (((((/* implicit */_Bool) var_5)) || ((_Bool)1))))) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (min((var_6), (((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156))) : (var_7)))))));
    var_19 = ((/* implicit */int) var_13);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((long long int) arr_1 [i_0] [i_0])) - (((min((var_9), (var_5))) - (((/* implicit */long long int) ((/* implicit */int) ((short) 4294967295U))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) max((var_6), (((/* implicit */unsigned long long int) ((unsigned int) var_4)))));
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                arr_10 [i_0] [9ULL] [i_2] [9ULL] = ((/* implicit */short) min((((unsigned short) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1]))))), (((/* implicit */unsigned short) (unsigned char)201))));
                var_21 = ((/* implicit */unsigned long long int) var_4);
            }
            for (long long int i_3 = 1; i_3 < 17; i_3 += 2) 
            {
                var_22 ^= var_15;
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    arr_16 [i_1 + 2] [i_1 + 3] |= ((/* implicit */int) ((short) min((((/* implicit */unsigned char) var_2)), (var_8))));
                    var_23 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (!((_Bool)1))))) ? ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_9))))) : (((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_1 + 2] [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_7 [i_3 - 1] [i_1] [i_1 - 1])))));
                }
            }
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_11) : (var_6)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 13010204024620519614ULL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))))));
        var_25 = ((/* implicit */short) (_Bool)1);
    }
    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_21 [i_6]))))) & ((~(-1LL)))));
        var_27 -= ((/* implicit */int) ((long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) -3337774545267658505LL)) >= (var_6)))), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_3 [8ULL] [i_6] [i_6])) : (((/* implicit */int) arr_1 [i_6] [i_6])))))));
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (var_14) : (var_9)))))) ? (((((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) & (var_15))) : (var_14)));
    }
    var_29 = ((/* implicit */unsigned long long int) var_2);
}
