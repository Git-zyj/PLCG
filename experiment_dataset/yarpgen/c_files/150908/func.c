/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150908
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
    var_13 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) arr_0 [i_0] [(unsigned char)6]))))))));
        var_15 = ((/* implicit */long long int) ((unsigned int) var_10));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned char) ((((-2147483636) + (2147483647))) << (((((((((/* implicit */_Bool) var_2)) ? (var_7) : (arr_0 [(short)13] [i_0]))) + (1475206772))) - (21)))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((short) ((var_0) - (((/* implicit */unsigned long long int) -2147483641)))));
            arr_7 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
        {
            arr_11 [i_0] [i_2] = ((/* implicit */unsigned int) var_8);
            arr_12 [3U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (2147483635) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [(unsigned char)6])) || (((/* implicit */_Bool) var_2)))))));
            arr_13 [i_0] [3ULL] [i_0] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned char)255))))));
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    var_16 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [(_Bool)1] [(signed char)6] [i_0])) | (((/* implicit */int) arr_10 [i_3] [i_2] [i_2]))));
                    arr_18 [i_0] [i_0] = ((/* implicit */int) (-(arr_17 [i_3] [i_3])));
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_16 [(signed char)20] [i_3] [i_0] [i_4] [20U]))));
                    var_18 *= (unsigned char)44;
                    arr_19 [i_2] [i_2] [i_0] [i_2] [i_2] [1ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
                }
                arr_20 [i_0] [(signed char)2] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)65082)) : (((/* implicit */int) arr_9 [i_0] [i_2]))))));
            }
            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_9 [24LL] [i_5]))));
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    arr_25 [i_2] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_10))));
                    arr_26 [8U] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_14 [7U] [(short)11]);
                    /* LoopSeq 3 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_29 [i_0] [i_0] [i_5] [(short)24] [i_0] = ((((/* implicit */_Bool) arr_17 [i_0] [i_2])) ? (((/* implicit */int) arr_10 [i_0] [i_2] [i_5])) : (((/* implicit */int) (short)5845)));
                        var_20 = ((/* implicit */long long int) ((_Bool) (unsigned char)212));
                        arr_30 [i_0] [i_6] [i_5] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) arr_2 [i_6]))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        arr_34 [(_Bool)1] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) ((0LL) | (((/* implicit */long long int) 44556651U))));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_8])))))));
                    }
                    for (int i_9 = 2; i_9 < 24; i_9 += 3) 
                    {
                        arr_37 [i_0] [i_6] [(unsigned short)8] [i_2] [(signed char)10] [24U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [10] [8ULL] [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9 - 2])) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) arr_28 [i_9] [i_0] [i_9 + 1] [i_9 - 1] [i_0] [i_9 - 2]))));
                        arr_38 [(unsigned short)20] [i_2] [i_0] [i_6] [i_9] = ((/* implicit */unsigned char) (+(arr_0 [i_0] [i_0])));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-131072) + (((/* implicit */int) (unsigned char)0))))) ? (arr_35 [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_9 - 1] [i_9 - 2] [i_9 + 1])))));
                    }
                    arr_39 [i_0] = ((/* implicit */unsigned int) var_11);
                }
                for (unsigned short i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    arr_43 [i_0] [i_0] [i_0] [(unsigned short)3] = ((((/* implicit */_Bool) 311766856151369761ULL)) || (((/* implicit */_Bool) (unsigned char)53)));
                    arr_44 [i_0] [i_0] [i_2] [i_10] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (arr_27 [i_5] [19ULL] [i_10] [i_10] [i_10] [15]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                    var_23 = ((/* implicit */_Bool) max((var_23), (((((/* implicit */_Bool) 840388511U)) && (((/* implicit */_Bool) arr_2 [i_0]))))));
                }
            }
        }
        for (unsigned char i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
        {
            arr_48 [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (min((arr_46 [i_0] [i_0]), (((/* implicit */unsigned int) arr_3 [i_0] [4U]))))));
            arr_49 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        }
        arr_50 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned char) var_9)), (((/* implicit */unsigned char) var_10)))))) * (arr_14 [i_0] [i_0])));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned int i_13 = 0; i_13 < 25; i_13 += 4) 
        {
            arr_55 [1U] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (((/* implicit */short) var_8))))) ? (arr_32 [(unsigned char)5] [i_12] [i_12] [(signed char)21] [i_13] [(_Bool)1] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))) || ((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)7622))) - (3708940456U))))))));
            /* LoopNest 3 */
            for (unsigned char i_14 = 0; i_14 < 25; i_14 += 4) 
            {
                for (short i_15 = 0; i_15 < 25; i_15 += 1) 
                {
                    for (unsigned long long int i_16 = 2; i_16 < 24; i_16 += 1) 
                    {
                        {
                            arr_64 [i_12] [i_12] [i_13] [24U] [i_15] [(short)13] [i_16] = ((/* implicit */long long int) ((max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [(unsigned char)5] [i_13])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_16 - 2] [i_16 - 1])))));
                            arr_65 [i_12] [i_13] [i_14] [16U] = ((/* implicit */long long int) ((((((/* implicit */_Bool) -7745265826558013807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)5554)))) : (17268079359545327915ULL))) / (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) arr_60 [i_16 - 1] [i_16 - 2] [i_16 - 2] [i_16] [i_16])))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [9ULL] [i_12] [i_13] [i_13]))) % (min((var_12), (((/* implicit */unsigned long long int) 2147483636))))));
        }
        for (long long int i_17 = 0; i_17 < 25; i_17 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */short) max((((/* implicit */int) arr_47 [i_17] [i_12])), ((-(((/* implicit */int) max((arr_1 [(unsigned short)4] [i_12]), (((/* implicit */unsigned short) var_8)))))))));
            arr_68 [i_12] [i_12] = ((/* implicit */signed char) (~((~(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
        }
        for (long long int i_18 = 0; i_18 < 25; i_18 += 2) /* same iter space */
        {
            arr_71 [(short)21] [i_12] = ((/* implicit */_Bool) ((3298433622790378006LL) ^ (8191LL)));
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */long long int) (+(arr_70 [i_18])))) * (((((/* implicit */long long int) arr_70 [i_18])) / (arr_27 [(short)21] [i_18] [i_18] [i_12] [i_12] [i_12]))))))));
        }
        arr_72 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_58 [i_12] [i_12])) | (((/* implicit */int) arr_24 [i_12] [i_12]))))) ? (((/* implicit */int) arr_58 [i_12] [i_12])) : (((/* implicit */int) arr_24 [i_12] [i_12]))));
    }
}
