/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162744
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned short) ((_Bool) var_2));
                    arr_9 [i_0] [i_1] [(_Bool)0] [i_1] |= ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_3 [(_Bool)1] [i_2] [i_2])))) | ((+(((/* implicit */int) (signed char)-88))))));
                }
            } 
        } 
        arr_10 [i_0] [(unsigned char)11] = ((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0] [i_0] [0]))));
    }
    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = ((((/* implicit */_Bool) max((arr_5 [i_3] [i_3] [i_3]), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_3))))))) ? ((+(((((/* implicit */_Bool) 1858384163)) ? (((/* implicit */int) (unsigned char)20)) : (-1858384158))))) : ((((+(((/* implicit */int) arr_7 [i_3] [i_3] [i_3])))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) < (var_8)))))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_18 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (((/* implicit */signed char) (_Bool)1))))) ? (arr_1 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 12899305003887790521ULL))))))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(unsigned short)0] [i_3] [3])) ? (((/* implicit */int) arr_4 [14] [i_4])) : (((/* implicit */int) ((var_6) < (((/* implicit */long long int) 4294967295U))))))))));
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                arr_21 [(signed char)5] [(signed char)5] [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) (_Bool)1));
                arr_22 [i_3] [(_Bool)1] [14ULL] [i_5] |= ((/* implicit */int) arr_4 [10ULL] [10ULL]);
            }
        }
        var_15 = arr_1 [i_3];
    }
    for (int i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8)))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-108)) <= (((/* implicit */int) (signed char)-47))))) : (((/* implicit */int) (signed char)82))));
        var_17 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_25 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) (+(-2147483645)))) : (arr_24 [i_6] [i_6])))));
    }
    var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) ((_Bool) (signed char)12)))))) ? (max((max((((/* implicit */int) var_2)), (1858384163))), (((/* implicit */int) max(((unsigned short)26), ((unsigned short)26)))))) : (((/* implicit */int) var_7))));
}
