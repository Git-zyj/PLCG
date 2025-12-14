/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166953
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
    var_10 = ((/* implicit */_Bool) min(((~(var_0))), (((/* implicit */unsigned int) var_5))));
    var_11 = var_8;
    var_12 = ((/* implicit */signed char) min((15535351701001015083ULL), (((/* implicit */unsigned long long int) 1978374475))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1044344848)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 231005070)))))))));
            arr_4 [i_0] [(unsigned char)4] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)232)) / (-989423377)));
            var_14 = ((/* implicit */unsigned int) max((((unsigned long long int) arr_0 [i_1])), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((long long int) (-(((/* implicit */int) arr_3 [i_0] [i_1]))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_7 [i_2]), (arr_7 [i_2])))) << (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0])) == (((((/* implicit */_Bool) 4528161998791060240ULL)) ? (((/* implicit */int) var_9)) : (989423376))))))));
            arr_9 [i_2] [i_2] [i_2] = arr_3 [(_Bool)1] [4];
        }
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (short)-28877))));
            var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -989423377)) : (max((5514172417202895356ULL), (4528161998791060240ULL))))), (((/* implicit */unsigned long long int) arr_10 [i_0]))));
            arr_14 [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) arr_11 [i_3] [i_3]);
        }
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (long long int i_5 = 2; i_5 < 9; i_5 += 4) 
            {
                {
                    arr_19 [6ULL] [i_4] [i_5 - 2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 623191914)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) var_4))))))))) : (min((((/* implicit */long long int) ((arr_2 [i_5] [i_5] [i_5]) % (((/* implicit */int) (unsigned short)29063))))), (min((((/* implicit */long long int) arr_18 [i_0] [i_0] [i_5] [i_0])), (61894686468860213LL)))))));
                    var_19 &= ((/* implicit */unsigned short) max(((-(4721901570343889891LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_7 [i_4])) : (((/* implicit */int) arr_7 [i_0])))))));
                }
            } 
        } 
    }
}
