/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189420
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
    var_20 = var_18;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_3 [i_0 - 1]))));
                    var_22 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-38)))))) ^ (min((arr_0 [i_0 - 2]), (var_11))))));
                    arr_11 [8LL] [8LL] [8LL] [8] = ((/* implicit */short) ((((/* implicit */_Bool) 140668768878592ULL)) ? (min((((/* implicit */unsigned long long int) arr_4 [i_1])), (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_1))))) : ((~(var_3)))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */signed char) var_15);
        arr_13 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_8 [10LL] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_0] [i_0]))))) : (var_13)));
    }
    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 3; i_4 < 15; i_4 += 4) 
        {
            for (unsigned int i_5 = 2; i_5 < 15; i_5 += 1) 
            {
                {
                    arr_23 [i_3] [i_4] [i_5 - 2] [(unsigned short)10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)38)) ? (var_1) : (((/* implicit */unsigned long long int) ((long long int) (unsigned short)42678)))));
                    var_23 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) 2080374784U))));
                    var_24 = ((/* implicit */int) min((arr_20 [i_3] [i_4 - 1] [i_5 - 1] [i_5 - 1]), (((signed char) arr_6 [4ULL] [i_5 - 1] [13LL]))));
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [(unsigned char)13])) ? (((/* implicit */int) arr_18 [i_3] [(unsigned short)11] [14U])) : (((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 1] [i_5 - 2]))));
                }
            } 
        } 
        arr_24 [i_3] = ((/* implicit */int) max((arr_20 [i_3] [i_3] [i_3] [(_Bool)1]), (((/* implicit */signed char) var_9))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 1; i_7 < 14; i_7 += 3) 
            {
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    {
                        arr_34 [i_3] [(unsigned char)7] [i_6] [(_Bool)1] [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)17562));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            var_26 = ((/* implicit */long long int) arr_27 [8U] [i_7 + 1] [i_8] [12ULL]);
                            var_27 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)64))));
                            var_28 -= ((/* implicit */long long int) ((unsigned short) ((unsigned char) arr_22 [i_3] [i_6] [i_3])));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [i_10 - 1])), (1608485039U)))) ? (((/* implicit */int) ((arr_37 [i_7 - 1] [(unsigned char)15] [i_10] [i_8] [(_Bool)1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_3] [i_10 - 1] [i_7 + 1])))))) : (((/* implicit */int) var_9))));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) arr_26 [11]))));
                            var_31 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_17)), (arr_32 [i_3] [i_3] [i_6] [i_3] [i_8] [i_6])))), (0ULL)));
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_16 [i_3] [9U] [i_3])))) > (2558283819367760766ULL)))) : (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)64)))), (((/* implicit */int) arr_15 [9LL]))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_6] [i_6] [i_7] [i_7 - 1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_21 [i_3] [3U] [3U] [i_7 - 1]))));
                            var_34 = ((/* implicit */long long int) arr_18 [i_8] [i_6] [i_6]);
                            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(unsigned short)0])) ? (((/* implicit */int) arr_9 [2LL] [2LL] [(unsigned char)0] [i_3])) : (((/* implicit */int) arr_7 [14ULL])))))));
                        }
                        var_36 = ((/* implicit */long long int) min((var_36), (((long long int) var_12))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_13 = 1; i_13 < 14; i_13 += 3) 
            {
                var_37 |= ((/* implicit */long long int) var_2);
                var_38 = ((/* implicit */_Bool) var_2);
            }
            var_39 &= ((unsigned long long int) ((unsigned int) ((unsigned char) arr_32 [(short)6] [(short)6] [i_12] [(short)6] [i_3] [i_3])));
        }
        for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 4) 
        {
            arr_53 [(unsigned short)1] [(signed char)13] [i_14] = ((/* implicit */unsigned long long int) arr_31 [(_Bool)1] [i_14] [i_3]);
            arr_54 [(_Bool)1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) arr_37 [(signed char)4] [(unsigned short)3] [(unsigned short)5] [(signed char)4] [i_14]))), ((((+(((/* implicit */int) arr_8 [i_3] [i_14] [i_3])))) - (((/* implicit */int) arr_27 [12LL] [12LL] [i_3] [2ULL]))))));
        }
        var_40 = arr_25 [i_3] [i_3];
    }
    var_41 = ((/* implicit */unsigned char) ((var_3) / (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_16) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_18)))))))));
    var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) var_11))));
}
