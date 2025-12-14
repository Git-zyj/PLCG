/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182704
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((var_7) > (((/* implicit */long long int) var_2)))))) >= (var_7)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_4 [5ULL] = ((/* implicit */unsigned char) arr_1 [(_Bool)1]);
        arr_5 [i_0] |= arr_3 [i_0];
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [(unsigned short)7]))))) ? (((arr_1 [i_0 - 1]) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 - 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) 3658709910U)) : (238269777079990436ULL)))) ? (-178634059) : (((/* implicit */int) (unsigned char)126))))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 + 1]))))) ? (((/* implicit */int) ((((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [8ULL])) : (((/* implicit */int) arr_0 [i_0 + 1])))) > (((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_0 [(signed char)6]))))))) : (((((arr_0 [i_0]) && (((/* implicit */_Bool) arr_3 [i_0])))) ? (((/* implicit */int) arr_0 [(unsigned char)12])) : (((/* implicit */int) arr_0 [i_0 - 1])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                var_16 = ((((/* implicit */_Bool) arr_9 [11ULL] [(_Bool)1] [i_0 + 1])) && (((/* implicit */_Bool) arr_6 [i_0])));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (arr_8 [i_1]) : (arr_9 [i_0 - 1] [i_1] [i_2])));
                var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_7 [i_0])) < (((/* implicit */int) arr_2 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [20LL])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_0 [11U])))))));
                var_19 = ((/* implicit */short) arr_3 [i_0]);
            }
            var_20 = ((/* implicit */_Bool) ((arr_0 [i_0 + 1]) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_9 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0])))))) ? (arr_6 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 1])))));
        }
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((((/* implicit */unsigned int) arr_11 [i_3])) > (((arr_8 [i_3]) % (arr_8 [i_3]))))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_3 + 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18208474296629561179ULL)) ? (-8949101129645163029LL) : (((/* implicit */long long int) ((/* implicit */int) (short)17189)))))) ? (arr_10 [i_3 + 1]) : (((/* implicit */unsigned long long int) arr_8 [i_3 + 1])))))))));
        var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3 + 1])) ? (((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */unsigned long long int) arr_8 [2LL])) : (arr_10 [i_3 + 1]))) : (((/* implicit */unsigned long long int) arr_6 [i_3 + 1]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [i_3])) > (arr_10 [i_3]))))) > (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))) : (arr_9 [i_3] [i_3] [i_3])))))) : (((/* implicit */int) arr_0 [i_3 + 1]))));
        var_24 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((arr_1 [i_3 + 1]) ? (arr_10 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3])))))) && (((/* implicit */_Bool) arr_8 [i_3 + 1])))) ? (((/* implicit */unsigned int) ((arr_1 [17ULL]) ? (((/* implicit */int) arr_7 [i_3 + 1])) : (((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3])) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_1 [i_3]))))))) : (((((((/* implicit */_Bool) arr_9 [(short)12] [i_3] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) : (arr_6 [i_3]))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [(_Bool)1])) ? (arr_11 [i_3]) : (((/* implicit */int) arr_0 [i_3])))))))));
    }
    /* vectorizable */
    for (short i_4 = 2; i_4 < 20; i_4 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) arr_2 [i_4]);
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_4 + 1])) ? (((/* implicit */int) arr_7 [i_4 + 1])) : (((/* implicit */int) arr_7 [i_4 + 1])))))));
    }
    var_27 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -8949101129645163029LL)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))) > (((((/* implicit */_Bool) var_4)) ? (var_0) : (var_0))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 18208474296629561180ULL)) ? (2241052423006688320LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-62))))) < (((/* implicit */long long int) var_3))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_2) : (var_4)))) > (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_10)) : (var_3))))))));
}
