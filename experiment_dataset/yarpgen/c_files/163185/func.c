/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163185
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
    var_16 = ((/* implicit */signed char) ((long long int) var_12));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))) && ((!(((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) arr_1 [i_0])) - (arr_0 [i_0] [i_0]))), (((unsigned long long int) arr_1 [i_0]))))) ? ((~(arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4))))) ? (arr_1 [i_3]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [(short)9] [i_1] [i_3])) * (((/* implicit */int) arr_4 [i_0] [i_0] [i_3]))))))) >> (((/* implicit */int) var_14))));
                        var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1] [(short)12] [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_2] [i_1] [i_0 - 1]))))) ? (arr_0 [16U] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_0 - 1] [i_0] [(signed char)0] [i_0])) <= (((/* implicit */int) arr_7 [i_0] [8U] [(unsigned char)18] [i_3]))))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0])), (min((((/* implicit */unsigned int) min((var_13), (arr_7 [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) 23U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(unsigned char)7] [(unsigned char)21] [(unsigned char)7] [i_0 - 1] [i_0 - 1] [i_0]))) : (var_5)))))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [(_Bool)1] [(_Bool)1]))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        arr_14 [i_4] |= (-(((((/* implicit */_Bool) arr_5 [(short)22])) ? (((/* implicit */int) arr_5 [(short)22])) : (((/* implicit */int) arr_5 [12ULL])))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_4 - 1] [i_5] [i_6])) == (((/* implicit */int) arr_6 [i_6 - 2] [i_5] [i_4] [i_4])))))) : (((arr_0 [(_Bool)1] [(_Bool)1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4 - 1] [i_5 + 1] [i_6])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_9 [i_6 - 2] [i_6]), (((/* implicit */unsigned char) ((var_15) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [i_4] [i_6])))))))))) : (1938667599U)))));
                    arr_20 [i_4 - 1] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_5 + 1])) ? (((/* implicit */int) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) : (((/* implicit */int) ((unsigned char) (unsigned char)21))))) + (((((/* implicit */_Bool) arr_10 [i_5 + 1] [i_6 - 2] [i_6] [i_6])) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_6] [i_4])) ? (((/* implicit */int) arr_4 [i_4 - 1] [i_4 - 1] [i_6])) : (((/* implicit */int) var_3))))))));
                }
            } 
        } 
    }
    for (long long int i_7 = 1; i_7 < 6; i_7 += 4) 
    {
        var_21 *= var_6;
        arr_23 [0LL] = ((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_7 + 3] [i_7 + 1] [(unsigned char)20] [i_7 + 4])) > (((/* implicit */int) var_2)))) ? (((/* implicit */int) ((signed char) min((arr_18 [12LL] [12LL]), (((/* implicit */unsigned int) arr_12 [i_7] [i_7 + 4])))))) : (((/* implicit */int) ((((unsigned int) var_2)) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    }
}
