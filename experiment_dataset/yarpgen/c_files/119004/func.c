/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119004
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
    var_16 = ((/* implicit */_Bool) var_11);
    var_17 -= var_6;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_14)))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((var_6) ^ (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (min((-7512503892946942932LL), (((/* implicit */long long int) (short)-24265)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 0U)) < (var_4))))))) == (((/* implicit */long long int) ((((/* implicit */int) max((arr_1 [i_0] [(unsigned char)6]), ((signed char)(-127 - 1))))) / (max((((/* implicit */int) arr_1 [(_Bool)1] [i_0])), (var_5)))))))))));
        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((var_1) / (((/* implicit */int) var_13)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) 6987407047064549620LL)) != (arr_0 [i_0]))))))) ? (((/* implicit */int) ((signed char) min((var_14), (2838754659769942082LL))))) : (min((((((/* implicit */int) (unsigned char)169)) ^ (((/* implicit */int) (unsigned char)32)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [1LL])) : (var_11)))))));
        var_21 = ((/* implicit */unsigned char) min(((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((2631677185U) - (2631677185U))))), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (signed char)-124))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1428348318893558922ULL))))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 14; i_2 += 4) 
        {
            for (unsigned short i_3 = 2; i_3 < 13; i_3 += 4) 
            {
                {
                    arr_10 [i_1] [i_1] [i_1 + 1] [(_Bool)0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-124)) ? (arr_9 [i_1]) : (((/* implicit */int) arr_4 [i_3 - 2])))))));
                    arr_11 [i_1] [i_2 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) -1384567793))));
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */unsigned int) min(((unsigned short)49454), (((/* implicit */unsigned short) var_15))));
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            var_22 = ((/* implicit */long long int) min(((+(arr_9 [i_1]))), (((/* implicit */int) (short)14588))));
            arr_16 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(short)12] [i_4] [i_1])) ? ((((((-(((/* implicit */int) arr_7 [i_1])))) + (2147483647))) >> (((((/* implicit */int) (unsigned char)109)) - (109))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
            var_23 -= ((/* implicit */signed char) min(((((((-(((/* implicit */int) (unsigned char)169)))) + (2147483647))) >> (((((/* implicit */int) max((arr_5 [14]), (var_9)))) - (159))))), (((/* implicit */int) arr_6 [i_4] [12LL] [i_1 + 3]))));
        }
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            var_24 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_15 [i_1] [i_5] [i_5])) ? (-339214898) : (((/* implicit */int) var_0)))));
            var_25 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_1 + 4] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5]))) : (0U)))), (((long long int) arr_5 [i_5]))));
        }
    }
}
