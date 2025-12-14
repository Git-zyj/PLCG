/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119662
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) && (((/* implicit */_Bool) arr_3 [i_0 + 1]))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((long long int) var_14)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [6ULL] [i_1]))) : ((-9223372036854775807LL - 1LL))))));
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) 0ULL))));
        }
        for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            arr_8 [i_0] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) -5755491159472427704LL)) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1] [5U])) : (arr_3 [i_2])));
            /* LoopNest 2 */
            for (short i_3 = 1; i_3 < 18; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    {
                        var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_0] [(unsigned short)3] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_10) : (((/* implicit */int) var_11)))))));
                        arr_14 [i_0] [i_0] [i_0] [0LL] [i_4] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_5 [i_3 - 1] [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_5 [i_3 - 1] [i_0 + 1] [i_4]))));
                        var_23 = ((/* implicit */unsigned short) var_14);
                    }
                } 
            } 
            var_24 = ((/* implicit */long long int) min((var_24), (((((/* implicit */_Bool) arr_13 [1U] [i_0 + 1] [i_0 + 1])) ? (((var_9) | (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_0] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
            var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [(signed char)15] [i_0 + 1]))) >= (((((/* implicit */_Bool) var_3)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
        }
        for (short i_5 = 1; i_5 < 17; i_5 += 4) 
        {
            arr_17 [i_0 - 1] [i_5] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_5 + 1] [(unsigned short)11] [i_0]))) & (arr_9 [i_0]))) + (((/* implicit */long long int) ((/* implicit */int) (short)-2355)))));
            var_26 = ((/* implicit */int) var_0);
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) | (var_15)));
        }
    }
    var_28 = ((/* implicit */signed char) ((max((var_16), (((/* implicit */unsigned long long int) 5073190732233409805LL)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) % (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)65524)) : (var_10))))))));
    var_29 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) -5755491159472427704LL)) ? (var_5) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_3))))));
}
