/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157511
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_4 [i_0] [13U] = ((/* implicit */signed char) max((arr_2 [i_0]), ((((!(((/* implicit */_Bool) arr_2 [(unsigned short)3])))) ? (((/* implicit */int) var_9)) : ((~(arr_2 [i_0])))))));
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 14; i_1 += 2) /* same iter space */
        {
            var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_4))))) >= (((((/* implicit */_Bool) arr_7 [i_0] [(signed char)0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (3438010399882750399ULL)))))) | (((((/* implicit */_Bool) min((arr_7 [i_0] [(unsigned char)6] [(unsigned char)16]), (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (var_5) : (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */int) arr_3 [4ULL])))))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                var_11 |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))));
                var_12 -= ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_5 [i_1] [i_1 - 3] [14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [(unsigned char)12]))));
            }
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                arr_15 [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_11 [i_0] [i_0])), (arr_1 [i_3] [i_1])))) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_13 [i_0] [i_1] [i_3]), (((/* implicit */short) (_Bool)1))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(short)12] [i_1] [i_3]))) : (min((arr_5 [i_1 - 3] [i_1 - 2] [i_0]), (((/* implicit */unsigned long long int) ((signed char) var_7)))))));
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    arr_18 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_11 [i_1 + 4] [i_0])) ? (((/* implicit */int) arr_11 [i_1 + 3] [i_0])) : (((/* implicit */int) (signed char)34)))), (((/* implicit */int) arr_11 [i_1 - 3] [i_0]))));
                    /* LoopSeq 2 */
                    for (short i_5 = 4; i_5 < 16; i_5 += 1) 
                    {
                        var_13 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_3] [i_1] [i_4] [i_4] [i_3])) ? (arr_19 [i_0] [i_1] [i_3] [15] [13] [i_5] [i_5]) : (arr_19 [i_0] [i_0] [i_5] [i_3] [i_5 - 2] [(unsigned char)0] [i_1])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [5ULL] [5ULL] [i_3] [5ULL] [i_1] [11U]))))) : ((-(arr_19 [i_1 + 3] [i_5] [i_5] [i_5] [i_5 + 2] [i_5 - 2] [1ULL])))));
                        var_14 = (+(min((((3907237160259662518ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_4]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 867049056014723763ULL)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) arr_13 [i_0] [i_3] [i_0]))))))));
                        var_15 += ((/* implicit */signed char) (~(arr_20 [6] [i_1] [i_5 + 2] [6] [i_5])));
                    }
                    /* vectorizable */
                    for (short i_6 = 2; i_6 < 15; i_6 += 1) 
                    {
                        var_16 -= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)97)) | (((/* implicit */int) var_4))));
                        var_17 = (-(((/* implicit */int) (signed char)-116)));
                        var_18 *= ((signed char) arr_20 [i_0] [i_1 - 2] [i_3] [i_4] [i_3]);
                    }
                }
            }
            var_19 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [5ULL] [11])) >> (((((((/* implicit */_Bool) (signed char)7)) ? (var_7) : (((/* implicit */int) arr_9 [(unsigned char)17] [i_1] [i_1 + 3])))) + (325334541)))))) | (arr_7 [i_0] [(signed char)6] [i_1])));
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 14; i_7 += 2) /* same iter space */
        {
            arr_27 [i_0] [i_0] = ((/* implicit */unsigned char) (-(-1432681632)));
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((unsigned char) arr_2 [i_7 + 3])))));
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_14 [(short)2] [i_0] [(signed char)10] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7] [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned int) var_7)))))))));
            var_22 *= ((/* implicit */signed char) (~(((/* implicit */int) (short)25012))));
        }
    }
    var_23 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23248)) ? (((/* implicit */int) var_3)) : (min((((/* implicit */int) (_Bool)0)), (var_5))))))));
}
