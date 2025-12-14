/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174295
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_14 = ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (arr_0 [(signed char)9] [i_0])));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
        var_17 = ((((/* implicit */_Bool) (unsigned short)11329)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_10)));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_18 = ((/* implicit */long long int) 8386560U);
            arr_10 [i_1] [(short)11] [i_2] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_8 [i_1] [i_2])), (var_2)))), (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) var_2)) : (5825513994371128370ULL))))))));
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) ((short) (~(arr_4 [i_1]))));
            var_21 = ((/* implicit */unsigned short) var_2);
            arr_13 [i_1] [(unsigned short)8] = ((/* implicit */unsigned short) arr_9 [i_3] [i_1]);
        }
        /* vectorizable */
        for (long long int i_4 = 2; i_4 < 22; i_4 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) ((unsigned int) arr_11 [i_4 + 2] [i_4 - 1]));
            var_23 = ((/* implicit */int) ((unsigned short) (unsigned short)11329));
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_4] [(unsigned char)6] [i_4 + 1])) ? (arr_16 [i_4 + 2] [i_4 - 2] [i_4 + 1]) : (((/* implicit */int) (unsigned short)54218))));
        }
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (18446744073709551611ULL)));
        var_26 &= arr_3 [i_1];
    }
    var_27 = ((/* implicit */short) (~((~((~(179891125U)))))));
    var_28 = ((/* implicit */int) var_7);
}
