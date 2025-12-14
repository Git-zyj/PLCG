/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112188
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
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((var_12) / (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (unsigned short)22199))) + (839780909))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) arr_0 [i_0])))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                var_17 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) ((((/* implicit */_Bool) -839780910)) && (((/* implicit */_Bool) -1805201342))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) + (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)22199))))) / (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_1]))) : (var_4)))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-839780910)))) ? (max(((~(arr_3 [i_0] [i_1] [i_2]))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) : (var_12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_2])) + (var_9))))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) (((+(var_8))) / (((/* implicit */int) ((short) ((((/* implicit */int) (signed char)50)) + (((/* implicit */int) (short)21101))))))));
            }
            var_19 = ((/* implicit */unsigned char) (((-(arr_2 [i_0]))) / (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))))));
            arr_9 [i_0] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_1]))));
        }
        for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 4) 
        {
            arr_13 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (short)-23820);
            var_20 = ((/* implicit */unsigned long long int) var_0);
        }
        for (short i_4 = 1; i_4 < 16; i_4 += 2) 
        {
            var_21 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
            var_22 = ((/* implicit */long long int) (+(max(((+(((/* implicit */int) var_10)))), ((-(((/* implicit */int) (signed char)116))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 4) 
            {
                arr_18 [i_5] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((short) var_9)));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        {
                            arr_25 [i_5 + 3] [15] [i_6 + 1] [i_6 - 2] [i_7] [i_4 + 3] = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) arr_7 [i_5] [i_0] [i_5 - 3] [i_6 - 1])))));
                            var_23 = ((/* implicit */int) ((((((arr_12 [i_5] [i_6]) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) + (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)213), (((/* implicit */unsigned char) (signed char)-47)))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_14)))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_6 [i_0] [i_5] [i_7] [i_6]))))))));
                            var_24 = ((/* implicit */_Bool) var_0);
                            arr_26 [i_7] [(unsigned char)12] [i_6] [i_0] = min((-463341366), ((~(((/* implicit */int) (unsigned short)30699)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 2) 
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_5 - 3])) ^ (((/* implicit */int) (signed char)12))));
                    var_26 = ((/* implicit */short) (~(((/* implicit */int) var_13))));
                }
                for (unsigned long long int i_9 = 3; i_9 < 18; i_9 += 1) 
                {
                    var_27 = ((/* implicit */int) (-(((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_4] [i_5 + 1] [i_9 + 1]))) + (var_4))))));
                    arr_33 [i_4 - 1] [i_9 - 3] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)109)) / (((/* implicit */int) (_Bool)1))));
                }
                var_28 += ((/* implicit */short) ((13254541244427861918ULL) - (((((/* implicit */_Bool) 1733798128)) ? (var_12) : (((/* implicit */unsigned long long int) min((var_9), (-839780934))))))));
                var_29 -= ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (536854528) : (((/* implicit */int) (short)21922)))) > (((/* implicit */int) (signed char)46)))))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            var_30 = ((/* implicit */signed char) arr_12 [i_0] [i_0]);
            var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [i_0] [i_0])) * (((/* implicit */int) arr_17 [i_0]))));
            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))));
        }
        arr_37 [i_0] = ((/* implicit */unsigned short) arr_22 [i_0] [i_0] [(short)9] [i_0]);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_11 = 1; i_11 < 13; i_11 += 3) /* same iter space */
    {
        arr_41 [i_11] = ((/* implicit */int) (unsigned short)22182);
        var_33 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_11] [i_11 - 1] [i_11 + 3] [i_11 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43354))) : (5008167106530965560ULL)));
    }
    for (signed char i_12 = 1; i_12 < 13; i_12 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (int i_14 = 0; i_14 < 16; i_14 += 3) 
            {
                {
                    arr_50 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_24 [19ULL] [i_12 + 1]) / (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)10104)))))))) > (((((18446744073709551589ULL) / (((/* implicit */unsigned long long int) 359402636)))) + (((/* implicit */unsigned long long int) arr_15 [i_12 + 3] [i_14]))))));
                    var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_13] [i_13])) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_14]))) : (1U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [(unsigned char)12])) || (((/* implicit */_Bool) arr_28 [i_12 + 2] [i_13] [i_14] [7ULL])))))))))));
                    arr_51 [i_12 + 2] [i_13] [i_13] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_34 [i_12 + 1] [i_12 + 1])) | (((/* implicit */int) arr_34 [i_12] [i_13])))) << (((((/* implicit */int) (unsigned short)22187)) - (22186)))));
                    arr_52 [i_12] [i_12] [i_14] [i_13] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 0U)), (5008167106530965560ULL)))) && ((!(((/* implicit */_Bool) arr_43 [i_12 + 1])))))))) >= (max((min((((/* implicit */unsigned long long int) var_13)), (2097151ULL))), (arr_4 [i_14])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_35 = ((/* implicit */int) arr_15 [i_12] [i_13]);
                        var_36 += ((/* implicit */signed char) (unsigned short)43362);
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 4) 
                    {
                        arr_57 [i_12] [i_13] [i_13] = ((/* implicit */unsigned short) arr_55 [i_12] [i_12] [i_12] [i_12]);
                        arr_58 [i_13] [i_13] = ((/* implicit */unsigned long long int) (((+((-(428454207))))) / ((+(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)65519))))))));
                        arr_59 [i_12 + 2] [i_13] [i_13] [i_12 + 2] [i_14] [i_14] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (+(9U)))) ? (((((/* implicit */int) arr_35 [16] [i_16])) / (((/* implicit */int) (signed char)88)))) : (((/* implicit */int) arr_54 [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12 + 1]))))));
                    }
                }
            } 
        } 
        arr_60 [i_12] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)252), (arr_43 [i_12 + 3])))) || ((!(((/* implicit */_Bool) arr_36 [i_12 - 1] [i_12 - 1]))))))) & (((/* implicit */int) ((signed char) ((428454207) >> (((((/* implicit */int) (signed char)38)) - (24)))))))));
    }
}
