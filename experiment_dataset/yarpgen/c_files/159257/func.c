/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159257
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */_Bool) ((var_7) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)25505))))))));
                        arr_12 [i_0] [i_0] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [(unsigned short)2])) % (((((/* implicit */_Bool) 746373417U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_3] [i_1]))))));
                        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) arr_2 [(unsigned char)11]))));
                        var_13 = ((/* implicit */unsigned short) var_7);
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            var_14 -= (!(((/* implicit */_Bool) var_9)));
                            arr_16 [i_4] [i_3] [(unsigned char)4] [(signed char)2] [i_1] [i_0] [i_0] &= ((/* implicit */short) (+(((/* implicit */int) (unsigned short)25514))));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & ((((_Bool)1) ? (arr_9 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                            arr_17 [i_0] [i_0] [i_2] [(unsigned short)17] [i_3] [i_3] [(short)13] = ((/* implicit */unsigned short) 3551050439U);
                        }
                    }
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
                    {
                        var_16 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)1)))) ? (((/* implicit */unsigned int) ((int) arr_9 [i_5]))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-28797))))) : (var_0)))));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((unsigned int) 522440135))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)8191)) ? (arr_0 [i_0] [(unsigned char)16]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))) - (((/* implicit */long long int) arr_15 [i_0] [i_1] [i_2] [i_0] [i_5] [i_5]))))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */short) var_6)), (var_8)))), (arr_14 [i_0] [i_1] [8] [i_5]))))))));
                    }
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
                    {
                        var_18 += ((/* implicit */long long int) ((((((((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_6])) + (2147483647))) >> (((((/* implicit */int) arr_19 [i_0] [(_Bool)1] [i_2] [i_6])) + (42))))) ^ (((/* implicit */int) max((arr_19 [i_0] [i_6] [i_2] [i_6]), (arr_19 [(short)15] [i_2] [i_0] [i_0]))))));
                        arr_24 [4LL] [i_0] [12ULL] [18ULL] [i_6] [4LL] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_2]))));
                    }
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_8 = 2; i_8 < 15; i_8 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned char) var_5);
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_2] [i_8 + 3])) | (-1)))) ? (((/* implicit */int) min(((unsigned short)65323), (((/* implicit */unsigned short) var_2))))) : (((/* implicit */int) (signed char)9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)25500), (((/* implicit */unsigned short) (_Bool)0)))))) : (max((max((var_0), (((/* implicit */unsigned int) (short)4096)))), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))));
                        }
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [(short)5]))))) ? (((((/* implicit */_Bool) 5832428860393812083ULL)) ? (var_0) : (var_1))) : (((((/* implicit */_Bool) 743916856U)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                            var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
                            var_23 = ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [5]);
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_24 ^= ((/* implicit */unsigned int) (short)-28797);
                            var_25 = ((/* implicit */int) var_3);
                            var_26 *= ((/* implicit */short) ((((/* implicit */long long int) (-(((arr_6 [(_Bool)1]) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) / (arr_13 [i_0] [i_1] [i_2] [i_7] [(signed char)5])));
                        }
                        for (int i_11 = 2; i_11 < 17; i_11 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) var_10))));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_27 [(signed char)0] [i_7])) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_0))))))));
                            arr_38 [i_0] [i_7] [i_2] [i_7] [i_11 + 2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_11 + 1])) ? ((+(arr_3 [i_11 - 1]))) : ((-(arr_3 [i_11 + 2])))));
                        }
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((max((((var_7) ? (((/* implicit */long long int) var_1)) : (9223372036854775795LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_7] [i_0] [i_1] [i_0] [(signed char)7])), (arr_32 [i_7] [(_Bool)1] [(_Bool)1] [(_Bool)1])))) : ((~(((/* implicit */int) (unsigned char)255))))))))))));
                    }
                    var_31 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)0)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (arr_33 [i_0] [i_0] [i_0] [i_1] [i_0] [i_2] [i_2]))))), (((/* implicit */unsigned long long int) max(((signed char)(-127 - 1)), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (var_9)))))))));
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_9)) ? ((~(var_4))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (6)))))), (((/* implicit */unsigned long long int) var_9))));
    var_33 = ((((/* implicit */_Bool) var_4)) ? ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_3)) - (21740))))) : (((/* implicit */long long int) ((/* implicit */int) var_3))));
}
