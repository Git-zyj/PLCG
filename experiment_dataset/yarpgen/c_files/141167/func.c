/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141167
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
    var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_8))))) : (var_16)))) ? (((((/* implicit */_Bool) (+(var_16)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) min(((signed char)112), ((signed char)126)))))) : (((/* implicit */int) var_14))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    for (unsigned char i_4 = 3; i_4 < 10; i_4 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_4 - 3] [i_4] [i_4 + 1])) ? (((/* implicit */int) arr_8 [i_0] [i_3] [i_4 + 1] [(unsigned char)7] [i_4 + 1])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_4 + 1] [i_4 - 2] [i_4 + 1]))));
                            arr_12 [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(arr_6 [i_0] [i_0] [i_0] [i_0])));
                            var_21 += ((/* implicit */unsigned char) ((int) var_18));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_2] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4] [i_4 - 1] [i_4])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_11 [(_Bool)0] [i_4 - 3] [i_4 - 3] [i_4 - 3] [i_4 - 3] [i_4 - 1] [i_4]))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) arr_9 [(unsigned char)1] [(_Bool)0] [i_1] [i_1] [i_1] [i_1])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
        }
        var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [5ULL])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [6LL] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-62))) >= (2234099219167554763LL))))) : (((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_5] [i_5] [i_0] [i_0])) ? (arr_7 [i_0]) : (((/* implicit */long long int) arr_15 [i_5] [i_5] [i_5]))))));
            var_26 = arr_15 [i_0] [7ULL] [i_5];
            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_5] [8LL])) ? (((/* implicit */long long int) (+(((/* implicit */int) var_11))))) : ((+(arr_1 [i_0]))))))));
        }
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (var_16)));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6]))) : (var_5)));
        /* LoopNest 2 */
        for (signed char i_7 = 1; i_7 < 15; i_7 += 4) 
        {
            for (signed char i_8 = 4; i_8 < 16; i_8 += 3) 
            {
                {
                    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_7 + 3] [i_8 + 1] [i_8 + 1] [i_8 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7 + 1] [i_8] [i_8] [i_8 - 3]))) : (arr_19 [i_8 + 1] [i_7 + 2] [i_7 - 1])));
                    arr_24 [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((-2234099219167554764LL) != (-9223372036854775803LL))))) != (((((/* implicit */_Bool) arr_21 [i_7] [1LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_20 [14LL])))));
                }
            } 
        } 
        arr_25 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_17 [(signed char)2]) ? (arr_19 [i_6] [(unsigned char)17] [i_6]) : (arr_20 [i_6])))) ? (arr_19 [i_6] [i_6] [i_6]) : ((+(2234099219167554754LL)))));
    }
    var_31 ^= ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_6)))))))) <= (((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) 2234099219167554763LL)) ? (2234099219167554748LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_15)))))));
}
