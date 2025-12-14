/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171867
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
    var_12 = ((/* implicit */int) max((((/* implicit */unsigned int) var_8)), ((~(((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 3; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((unsigned char) (short)-27775)))) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) arr_7 [i_0] [i_3 - 3] [i_3] [i_3 - 3])))))))));
                        var_14 += ((/* implicit */signed char) ((int) arr_9 [18ULL] [i_2] [i_2] [i_2]));
                        var_15 &= ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_2] [i_3 - 3]);
                    }
                } 
            } 
            var_16 = ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_1] [i_1]);
        }
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            arr_22 [i_0] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [19ULL] [19ULL] [i_5] [i_4] [i_0])) ? (arr_19 [12ULL] [20ULL] [(_Bool)1] [i_6] [i_7]) : (arr_19 [i_0] [i_4] [i_5] [i_6] [(unsigned char)4])));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [(signed char)10])) ? (arr_14 [(signed char)9] [i_4] [i_4]) : (arr_14 [(short)9] [i_4] [i_5])));
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (_Bool)1))));
                            arr_23 [i_4] [i_4] = ((/* implicit */signed char) ((arr_19 [i_5] [i_6] [i_5] [14] [i_0]) ^ (((/* implicit */long long int) -1181988459))));
                        }
                        arr_24 [14ULL] [i_0] [i_0] [i_0] = arr_7 [i_0] [i_4] [20] [i_0];
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(_Bool)1] [i_6] [i_6] [14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_7))))))) : (((0U) - (4183742295U)))));
                    }
                    arr_25 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_6 [i_4])) : (((/* implicit */int) arr_6 [i_0])))) != (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (16)))));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_8 = 2; i_8 < 19; i_8 += 2) 
        {
            arr_29 [i_0] [i_8 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)73))));
            var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)60215)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_8] [(_Bool)1] [(_Bool)1]))) : (arr_27 [i_8 + 1])));
        }
        /* vectorizable */
        for (short i_9 = 0; i_9 < 21; i_9 += 4) 
        {
            arr_33 [(unsigned short)15] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)0)) ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) var_11))))));
            var_21 = ((/* implicit */long long int) ((_Bool) ((int) 6231256438212244362ULL)));
        }
        for (signed char i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) ((max((((1832442975900626869ULL) % (var_1))), ((~(arr_26 [(_Bool)1] [i_10]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && ((_Bool)1)))) == (((/* implicit */int) arr_7 [i_10] [i_0] [i_0] [i_0]))))))));
            arr_38 [i_0] [i_10] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0] [9U] [(_Bool)1] [i_10]);
        }
    }
}
