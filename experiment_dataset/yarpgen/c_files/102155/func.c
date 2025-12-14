/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102155
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
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_0 + 2]))));
        var_15 -= ((/* implicit */signed char) var_6);
        var_16 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6592404895890247466LL)) ? (35184372088831ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))))))) > (min((((arr_1 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))), (((/* implicit */long long int) (signed char)20))))));
        var_17 += var_2;
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) (signed char)-21);
                    var_18 = ((/* implicit */unsigned char) var_9);
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (signed char)-125))));
                        var_20 = ((((/* implicit */_Bool) ((arr_6 [i_0 + 1] [i_1 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 3] [i_1 + 3] [i_2] [i_3])))))) ? (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1] [i_0] [i_3])) ? (((/* implicit */int) arr_7 [i_1 + 2] [i_1] [i_2] [(signed char)5])) : (((/* implicit */int) arr_7 [i_1 + 1] [i_1] [i_1] [i_3])))) : ((~(((/* implicit */int) arr_7 [i_1 + 2] [i_1] [i_1] [i_1 + 2])))));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 1) /* same iter space */
                    {
                        var_21 ^= ((/* implicit */int) arr_12 [i_1] [i_1 + 3] [i_2] [i_4]);
                        var_22 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (signed char)-125))))) ? (((/* implicit */int) arr_11 [i_0] [i_1 + 2] [i_4 - 1] [i_1 + 2])) : (((/* implicit */int) ((((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_4])) <= (arr_15 [i_0])))))) != (max((((((/* implicit */int) var_13)) & (((/* implicit */int) var_13)))), (((/* implicit */int) (signed char)20))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0 - 1] [i_1 + 2]))));
                        var_24 ^= (((!(((/* implicit */_Bool) arr_15 [i_0])))) ? (((/* implicit */unsigned long long int) ((arr_17 [i_0] [i_0] [i_5] [i_5] [i_5] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (signed char)20)))))) : (var_7));
                    }
                    arr_19 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9005000231485440LL)) ? (((long long int) arr_0 [i_0])) : (((/* implicit */long long int) arr_15 [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 2] [i_2] [i_0 + 2] [i_1 + 3])))))) : (((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_1 + 3])) ? (((/* implicit */unsigned long long int) 2031785523)) : (arr_10 [i_0 - 1] [i_1 + 1])))));
                }
            } 
        } 
    }
    for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_6])))))));
        arr_22 [i_6] [i_6] = ((/* implicit */signed char) max((max((((/* implicit */long long int) arr_21 [i_6])), (-8668996707735786791LL))), (((/* implicit */long long int) arr_21 [i_6]))));
        var_26 -= ((unsigned long long int) ((((var_3) / (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6]))))) | (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6])))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 2) 
    {
        for (signed char i_8 = 2; i_8 < 10; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                {
                    var_27 ^= ((/* implicit */long long int) ((arr_10 [i_9] [i_7]) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) ^ (((((/* implicit */int) (signed char)125)) >> (((arr_1 [i_8 - 2] [i_8]) - (5712246468384923112LL))))))))));
                    var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) + (arr_27 [i_7] [i_7] [i_9])));
                }
            } 
        } 
    } 
    var_29 += ((/* implicit */int) (signed char)-21);
}
