/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139352
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) min((var_10), (var_7)));
        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (+(min((max((arr_0 [i_0]), (((/* implicit */long long int) (signed char)-81)))), (((((/* implicit */_Bool) 274877898752ULL)) ? (arr_3 [13ULL]) : (((/* implicit */long long int) ((/* implicit */int) (short)27353))))))))))));
    }
    for (long long int i_1 = 3; i_1 < 20; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) arr_5 [i_1 + 1] [i_1 + 1]);
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 1) 
        {
            var_12 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) ((unsigned short) arr_8 [i_1] [i_1] [(unsigned char)12])))))) > (((/* implicit */int) ((short) ((((/* implicit */int) arr_5 [i_1] [i_1])) & (((/* implicit */int) var_7))))))));
            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) min((((unsigned long long int) arr_5 [i_2 - 1] [i_2])), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 3136445940U)) != (arr_8 [i_2 - 2] [i_2] [i_2])))))))));
            arr_10 [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) arr_7 [i_1] [i_1] [(signed char)1])), (((((/* implicit */_Bool) (~(-23LL)))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
            arr_11 [i_1] = ((/* implicit */unsigned short) ((arr_8 [i_1] [(short)0] [(_Bool)1]) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-60)))));
        }
        for (long long int i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
        {
            arr_14 [i_1] [i_1] = ((/* implicit */unsigned int) arr_9 [i_1]);
            arr_15 [i_1] [i_1 - 2] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((arr_9 [i_1]), (((/* implicit */short) arr_12 [i_1] [i_3] [i_3]))))) || (arr_12 [i_1 - 2] [i_1 - 1] [i_1 - 2]))) ? (((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (min((((/* implicit */unsigned int) (_Bool)1)), (4294967295U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))));
            arr_16 [i_1] [(short)2] [i_3] = max((((/* implicit */unsigned int) min((min((((/* implicit */short) (unsigned char)97)), (arr_7 [i_1] [i_3] [i_3]))), (((/* implicit */short) arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))), (max(((-(1487801004U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (unsigned short)58788)) : (((/* implicit */int) (unsigned char)89))))))));
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 1487801004U)))))))));
                arr_19 [i_1] [i_1] [i_4] [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (+(min((arr_8 [i_1] [(unsigned short)11] [i_4]), (((/* implicit */long long int) arr_5 [i_1] [(short)16]))))))) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-23))))), (var_6)))));
            }
            for (unsigned int i_5 = 1; i_5 < 20; i_5 += 1) 
            {
                var_15 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 - 3] [i_5 - 1])) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 1] [i_5 + 1])) : (((/* implicit */int) arr_7 [i_1 - 2] [i_1 - 3] [i_5 - 1])))), ((~(((/* implicit */int) arr_7 [i_1 - 3] [i_1 - 1] [i_5 - 1]))))));
                arr_23 [i_1] = ((/* implicit */short) arr_20 [i_5] [i_1] [i_5]);
            }
        }
        for (long long int i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_18 [i_1 - 2] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_18 [i_1 - 2] [i_1 - 1] [i_1 - 1])))) > (((/* implicit */int) min((arr_18 [i_1 - 2] [i_1 - 1] [i_1 - 1]), (arr_18 [i_1 - 2] [i_1 - 1] [i_1 - 1]))))));
            arr_26 [i_6] |= ((/* implicit */unsigned int) (+(((/* implicit */int) (short)32764))));
            /* LoopSeq 4 */
            for (short i_7 = 2; i_7 < 20; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)19147)) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) arr_18 [i_1] [i_8] [i_9]))))) : (arr_25 [(short)14] [i_6] [i_8])))) ? (((/* implicit */unsigned long long int) arr_22 [i_1] [i_6] [i_8])) : (((((/* implicit */_Bool) (short)8064)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5903))) : (var_6)))));
                            var_18 = ((/* implicit */short) arr_31 [i_1] [i_1] [i_1 - 1]);
                            arr_36 [i_1] [i_1] [i_1] [i_8] = ((/* implicit */unsigned int) ((short) (short)-28274));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    arr_41 [i_1] [i_6] [i_6] [0LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_17 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_1 - 2] [i_6] [7ULL] [i_10] [i_1 - 2] [i_10]))) : (arr_21 [i_1] [i_6] [i_7] [i_10])));
                    arr_42 [i_1] [i_6] [1LL] [1LL] = ((/* implicit */unsigned long long int) (short)-23458);
                    var_19 = ((short) arr_37 [i_1] [i_1]);
                    arr_43 [i_1] [i_1] [i_7 + 1] [i_10] [i_7] [(signed char)15] = ((/* implicit */unsigned long long int) var_9);
                    var_20 *= ((/* implicit */unsigned char) arr_9 [i_7 - 2]);
                }
                for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    arr_48 [i_11] [i_1] [i_7] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_44 [i_7] [i_7] [i_7 + 1] [i_7 - 1] [i_7 - 2] [(_Bool)1])) && (((/* implicit */_Bool) max((arr_38 [i_7 - 1] [i_7] [i_7 + 1] [i_7 - 2] [i_7] [i_7]), (arr_38 [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7] [i_7]))))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) min(((unsigned short)55676), (((/* implicit */unsigned short) (unsigned char)128)))))));
                }
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1023U)), (((18446744073709551608ULL) | (2683865050860391047ULL)))))) ? (min((((((/* implicit */_Bool) arr_38 [7U] [i_1] [i_1] [i_6] [i_6] [(short)10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_45 [i_1] [i_1] [i_1] [i_6] [i_7] [i_7])))), ((~(((/* implicit */int) arr_44 [i_1 + 1] [i_6] [(short)10] [(short)4] [i_7] [i_7])))))) : ((~((~(((/* implicit */int) arr_46 [i_1] [i_6] [i_7] [i_1])))))))))));
                arr_49 [i_1] [i_1] [(unsigned char)0] = ((/* implicit */unsigned int) -5LL);
            }
            for (short i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                arr_52 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned int) min((((/* implicit */int) max((var_1), (((/* implicit */short) (unsigned char)255))))), (((((/* implicit */_Bool) arr_27 [i_1])) ? (((/* implicit */int) arr_24 [i_1] [i_6] [(unsigned char)12])) : (((/* implicit */int) arr_7 [i_1 - 3] [(short)13] [(unsigned char)4])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 4) 
                {
                    arr_56 [i_1] [(short)9] [i_1] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_1] [i_1 - 1] [i_1 - 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_1 - 3] [i_1 - 1] [i_1 - 3] [i_1 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_6]))))))))));
                }
            }
            for (short i_14 = 1; i_14 < 19; i_14 += 4) 
            {
                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) min((arr_40 [i_1 - 2] [i_6] [i_14] [i_6]), (((/* implicit */unsigned int) ((min((arr_55 [i_1] [i_6] [i_1] [(unsigned short)17]), (((/* implicit */unsigned long long int) var_1)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_24 [i_6] [i_6] [i_1]), (((/* implicit */short) arr_32 [i_6] [i_6]))))))))))))));
                var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_34 [i_1] [i_1] [i_1] [i_14 + 2] [i_6])))) ? (((/* implicit */int) ((short) var_1))) : (((/* implicit */int) arr_53 [i_1] [i_1] [i_14] [i_1]))));
            }
            for (long long int i_15 = 0; i_15 < 21; i_15 += 1) 
            {
                arr_63 [i_1] [i_1] [i_15] = ((/* implicit */short) (-(min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)22))) : (2807166277U))), (((/* implicit */unsigned int) (short)0))))));
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned long long int) var_0)), (var_6))))) || (((/* implicit */_Bool) var_8))));
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_60 [i_15] [i_15] [i_6] [(unsigned short)9]))) ^ (((((/* implicit */long long int) (-(var_3)))) - (4259419017724559786LL)))));
            }
            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (~(max((((((/* implicit */_Bool) arr_51 [i_1] [i_1] [i_1])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) ((unsigned short) 1U))))))))));
        }
        var_29 = ((/* implicit */unsigned short) ((min((min((var_6), (((/* implicit */unsigned long long int) (unsigned char)50)))), (((/* implicit */unsigned long long int) arr_29 [i_1] [i_1] [i_1] [i_1])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1 - 2] [i_1])))));
    }
    var_30 = ((/* implicit */unsigned short) min((min((((((/* implicit */int) var_2)) / (((/* implicit */int) (short)32766)))), (((/* implicit */int) var_8)))), (((/* implicit */int) var_2))));
    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), ((-(min((((/* implicit */unsigned long long int) var_5)), (var_6))))))))));
}
