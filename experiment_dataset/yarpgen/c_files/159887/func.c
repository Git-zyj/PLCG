/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159887
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
    for (int i_0 = 2; i_0 < 13; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        arr_8 [6U] [6U] [0ULL] [i_3] [10ULL] [10U] = ((/* implicit */unsigned long long int) arr_1 [i_2 - 1]);
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((7ULL), (28ULL)))) ? (min((((/* implicit */unsigned int) (signed char)-127)), (7U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) arr_7 [(unsigned char)13] [i_1] [i_2 + 1] [i_3])) : (((/* implicit */int) (signed char)105)))))))) ? (((unsigned int) (unsigned char)200)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((unsigned char) arr_3 [i_0] [i_2])))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [12ULL] [i_0 - 1] [i_0] [12ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [3U] [i_0]))) : (131071ULL)))) ? (((((/* implicit */_Bool) 673981212U)) ? (arr_0 [i_0 - 1] [i_0]) : (18269814231937073220ULL))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (14390969297130607864ULL)))))))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 13; i_4 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) -2041923199);
        var_22 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_4 - 2] [(unsigned char)8] [i_4] [i_4 - 1] [i_4 + 1] [(unsigned char)8])) ? (((/* implicit */int) arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_4 + 1] [i_4] [i_4])) : (((/* implicit */int) arr_5 [i_4 - 2] [(unsigned short)2] [i_4 - 1]))));
        arr_11 [10ULL] [i_4 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)20)) ? (arr_4 [i_4 + 1] [i_4] [i_4 + 1]) : (arr_4 [i_4 + 1] [(unsigned char)9] [i_4])));
        /* LoopNest 2 */
        for (unsigned short i_5 = 4; i_5 < 11; i_5 += 3) 
        {
            for (unsigned char i_6 = 1; i_6 < 11; i_6 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) arr_6 [3ULL] [i_4 - 1] [(signed char)4] [i_5 - 4] [3ULL] [i_6])) : (((/* implicit */int) arr_5 [i_6] [(unsigned char)2] [i_6]))))) ? (((((/* implicit */_Bool) arr_6 [i_4] [9U] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 2])) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) arr_15 [i_5 + 2])))) : (((((/* implicit */_Bool) (unsigned short)63999)) ? (((/* implicit */int) arr_5 [i_4] [i_4 + 1] [i_4])) : (((/* implicit */int) arr_7 [i_4 - 2] [i_4] [i_4] [i_4])))))))));
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (signed char)127))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned char) max((((unsigned int) (unsigned short)45719)), (((/* implicit */unsigned int) ((unsigned short) ((unsigned char) 18269814231937073215ULL))))));
}
