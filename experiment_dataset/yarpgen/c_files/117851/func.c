/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117851
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
    var_10 *= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_2))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 8598602223351345645LL)) ? (8598602223351345674LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)37))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -8598602223351345641LL)), (var_5)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_9)) | (((/* implicit */int) var_6))))))) : (min((((/* implicit */long long int) min((((/* implicit */unsigned char) var_7)), ((unsigned char)131)))), (var_1)))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_12 ^= ((/* implicit */int) min((((((/* implicit */_Bool) 13205110)) ? (8598602223351345653LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)168))))), (((/* implicit */long long int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            arr_5 [i_1] [i_0] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)131))) * (3583647791U));
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (15ULL) : (var_5)))) ? (((-8598602223351345641LL) - (-8566064416214001438LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 2])))));
            var_14 += ((/* implicit */int) ((unsigned short) ((_Bool) 3020873125U)));
            var_15 = ((/* implicit */int) ((unsigned short) (short)-28181));
        }
        /* vectorizable */
        for (signed char i_2 = 2; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 3; i_3 < 10; i_3 += 3) 
            {
                arr_12 [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (9102601308205471335LL) : (((/* implicit */long long int) arr_9 [i_2 - 1] [i_2 + 2] [i_2 - 2] [i_2 - 2]))));
                arr_13 [i_0] [i_2] = ((/* implicit */long long int) (-(9699811965666362853ULL)));
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2] [i_0] [i_2])) ? (-8598602223351345639LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_2] [i_3 + 2]))))))));
                var_17 = ((var_1) - (((/* implicit */long long int) (~(arr_9 [i_0] [i_0] [i_3 - 2] [i_0])))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (-80304385)));
            }
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (_Bool)0))));
        }
        var_20 *= ((/* implicit */unsigned char) ((signed char) min((arr_7 [i_0] [i_0] [i_0]), (arr_7 [i_0] [(_Bool)1] [i_0]))));
        var_21 += ((/* implicit */unsigned int) var_1);
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 4) 
    {
        var_22 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_16 [(unsigned char)4] [i_4])))) ? (((/* implicit */int) arr_16 [i_4 + 1] [i_4])) : (((/* implicit */int) arr_14 [i_4 - 1]))));
        arr_17 [i_4 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) 1323052288U)) || (((/* implicit */_Bool) 16020245461949127784ULL))));
        arr_18 [i_4 + 2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4 + 2]))) / (((((/* implicit */_Bool) var_0)) ? (8598602223351345647LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    }
}
