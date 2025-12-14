/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185312
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)21860)))))));
        var_11 = arr_1 [16];
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) min((max((arr_0 [i_1]), (((/* implicit */long long int) -1295652461)))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (arr_0 [i_1])))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 3; i_2 < 16; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            var_13 = ((/* implicit */_Bool) min((var_13), ((!(((/* implicit */_Bool) ((long long int) arr_0 [i_5])))))));
                            arr_16 [i_1] [i_1] [i_1] [i_1] [2] = ((/* implicit */int) -6147736214060978456LL);
                            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (+(arr_14 [i_1] [i_1] [i_5] [i_4] [i_5] [i_3]))))));
                            var_15 &= ((/* implicit */unsigned char) arr_13 [i_3] [i_3] [i_3]);
                        }
                        var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_3] [i_3] [16LL] [i_3]) ? (((/* implicit */int) arr_8 [i_1] [i_2] [i_3] [i_2])) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_3] [i_1] [i_3] [i_2 - 2]))))) ? (max((6147736214060978456LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) min((((/* implicit */int) arr_11 [i_1] [i_3] [i_3] [i_4] [i_3] [i_2 - 3])), (281852727))))));
                        arr_17 [i_2] [(unsigned char)0] [i_1] = ((/* implicit */int) max(((unsigned short)37639), (((/* implicit */unsigned short) (_Bool)1))));
                        arr_18 [(unsigned char)0] [i_1] [(unsigned char)2] [i_4] = ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) (signed char)-65)), (-6147736214060978456LL)))));
                        var_17 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 640869703U)) ? ((+(((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_4])))) : ((-(2094957706))))), (((/* implicit */int) arr_12 [3LL] [i_2]))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_8))));
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_5))));
}
