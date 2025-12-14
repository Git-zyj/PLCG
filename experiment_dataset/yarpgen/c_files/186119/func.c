/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186119
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 += ((unsigned int) arr_1 [i_0]);
        var_14 ^= ((/* implicit */unsigned short) (!(arr_1 [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) 2147483647)) != (arr_0 [(unsigned char)5]))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
    }
    for (unsigned int i_1 = 4; i_1 < 22; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */int) arr_5 [i_1]);
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((arr_4 [i_1 - 4]) ? (arr_6 [i_1 - 4]) : (((/* implicit */unsigned int) var_1)))), (max((arr_6 [i_1 + 1]), (((/* implicit */unsigned int) var_11))))))) ? (min((min((((/* implicit */long long int) arr_6 [i_1])), (arr_5 [i_1]))), (arr_5 [i_1]))) : ((+(arr_5 [i_1])))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 4; i_4 < 22; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) var_9);
                                arr_18 [i_5] [i_3] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_4])), ((unsigned short)46762))))));
                                var_17 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_1 - 3] [i_2] [i_5])), (-911101324)))) ? (((((/* implicit */int) arr_15 [(unsigned char)12])) & (((/* implicit */int) arr_11 [i_5])))) : (((((/* implicit */int) arr_13 [i_5] [i_3] [i_2] [i_1 + 2])) >> (((arr_10 [i_1 + 2]) + (614088236))))))) | (((((/* implicit */_Bool) ((unsigned int) arr_5 [(_Bool)1]))) ? ((+(((/* implicit */int) (short)32767)))) : (((((/* implicit */int) arr_16 [i_2] [i_2] [i_4] [3])) >> (((var_7) + (2097926823)))))))));
                            }
                        } 
                    } 
                    arr_19 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((min((var_7), (((/* implicit */int) var_10)))) * (((((/* implicit */int) arr_12 [i_1 - 4] [i_1 - 1] [(short)6] [i_1 + 2])) * (((/* implicit */int) arr_12 [i_1 - 2] [i_1 - 2] [3U] [i_1 - 4]))))));
                }
            } 
        } 
        arr_20 [i_1 - 1] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_17 [i_1] [i_1 - 2])) ? (arr_17 [i_1 - 3] [i_1 + 1]) : (((/* implicit */unsigned long long int) var_6))))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 4; i_6 < 22; i_6 += 4) /* same iter space */
    {
        arr_23 [i_6 + 2] = ((/* implicit */unsigned int) arr_17 [i_6] [i_6]);
        arr_24 [i_6] [23ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 13043017250765040328ULL))))) + (((/* implicit */int) ((signed char) arr_22 [i_6 - 3])))));
        var_18 *= ((/* implicit */short) ((long long int) ((((/* implicit */int) arr_8 [i_6 + 1] [i_6 - 2] [i_6 + 1])) - (((/* implicit */int) arr_4 [i_6])))));
    }
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned char) ((var_6) != (((/* implicit */unsigned int) var_2)))))), (var_6))))));
}
