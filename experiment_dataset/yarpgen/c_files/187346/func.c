/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187346
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
    var_13 = ((/* implicit */unsigned long long int) var_6);
    var_14 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_0] [i_0])), (min((var_10), (arr_1 [9U]))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) & (8755682043625657974ULL)))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_0] [1])) == (((/* implicit */int) arr_0 [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [(unsigned char)9])) == (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_0] [i_0])), (arr_2 [i_0] [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((arr_8 [i_1] [6LL] [6LL]), (arr_6 [i_1] [i_2]))), (((/* implicit */unsigned long long int) var_3))))) ? (min((arr_7 [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_1])) || (((/* implicit */_Bool) arr_6 [i_1] [i_2]))))))) : (((((arr_8 [i_1] [i_1] [i_1]) % (arr_6 [i_1] [i_1]))) | (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (8755682043625657951ULL) : (8755682043625657954ULL)))))));
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */int) max((min((((var_1) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2])) / (var_9)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((short) (unsigned short)48186))))))));
        }
        arr_12 [i_1] = ((/* implicit */int) max((max((((/* implicit */long long int) arr_9 [i_1])), (var_1))), (((/* implicit */long long int) max((((/* implicit */unsigned char) ((var_5) || (((/* implicit */_Bool) 9691062030083893642ULL))))), (min((arr_1 [i_1]), (var_0))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 4; i_4 < 10; i_4 += 3) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_4 - 1])) & (((/* implicit */int) arr_16 [i_4] [i_4] [i_4]))));
            var_16 = (unsigned short)21984;
        }
        arr_18 [i_3] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [(unsigned char)2])) ? (((/* implicit */int) arr_16 [(unsigned char)4] [i_3] [i_3])) : (((/* implicit */int) var_7)))) | (((/* implicit */int) arr_0 [i_3] [4LL]))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_24 [i_6] [i_6] [i_5] [i_3] = ((/* implicit */unsigned char) var_5);
                    arr_25 [i_3] [(_Bool)1] [i_5] [i_6] = ((/* implicit */int) arr_9 [i_5]);
                    var_17 = var_6;
                }
            } 
        } 
        var_18 = ((/* implicit */short) ((arr_15 [(_Bool)1] [i_3] [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7)))));
        var_19 = ((/* implicit */_Bool) ((arr_6 [6ULL] [6ULL]) | (9691062030083893659ULL)));
    }
    var_20 = ((/* implicit */short) 8755682043625657962ULL);
}
