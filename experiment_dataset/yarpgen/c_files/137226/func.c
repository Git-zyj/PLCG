/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137226
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((((((/* implicit */_Bool) var_0)) ? (18124916682346611999ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19694))))) ^ (((/* implicit */unsigned long long int) var_9)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
    var_12 = ((/* implicit */short) var_9);
    var_13 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) -911448779)), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)-19694)))))) / (((/* implicit */long long int) (-((-(((/* implicit */int) var_2)))))))));
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_4))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */short) ((max((var_10), (((/* implicit */long long int) (short)19690)))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
            var_16 -= ((/* implicit */short) (-(((int) 2147483647))));
            arr_7 [i_0] = ((((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19702))) : (arr_1 [i_1 + 1] [i_0]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0] [i_1]))))) < (((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_0])) ? (((/* implicit */long long int) -1606786927)) : (var_10))))))));
            arr_8 [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned short) ((int) (+(((/* implicit */int) (short)19694)))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (short)19712)) != (((/* implicit */int) arr_9 [i_0] [3] [i_0])))))));
            arr_12 [i_0] [i_0] [i_2] = ((/* implicit */int) var_3);
            var_17 |= ((/* implicit */unsigned char) var_9);
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_9 [i_0] [i_2 - 1] [i_2]))))) > ((+(((/* implicit */int) var_2))))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)19690)) < (((/* implicit */int) (short)19681))));
            var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_3 - 1] [i_3]))));
            var_21 ^= ((/* implicit */unsigned short) ((short) (short)19705));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 4) 
        {
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-(((((((/* implicit */_Bool) arr_0 [(unsigned char)4])) ? (((/* implicit */int) arr_2 [(_Bool)0])) : (((/* implicit */int) arr_4 [i_0] [0LL] [0LL])))) * (((/* implicit */int) min((arr_18 [0]), (((/* implicit */unsigned short) (short)-10189))))))))))));
            var_23 |= ((/* implicit */signed char) (short)-19688);
        }
    }
    /* vectorizable */
    for (long long int i_5 = 1; i_5 < 13; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_6 = 2; i_6 < 12; i_6 += 2) 
        {
            var_24 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19726)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)19682))) : (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(_Bool)1] [i_6 - 1] [i_6]))) : ((+(144904019U)))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_2))));
            var_26 = ((/* implicit */int) var_9);
            /* LoopSeq 1 */
            for (unsigned short i_7 = 1; i_7 < 10; i_7 += 1) 
            {
                arr_26 [i_5 - 1] [i_6] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))));
                var_27 = ((/* implicit */_Bool) arr_25 [i_7 + 1] [i_7 + 1] [i_5 - 1] [i_5 - 1]);
                arr_27 [i_5] [i_7 + 1] = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)240));
                arr_28 [i_7 + 2] [i_6 + 2] [0U] = ((/* implicit */long long int) (_Bool)1);
            }
        }
        var_28 ^= ((/* implicit */long long int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_8))));
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_9 = 2; i_9 < 19; i_9 += 3) 
        {
            arr_34 [i_9] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)241)) : ((~(((((/* implicit */int) var_6)) ^ (((/* implicit */int) (short)19673))))))));
            arr_35 [i_8] = ((/* implicit */unsigned long long int) var_1);
        }
        for (signed char i_10 = 2; i_10 < 19; i_10 += 3) 
        {
            var_29 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) (short)19725)), (((((/* implicit */int) var_2)) + (((/* implicit */int) arr_37 [i_8] [i_8] [i_10]))))))));
            var_30 ^= ((/* implicit */int) (!(((((/* implicit */_Bool) arr_31 [10U])) && (((/* implicit */_Bool) (unsigned char)35))))));
            /* LoopSeq 1 */
            for (short i_11 = 3; i_11 < 18; i_11 += 1) 
            {
                var_31 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-19702))));
                /* LoopSeq 2 */
                for (unsigned short i_12 = 3; i_12 < 19; i_12 += 2) 
                {
                    var_32 = ((/* implicit */unsigned long long int) arr_37 [i_8] [i_10] [i_8]);
                    var_33 = ((/* implicit */unsigned long long int) 401374442U);
                }
                for (unsigned char i_13 = 3; i_13 < 19; i_13 += 4) 
                {
                    var_34 = (+(((/* implicit */int) min((arr_37 [i_8] [i_10 - 2] [17LL]), (arr_37 [i_8] [i_10 - 1] [i_10 - 1])))));
                    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_30 [(_Bool)1])) % (((/* implicit */int) ((((/* implicit */int) arr_38 [i_10])) >= (((/* implicit */int) arr_46 [(unsigned char)9] [i_10] [i_11] [i_10] [i_8] [i_11 + 1])))))))) & (var_10))))));
                    arr_47 [i_8] [i_11 + 1] [i_10 + 1] [11ULL] [i_8 + 1] [i_8] = ((/* implicit */long long int) ((((((/* implicit */int) var_2)) - ((+(((/* implicit */int) (short)-5334)))))) + ((~(((/* implicit */int) (short)-19694))))));
                }
                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((short) (-(((/* implicit */int) var_8))))))));
            }
            var_37 = ((/* implicit */short) (signed char)28);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 1; i_14 < 19; i_14 += 2) 
        {
            for (int i_15 = 1; i_15 < 18; i_15 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 3; i_16 < 19; i_16 += 1) 
                    {
                        var_38 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) (short)-19694)) > (((/* implicit */int) var_2))))), (arr_36 [i_8]))))) * (min((((/* implicit */unsigned int) var_6)), (var_9)))));
                        var_39 |= ((/* implicit */unsigned short) min((((/* implicit */short) ((_Bool) ((short) var_6)))), ((short)-19702)));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_17 = 1; i_17 < 19; i_17 += 2) 
                        {
                            var_40 = ((/* implicit */int) var_8);
                            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) arr_51 [i_8] [i_16] [i_16] [i_16 - 2])) && (((/* implicit */_Bool) min(((short)19694), ((short)19687))))));
                            var_42 |= ((/* implicit */unsigned long long int) (!((!(var_7)))));
                        }
                        for (unsigned int i_18 = 2; i_18 < 16; i_18 += 2) 
                        {
                            var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) var_0))));
                            var_44 = ((/* implicit */unsigned char) 3893592853U);
                            var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_50 [i_8 + 1] [i_15] [i_18]))) && (((/* implicit */_Bool) var_2)))))));
                        }
                        for (unsigned short i_19 = 1; i_19 < 18; i_19 += 1) 
                        {
                            var_46 = ((/* implicit */int) (-((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (15130292843006451343ULL)))))));
                            var_47 ^= ((/* implicit */int) max(((~(min((var_10), (((/* implicit */long long int) arr_38 [i_14 + 1])))))), (((/* implicit */long long int) (~(max((((/* implicit */unsigned int) var_8)), (var_3))))))));
                            arr_63 [i_14] [i_8] [i_16 - 3] [4ULL] = ((/* implicit */unsigned char) (short)-19694);
                        }
                    }
                    /* LoopSeq 1 */
                    for (short i_20 = 1; i_20 < 19; i_20 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (int i_21 = 1; i_21 < 18; i_21 += 3) 
                        {
                            var_48 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_62 [i_8 + 1] [i_14 + 1] [i_14 + 1] [(short)10] [i_14] [i_15 + 1] [i_21 + 2])) ? (arr_50 [i_20 + 1] [i_20 + 1] [(unsigned short)10]) : (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_8))));
                            arr_68 [i_8] = max(((((~(((/* implicit */int) var_0)))) | (((int) arr_37 [i_8] [i_21] [i_15 + 2])))), (((/* implicit */int) arr_46 [i_8] [i_14 + 1] [i_15] [i_20] [i_14 + 1] [i_21])));
                            arr_69 [i_21 + 1] [i_8] [i_15] [i_8] [i_8 + 1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)19696)), (((((/* implicit */_Bool) arr_61 [i_8] [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_21])) ? (7629414940931379841LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                        }
                        for (int i_22 = 4; i_22 < 18; i_22 += 1) 
                        {
                            var_49 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((arr_45 [i_8] [i_8] [i_22 + 2] [i_22 - 2]) < (((/* implicit */unsigned long long int) -1024275698692421183LL))))), (max((arr_45 [i_8 + 1] [i_8] [i_22 - 4] [i_22]), (((/* implicit */unsigned long long int) -4621000533986051770LL))))));
                            var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_14])) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33609))) + (var_4)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-81)))) : (((/* implicit */int) arr_60 [i_8] [i_14 - 1] [i_8] [i_20] [i_22 - 1] [i_22 - 3]))))));
                        }
                        /* vectorizable */
                        for (int i_23 = 1; i_23 < 17; i_23 += 2) 
                        {
                            var_51 += ((/* implicit */unsigned int) (unsigned char)140);
                            var_52 = ((/* implicit */int) (short)19705);
                        }
                        for (unsigned char i_24 = 2; i_24 < 18; i_24 += 4) 
                        {
                            var_53 = ((/* implicit */int) var_4);
                            arr_81 [i_8] [i_14] [i_15] [i_20] [i_24 - 1] [i_8] [i_24 + 1] = ((/* implicit */short) (+(((/* implicit */int) var_6))));
                            var_54 = ((/* implicit */short) min((var_54), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) min((var_5), (((/* implicit */short) var_6))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_44 [i_8] [i_24] [i_20] [i_24 + 1])) : (((/* implicit */int) var_2))))))) || ((((+(arr_78 [i_24] [i_20] [i_24 - 1]))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                            var_55 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((int) arr_71 [i_8 + 1] [i_24 + 1] [4LL] [i_20 + 1] [i_8]))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (var_7))))) | (arr_55 [i_8] [i_8])))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_25 = 3; i_25 < 19; i_25 += 1) 
                        {
                            arr_86 [i_8] [i_14 - 1] [(unsigned char)3] [i_8] [(unsigned char)3] [i_25 - 2] [i_25 + 1] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (unsigned char)30))))) | (((/* implicit */int) arr_51 [i_14 - 1] [i_15 - 1] [i_8 + 1] [i_20 - 1]))))), ((+(((((/* implicit */long long int) ((/* implicit */int) (short)16256))) - (0LL)))))));
                            var_56 = ((/* implicit */int) ((((/* implicit */int) arr_64 [i_25 - 1] [i_15 - 1])) != (((/* implicit */int) var_0))));
                        }
                        arr_87 [i_8] [i_15] [i_14 - 1] [i_8] = ((/* implicit */short) arr_33 [i_8]);
                    }
                }
            } 
        } 
    }
}
