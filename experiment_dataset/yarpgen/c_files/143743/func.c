/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143743
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
    var_10 = ((/* implicit */long long int) var_4);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_4);
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((13690616172926446443ULL) <= (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) && (var_6)));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        var_11 = ((/* implicit */int) ((1107009650) == (((/* implicit */int) var_9))));
        var_12 = ((/* implicit */_Bool) max((var_12), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)107))) > (2646717618U)))));
        arr_6 [(unsigned char)13] [i_1] = ((/* implicit */unsigned char) ((((var_1) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 3])) : (((/* implicit */int) arr_5 [i_1 + 3] [i_1 + 1]))));
        var_13 = ((/* implicit */_Bool) var_1);
    }
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
    {
        var_14 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (((((/* implicit */_Bool) arr_8 [i_2])) ? (max((((/* implicit */unsigned long long int) (signed char)124)), (18446744073709551615ULL))) : (max((var_5), (((/* implicit */unsigned long long int) var_2))))))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((arr_8 [i_2]) / (arr_8 [i_2]))) * (arr_8 [i_2]))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        arr_17 [(signed char)16] [i_4] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_7)) == (((/* implicit */int) arr_14 [i_3 + 1])))));
                        var_16 = (!(((((/* implicit */_Bool) var_4)) && (((arr_15 [i_2] [i_3 + 1] [i_4] [i_3 + 1]) || (((/* implicit */_Bool) arr_10 [3LL] [i_3])))))));
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_11 [i_3 + 1] [i_3 + 1]), (arr_11 [i_3 + 1] [i_3 + 1])))) == (((/* implicit */int) ((short) arr_11 [i_3 + 1] [i_3 + 1]))))))));
                        var_18 += ((/* implicit */unsigned char) arr_11 [i_5] [i_3]);
                    }
                    arr_18 [i_3] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (2147483647)))), (var_5)));
                    arr_19 [i_4] [i_4] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_2] [i_2] [i_2])) + (((((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1])) - (((/* implicit */int) var_3))))));
                }
            } 
        } 
    }
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
    {
        var_19 ^= ((/* implicit */unsigned long long int) ((((arr_12 [(unsigned char)2]) + (2147483647))) >> (((((arr_21 [i_6] [(_Bool)1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6] [i_6] [i_6] [i_6]))))) - (3839705656U)))));
        var_20 = ((/* implicit */short) min((((((/* implicit */int) var_7)) - (((/* implicit */int) ((-13414197) > (((/* implicit */int) (unsigned char)0))))))), (((/* implicit */int) ((((long long int) arr_8 [i_6])) == (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_6] [i_6] [i_6] [i_6]))))))));
    }
}
