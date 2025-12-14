/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108932
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
    var_19 = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_18)))), (((long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_1)))))));
    var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((var_5), (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_17)) : (var_10)))) : ((-(18446744073709551612ULL))))), (max(((~(18446744073709551608ULL))), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)89)))) && (((((/* implicit */_Bool) ((var_16) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) && (((arr_0 [5] [i_0]) || (arr_0 [i_0] [(signed char)2])))))));
        var_21 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_7 [i_0] [i_1] &= ((/* implicit */long long int) 18446744073709551613ULL);
            /* LoopSeq 2 */
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 3) /* same iter space */
            {
                var_22 = ((/* implicit */short) var_12);
                var_23 = ((/* implicit */unsigned char) var_18);
            }
            for (unsigned int i_3 = 2; i_3 < 14; i_3 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_3 [(unsigned short)4] [i_3 + 2]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        arr_20 [12] [i_1] [(unsigned short)2] = ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)236)) && (((/* implicit */_Bool) 470437053761006749LL))))));
                        arr_21 [(short)15] [i_3] [(unsigned short)8] [i_3] &= ((/* implicit */int) (+(arr_5 [i_1] [i_3 + 2] [i_4])));
                    }
                    var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */_Bool) arr_1 [i_3] [i_3 - 1])) ? (((/* implicit */int) arr_1 [i_3] [i_3 + 2])) : (((/* implicit */int) arr_6 [i_3 + 1]))))));
                }
                for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_24 [9U] [9U] [9U] [i_3 + 1] [i_6]);
                    arr_27 [i_0] [i_0] [i_0] [i_6] = (~(((/* implicit */int) var_15)));
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1] [6] [i_3] [i_3 - 1])) ? (((/* implicit */int) arr_22 [i_6] [i_3] [i_1])) : ((+(((/* implicit */int) var_12)))))))));
                }
                for (long long int i_7 = 2; i_7 < 14; i_7 += 1) 
                {
                    arr_30 [i_0] [i_0] [10] [i_7] = ((long long int) (-(((/* implicit */int) var_15))));
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */int) arr_10 [i_0] [i_7 + 1] [i_3 + 2])) & (((/* implicit */int) arr_10 [i_0] [i_7 + 2] [i_3 + 2])))))));
                    arr_31 [i_0] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [(unsigned char)15] [8U] [8U] [i_0])) || (((/* implicit */_Bool) (signed char)-54))));
                    var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) && (var_16))) ? ((-(var_10))) : (((/* implicit */int) var_0))));
                }
                arr_32 [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) var_8);
            }
        }
        for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
        {
            arr_35 [(unsigned short)4] [(unsigned short)4] = ((/* implicit */long long int) ((int) min(((unsigned short)14), (((/* implicit */unsigned short) arr_10 [i_0] [i_8] [i_8])))));
            arr_36 [i_8] [i_0] = ((/* implicit */unsigned int) (unsigned short)15);
            arr_37 [i_0] [i_8] [(unsigned short)0] &= ((((((/* implicit */int) ((unsigned short) arr_14 [i_0]))) == (((((/* implicit */_Bool) (short)-32745)) ? (((/* implicit */int) arr_14 [i_0])) : (((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned long long int) (+(arr_33 [i_8] [i_8])))) : (max((((/* implicit */unsigned long long int) (unsigned char)148)), (0ULL))));
        }
        for (long long int i_9 = 1; i_9 < 12; i_9 += 1) 
        {
            arr_42 [i_0] [i_9] = ((/* implicit */signed char) max((((/* implicit */long long int) max((((/* implicit */int) (signed char)45)), (-2147483624)))), (max((max((-3483211872269418562LL), (((/* implicit */long long int) (unsigned char)120)))), (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])))));
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_15 [i_9 + 4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [12U] [i_9] [i_9 + 3] [12U]))))) : (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0] [12LL] [i_9]))))))));
            var_30 = ((/* implicit */unsigned char) (-((~(arr_28 [i_9] [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 + 4] [i_9 + 1])))));
        }
    }
}
