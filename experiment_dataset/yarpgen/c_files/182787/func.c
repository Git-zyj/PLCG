/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182787
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
    var_15 = 0ULL;
    var_16 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) >> (((arr_1 [i_0 - 1] [i_0 - 1]) - (2534089669U)))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                for (unsigned char i_3 = 3; i_3 < 9; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >> (((/* implicit */int) arr_8 [i_3]))));
                        arr_9 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)78)) + (((/* implicit */int) (unsigned char)177))));
                        var_18 ^= ((unsigned char) var_13);
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((unsigned int) var_13)))));
    }
    for (unsigned char i_4 = 1; i_4 < 9; i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_18 [i_4] [5U] [i_5 + 1] [i_5] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_13)) ? (arr_6 [i_4] [i_4] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
                    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_6 [i_4] [i_4] [i_6])))));
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        arr_22 [i_4] [i_4] [i_7] [i_7] &= ((/* implicit */_Bool) arr_21 [i_7]);
                        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (var_2)))) : (((/* implicit */int) arr_14 [i_5] [i_6]))))) ? (arr_3 [i_4 + 1] [i_4 + 1] [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_16 [i_4] [i_5 + 1] [i_4 - 1] [i_4 - 1])), ((unsigned char)178)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))));
                        arr_25 [i_4] [i_5] [i_6] [i_5] [i_8] = ((/* implicit */unsigned int) (unsigned char)78);
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1])) | (((/* implicit */int) arr_13 [(_Bool)1])))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((arr_6 [i_4] [i_5] [i_9]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_4]))))), (arr_15 [i_5] [i_5 + 1] [i_5 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(1017230294U))))))) : (((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) (_Bool)1)))))));
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (unsigned char)126))));
                    }
                }
            } 
        } 
        arr_28 [i_4] &= ((/* implicit */unsigned int) (~(((max((var_1), (((/* implicit */unsigned long long int) (_Bool)1)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4])))))));
        var_26 = ((/* implicit */unsigned char) min(((-(((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))))), (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_13))))));
    }
}
