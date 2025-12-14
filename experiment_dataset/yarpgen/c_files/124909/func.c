/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124909
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
    var_19 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_20 ^= ((/* implicit */int) (-(arr_3 [i_0 + 1])));
        var_21 = ((/* implicit */long long int) (-(arr_0 [i_0 - 1])));
    }
    for (short i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4084471791U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (arr_5 [i_1] [i_1])))) ? ((-(1889285779519107908LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)104)))));
        arr_6 [i_1 + 1] [i_1] = ((/* implicit */unsigned short) arr_5 [i_1] [i_1]);
    }
    for (short i_2 = 2; i_2 < 18; i_2 += 4) 
    {
        var_23 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_2 - 1])) ? (((/* implicit */int) arr_9 [i_2 + 1])) : (((/* implicit */int) arr_9 [i_2 - 1])))));
        /* LoopSeq 1 */
        for (int i_3 = 1; i_3 < 18; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_4 = 4; i_4 < 17; i_4 += 1) 
            {
                var_24 |= ((/* implicit */short) ((((/* implicit */long long int) (-((-(((/* implicit */int) arr_8 [i_2]))))))) + (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_12)))) + (((arr_10 [i_2] [i_2]) / (arr_12 [i_4] [i_4] [i_2] [(unsigned short)16])))))));
                arr_16 [(unsigned char)5] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_7 [i_3 - 1] [i_2 - 2]))))));
                var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_9 [3U])) : (((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (arr_9 [i_2])))) : (((/* implicit */int) arr_14 [i_2 + 1] [i_2]))))));
            }
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_2 + 1] [i_2 - 1]))) & ((-((-(arr_11 [i_2]))))))))));
            /* LoopSeq 4 */
            for (int i_5 = 2; i_5 < 18; i_5 += 4) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [5])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (signed char)91))) ? ((-(((/* implicit */int) arr_14 [(unsigned char)9] [i_3])))) : ((~(((/* implicit */int) (signed char)-47))))))) : ((~(arr_13 [i_3] [i_2 + 1] [i_5 + 1])))));
                arr_20 [i_2 - 2] [(signed char)0] [i_3] = ((/* implicit */unsigned short) var_2);
                var_28 = min((((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) (signed char)24))), (((((/* implicit */_Bool) arr_11 [i_5])) ? (14U) : (var_8)))))), (min((((/* implicit */long long int) ((signed char) arr_11 [i_2]))), (arr_10 [i_2] [i_2]))));
                var_29 = ((/* implicit */signed char) (~(1290459012U)));
            }
            /* vectorizable */
            for (int i_6 = 2; i_6 < 18; i_6 += 4) /* same iter space */
            {
                var_30 += ((/* implicit */unsigned short) (-(((/* implicit */int) arr_14 [i_6] [i_6]))));
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (arr_21 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]) : (arr_21 [i_3] [i_3 - 1] [i_3] [i_3 + 1])));
                arr_23 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_13 [i_3] [i_3] [i_3]);
                arr_24 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_3])) || (((/* implicit */_Bool) -2035620720))))) > (((((/* implicit */_Bool) arr_7 [0LL] [i_6])) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) (signed char)-17))))));
            }
            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                arr_27 [(unsigned char)8] [i_3] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / ((-(((((/* implicit */_Bool) arr_11 [i_3])) ? (arr_17 [i_7] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) -1909417281))))))));
                arr_28 [i_3] [i_3] [18] = ((/* implicit */unsigned long long int) ((long long int) (+(((((/* implicit */_Bool) (signed char)-38)) ? (-4461496387486440531LL) : (arr_12 [(_Bool)1] [i_3 + 1] [i_3] [i_7]))))));
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_7]))))) ? (((/* implicit */int) arr_14 [i_2 - 1] [i_3])) : ((-(((/* implicit */int) arr_18 [i_3 - 1]))))));
            }
            for (int i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 3; i_9 < 16; i_9 += 4) 
                {
                    for (int i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_22 [i_2] [i_8] [i_9])))), (((/* implicit */int) max((arr_22 [i_2 - 2] [i_2 - 1] [i_2 + 1]), (arr_22 [(signed char)5] [i_3 - 1] [i_8]))))));
                            var_34 = ((/* implicit */unsigned char) ((((int) arr_17 [i_2 + 1] [i_2] [i_3 - 1] [i_9 + 1])) > (((/* implicit */int) ((((/* implicit */int) arr_31 [i_9 - 1] [i_3 - 1])) == (((/* implicit */int) arr_31 [i_9 - 1] [i_3 - 1])))))));
                            var_35 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((((/* implicit */int) min(((signed char)-104), ((signed char)127)))) + (2147483647))) >> (((unsigned long long int) 16U))))), ((~(((long long int) 1954836832336711327ULL))))));
                            var_36 = ((((long long int) ((((/* implicit */int) arr_33 [i_3])) ^ (((/* implicit */int) arr_7 [i_8] [(signed char)0]))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0)))) : ((~(((/* implicit */int) arr_22 [i_2 - 2] [i_3] [i_9]))))))));
                            var_37 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_35 [(unsigned char)1] [(signed char)2] [i_8] [i_9])), (arr_8 [(unsigned char)17]))))))) > (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-17)))) : ((+(1954836832336711327ULL)))))));
                        }
                    } 
                } 
                arr_37 [i_8] [(unsigned short)16] &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (16491907241372840292ULL) : (((/* implicit */unsigned long long int) var_2))))));
            }
            arr_38 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_30 [i_3 - 1]) ? (((/* implicit */int) arr_30 [i_3 + 1])) : (((/* implicit */int) arr_32 [i_3 + 1] [i_3] [i_3] [i_3] [i_2 - 1]))))) ? (((/* implicit */long long int) ((arr_30 [i_3 - 1]) ? (((/* implicit */int) arr_32 [i_3] [i_3] [i_3 + 1] [i_3] [i_2 + 1])) : (((/* implicit */int) arr_30 [i_3 - 1]))))) : (((long long int) arr_30 [i_3 + 1]))));
        }
        arr_39 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_2] [(signed char)2])) | (((/* implicit */int) arr_14 [12] [i_2]))))) ? (((((/* implicit */_Bool) 16491907241372840266ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-6999)))) : ((~(((/* implicit */int) arr_33 [i_2]))))))) ? (((unsigned int) (-(((/* implicit */int) arr_35 [i_2] [i_2 - 2] [i_2] [i_2]))))) : (max((arr_34 [i_2] [i_2]), (((/* implicit */unsigned int) var_1))))));
    }
}
