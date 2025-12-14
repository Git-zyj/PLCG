/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155300
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))) < (((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_17 -= ((/* implicit */unsigned short) 13018842214963992608ULL);
            var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
        }
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) 13018842214963992615ULL)) ? (((/* implicit */int) max((((/* implicit */short) arr_1 [i_3])), (min((arr_5 [i_0] [i_3] [i_4]), (((/* implicit */short) var_12))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-7147743445349397748LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [0LL] [i_3] [i_3])) ? (((/* implicit */int) arr_0 [i_2] [i_3])) : (((/* implicit */int) arr_7 [i_2])))) : ((+(arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] [2LL])))))))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(((684366112937361878LL) % (((/* implicit */long long int) ((((/* implicit */_Bool) 694387029U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-56))))))))))));
                    }
                } 
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        arr_14 [i_5] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) arr_7 [i_5])) ? (((/* implicit */long long int) arr_11 [i_5] [i_5] [i_5] [12ULL] [(unsigned char)11] [i_5])) : (arr_12 [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (_Bool)0))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 3) 
        {
            var_21 ^= (~(3417575990U));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                arr_19 [i_7] [i_6] [i_5] = ((/* implicit */signed char) arr_6 [i_7] [i_6]);
                var_22 = arr_10 [i_6 - 3] [i_6] [i_6] [i_7];
            }
            arr_20 [i_6 - 3] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (-(2096896U)))) ? (1127169484186002936ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))));
            var_23 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)34)) ? (13018842214963992590ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) var_11))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_12))))) : (((long long int) var_4)))))));
        }
    }
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_16)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_7))))) : ((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43048))) : (var_13)))))));
}
