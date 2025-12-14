/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125105
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
    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)57))) >= ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_18)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((16367038084286064135ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48464))))))) | (var_15)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] |= ((/* implicit */signed char) ((((/* implicit */int) ((arr_1 [i_0]) > (arr_1 [i_0])))) > (((/* implicit */int) ((unsigned char) arr_1 [i_0])))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
        {
            arr_6 [i_0] [i_1] = ((/* implicit */long long int) (+((~(arr_5 [i_0] [i_1] [i_1])))));
            var_21 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)65533)) ? (arr_5 [i_0] [i_0] [i_1]) : (((/* implicit */int) (unsigned short)24))))));
            arr_7 [i_1] = ((/* implicit */_Bool) var_8);
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-84)) == (((/* implicit */int) (unsigned char)172))));
        }
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
        {
            arr_11 [i_0] [i_0] = ((/* implicit */short) 5878777749205971612ULL);
            arr_12 [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-40)) ^ (((/* implicit */int) var_5))));
        }
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
        {
            arr_15 [3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_3])))) || (((/* implicit */_Bool) arr_10 [i_0]))));
            arr_16 [i_3] = ((/* implicit */long long int) ((unsigned long long int) arr_0 [i_0]));
        }
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                arr_21 [i_0] = ((/* implicit */unsigned long long int) var_2);
                arr_22 [4LL] [i_4] [i_0] [i_0] |= ((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned int) arr_19 [(signed char)15] [i_4] [i_0] [(signed char)15])), (var_0))));
                var_22 = ((/* implicit */unsigned short) 2457636460U);
            }
            for (short i_6 = 2; i_6 < 15; i_6 += 4) 
            {
                var_23 = ((long long int) (!(((/* implicit */_Bool) arr_20 [i_6 - 1] [i_4] [i_6] [(unsigned char)3]))));
                var_24 = ((/* implicit */unsigned short) ((unsigned int) (+(arr_20 [i_0] [i_4] [(signed char)0] [i_6 + 1]))));
            }
            arr_27 [i_4] [(short)1] = ((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) arr_18 [i_0] [i_4] [i_0])));
        }
    }
    for (long long int i_7 = 1; i_7 < 20; i_7 += 4) 
    {
        arr_31 [i_7 + 2] &= ((/* implicit */short) 2047);
        arr_32 [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_29 [i_7 + 1]))));
    }
    var_25 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) / ((-(((/* implicit */int) var_17))))))), (var_0)));
    var_26 = ((/* implicit */_Bool) var_8);
    var_27 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) 1909530517U)) : (536870911ULL))), (var_15))) ^ (var_15)));
}
