/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175442
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
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) -4375516288833900532LL)) ? (67108863U) : (1040384U)))))));
        arr_3 [i_0 - 2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (-(arr_2 [i_0])))) ? (((2545508099606805665ULL) + (((/* implicit */unsigned long long int) -518197743794912817LL)))) : (((/* implicit */unsigned long long int) ((arr_2 [i_0]) - (((/* implicit */int) var_16))))))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 2; i_2 < 12; i_2 += 2) 
        {
            for (short i_3 = 2; i_3 < 15; i_3 += 4) 
            {
                for (signed char i_4 = 1; i_4 < 12; i_4 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) ((((long long int) var_14)) | (((/* implicit */long long int) (~((~(((/* implicit */int) (short)-29602)))))))));
                        arr_14 [(unsigned char)12] [i_2 - 2] [i_2 - 2] [3U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (((_Bool)0) ? (((/* implicit */long long int) var_4)) : (var_15))))) ? (1117687385) : ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3])) && (((/* implicit */_Bool) var_3)))))))));
                        var_21 += ((/* implicit */long long int) (!(((/* implicit */_Bool) -281474976710656LL))));
                    }
                } 
            } 
        } 
        arr_15 [i_1] &= ((/* implicit */unsigned long long int) var_10);
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) var_10);
            arr_19 [i_5] [i_1] [i_5] = ((/* implicit */short) 2147483647U);
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((~(var_18)))))) ? (max((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (arr_10 [i_1] [i_5] [i_5]))), (max((4294967279U), (((/* implicit */unsigned int) var_2)))))) : (((arr_16 [i_5]) | (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
        }
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) | (arr_6 [i_1])))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_1))));
        arr_20 [i_1] = ((/* implicit */unsigned short) arr_2 [i_1]);
    }
    var_25 = ((/* implicit */unsigned int) (-(((((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_7))))) | (((/* implicit */int) var_11))))));
}
