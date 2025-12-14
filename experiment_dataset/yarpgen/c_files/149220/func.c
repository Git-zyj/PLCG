/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149220
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)49013)), (1204694706U))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0 + 2] = ((/* implicit */unsigned long long int) 3090272589U);
        var_16 *= ((/* implicit */unsigned long long int) 1204694734U);
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (signed char i_3 = 3; i_3 < 15; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((((/* implicit */_Bool) 3090272562U)) || (((/* implicit */_Bool) arr_8 [i_3 - 3])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_4])) ? (((/* implicit */unsigned long long int) 1204694734U)) : (arr_11 [i_4])))))))));
                        arr_17 [i_1] [i_1] = (-(((((/* implicit */_Bool) 3090272590U)) ? (arr_7 [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) var_0)))));
                    }
                } 
            } 
        } 
        arr_18 [(unsigned short)0] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1]))));
        arr_19 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1204694732U)) && (((/* implicit */_Bool) var_14))));
        arr_20 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 3090272580U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1204694741U) == (1204694706U))))) : (((((/* implicit */_Bool) arr_13 [(unsigned short)4] [i_1] [i_1 + 1] [i_1])) ? (arr_9 [i_1 + 1] [i_1 + 2]) : (3090272565U)))));
        /* LoopSeq 2 */
        for (unsigned short i_5 = 1; i_5 < 14; i_5 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 3090272536U)) ? (3090272577U) : (3090272590U))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3090272590U)) ? (((/* implicit */int) arr_5 [6LL] [6LL])) : (var_6)))))))));
            arr_23 [i_1] [i_1] [(signed char)6] |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
            arr_24 [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_0 [i_1 - 1])))));
        }
        for (short i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            arr_27 [i_1] [i_1] = ((/* implicit */unsigned long long int) 1204694731U);
            var_19 = ((/* implicit */unsigned short) (~(arr_25 [i_1 + 2])));
            var_20 = ((/* implicit */unsigned short) (+(arr_25 [i_1 + 1])));
        }
    }
}
