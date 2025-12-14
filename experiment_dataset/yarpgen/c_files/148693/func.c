/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148693
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 2])))) > (((int) (signed char)11))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned char) 9060135492229127779LL);
                    var_21 = ((/* implicit */int) max((var_21), (((int) (short)14349))));
                }
                /* vectorizable */
                for (short i_3 = 2; i_3 < 20; i_3 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 2; i_4 < 20; i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_4] = ((/* implicit */short) (signed char)10);
                        var_22 = ((/* implicit */unsigned char) ((arr_14 [i_1 - 4] [i_1 + 1] [i_1 - 3]) << (((arr_3 [i_3 - 2] [i_4 - 2] [i_4 + 1]) - (287643970U)))));
                        var_23 = ((/* implicit */unsigned long long int) var_1);
                    }
                    for (unsigned char i_5 = 2; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
                        {
                            arr_23 [(signed char)1] [(signed char)1] [(signed char)1] [i_5] [i_6] = ((/* implicit */long long int) ((((((/* implicit */int) var_18)) & (((/* implicit */int) (unsigned short)19256)))) << ((((~(((/* implicit */int) var_14)))) + (63713)))));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) (short)-14350))))) >= ((-(9060135492229127779LL))))))));
                            arr_24 [(signed char)18] [i_3 + 1] [i_5] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1553782498U))));
                        }
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
                        {
                            arr_27 [i_5] [i_5] [i_3 + 1] [i_3 + 1] [i_3 + 1] = ((/* implicit */unsigned short) ((var_1) + (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                            arr_28 [i_0] [i_0] [i_5] [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)19237)) * (((/* implicit */int) (unsigned short)19256))));
                        }
                        arr_29 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */int) var_12);
                        arr_30 [i_0] [i_5] [(unsigned short)4] [i_5] [i_5] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_1 - 1] [i_3] [i_5])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_3] [(signed char)3]))))) : (arr_16 [i_0] [(short)11])));
                    }
                    var_25 -= var_18;
                    arr_31 [(unsigned char)10] [(unsigned char)1] [i_1] [(unsigned char)10] = arr_22 [i_0] [i_1] [i_1] [i_3 - 2] [(unsigned char)15];
                }
                for (short i_8 = 2; i_8 < 20; i_8 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */long long int) arr_1 [i_8]);
                    var_27 = ((/* implicit */unsigned char) (unsigned short)65535);
                    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_8])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_18)), ((unsigned short)19263)))) : (min((arr_15 [i_0] [i_1] [(unsigned char)8] [i_8] [i_8 + 1]), (((/* implicit */int) var_6))))))) : (min((var_12), (var_12)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        arr_38 [i_0] [(unsigned short)0] [(unsigned short)0] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)11)) ? (((((/* implicit */_Bool) var_15)) ? (max((var_17), (arr_11 [i_0] [i_8] [5]))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_12 [i_1] [(short)16] [i_9])), (var_0))))))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_32 [i_0] [i_1 - 1] [3])))) ? (((/* implicit */int) (unsigned short)44456)) : (((/* implicit */int) arr_35 [i_1] [(_Bool)1] [i_8 - 1] [(unsigned char)12])))))));
                        arr_39 [i_8] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [(unsigned short)9] [i_8] [(unsigned short)16] [0LL] [0LL])) ? (arr_19 [(signed char)15] [i_1] [i_8] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_33 [i_0] [(signed char)3])) : (((/* implicit */int) (unsigned char)98)))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)193))) >= (5299829906850067920LL))))));
                    }
                }
                arr_40 [i_0] = ((/* implicit */short) ((794326170880506758LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19252)))));
                var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)46279)) : (((/* implicit */int) arr_33 [i_1] [i_1]))))) ? ((-(((/* implicit */int) var_18)))) : (((/* implicit */int) var_13)))))));
                arr_41 [i_0] [i_1] = ((/* implicit */int) 9223372036854775807LL);
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) var_19);
    var_31 = ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), ((-(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */long long int) ((((/* implicit */int) (short)14343)) | (((/* implicit */int) (unsigned char)63))))) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)46273))) | (var_1))))) : (var_1));
}
