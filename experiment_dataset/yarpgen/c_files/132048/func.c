/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132048
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
    var_11 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((_Bool) (short)19420))) : (((/* implicit */int) var_10))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [2LL] &= ((/* implicit */unsigned int) arr_2 [i_0] [(unsigned short)8]);
        /* LoopNest 3 */
        for (unsigned int i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 16; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [1LL] [i_0] = ((/* implicit */int) arr_0 [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (short i_4 = 3; i_4 < 15; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (~(var_0))))));
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (((7516088178517109072LL) / (((/* implicit */long long int) ((/* implicit */int) (short)1859)))))));
                            var_14 = (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_3])));
                            arr_17 [14ULL] [i_0] [i_2 + 3] [(signed char)12] [i_4 + 1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? ((+(((/* implicit */int) min((((/* implicit */signed char) var_5)), ((signed char)15)))))) : (((/* implicit */int) arr_11 [i_0] [i_3] [i_4]))));
                        }
                    }
                } 
            } 
        } 
    }
    for (signed char i_5 = 3; i_5 < 10; i_5 += 4) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */signed char) arr_4 [i_5]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            var_15 = (i_5 % 2 == 0) ? (((((((/* implicit */int) arr_6 [i_5] [i_5] [i_6] [i_6])) >> (((((/* implicit */int) arr_10 [6ULL] [12] [i_5] [i_5])) + (31443))))) + (((/* implicit */int) ((short) arr_9 [i_5] [i_5 - 1] [i_6] [i_5]))))) : (((((((/* implicit */int) arr_6 [i_5] [i_5] [i_6] [i_6])) >> (((((((/* implicit */int) arr_10 [6ULL] [12] [i_5] [i_5])) + (31443))) - (36517))))) + (((/* implicit */int) ((short) arr_9 [i_5] [i_5 - 1] [i_6] [i_5])))));
            var_16 = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_5 - 3])) | (((/* implicit */int) arr_9 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5]))));
        }
        for (unsigned short i_7 = 1; i_7 < 9; i_7 += 1) 
        {
            arr_28 [i_5] [i_7] [i_5] = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_16 [(unsigned short)0] [i_5] [(unsigned short)0] [i_5])))));
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((int) var_2)))));
        }
    }
    for (int i_8 = 3; i_8 < 18; i_8 += 2) 
    {
        arr_33 [i_8] = ((/* implicit */unsigned long long int) ((((max((((/* implicit */int) arr_30 [i_8] [i_8])), (arr_32 [i_8 + 2]))) != (((((/* implicit */int) arr_30 [i_8 + 3] [i_8])) * (((/* implicit */int) arr_30 [i_8] [i_8])))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_31 [i_8]))));
        arr_34 [i_8] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_8] [i_8])) >> (((((/* implicit */int) arr_31 [i_8])) - (60235)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_31 [14ULL])) | (((/* implicit */int) var_10)))))))) : (((/* implicit */int) var_4))));
        var_18 = ((/* implicit */unsigned int) var_8);
    }
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((var_8) ? (((/* implicit */int) var_9)) : (var_0)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1))))));
    var_20 = ((/* implicit */long long int) var_9);
}
