/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143076
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_12 ^= ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_3])) + (((/* implicit */int) arr_7 [i_0] [(signed char)9])))) + (((arr_0 [i_3]) ? (((/* implicit */int) arr_7 [5] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1] [(_Bool)1] [i_3]))))));
                        var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_2])) : (((/* implicit */int) arr_3 [i_1]))))) ? (((arr_0 [i_2]) ? (((/* implicit */int) arr_7 [i_1] [i_2])) : (((/* implicit */int) arr_1 [i_3] [0LL])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_3 [i_3])))))));
                        var_14 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [(short)11] [i_1] [i_2] [i_3])) && (((/* implicit */_Bool) arr_1 [i_0 + 2] [i_1])))) ? (((((/* implicit */_Bool) arr_6 [i_0 - 3] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_8 [8])) : (((/* implicit */int) arr_7 [10ULL] [(unsigned char)0])))) : (((arr_7 [i_2] [i_3]) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_7 [i_1] [i_1]))))));
                        var_15 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_2]))) : (arr_9 [i_0 + 2] [i_3] [i_3]))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [6])) - (((/* implicit */int) arr_1 [(unsigned char)3] [i_1])))))));
                    }
                } 
            } 
        } 
        arr_10 [i_0 - 1] [(unsigned short)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_9 [i_0] [(unsigned short)3] [i_0 + 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_8 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))) : (arr_9 [(_Bool)1] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_4 = 3; i_4 < 17; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            for (short i_6 = 2; i_6 < 14; i_6 += 4) 
            {
                {
                    arr_19 [i_4 + 1] = ((/* implicit */unsigned short) arr_17 [(unsigned char)9] [i_6]);
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))) : (4170592044U)));
                }
            } 
        } 
    } 
    var_17 &= ((/* implicit */short) ((((((((/* implicit */_Bool) 1600207184)) || (((/* implicit */_Bool) (short)25161)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))))) <= (var_4)));
}
