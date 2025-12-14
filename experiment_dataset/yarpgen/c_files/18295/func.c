/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18295
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
    var_15 = var_5;
    var_16 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_11))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
        {
            arr_6 [i_0] = min((((unsigned long long int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (unsigned short)47748))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) arr_0 [i_1]))))));
            var_17 = ((/* implicit */unsigned char) min((min((((((/* implicit */int) var_6)) + (arr_3 [i_0] [i_1]))), (((((/* implicit */int) var_5)) * (((/* implicit */int) arr_0 [i_1])))))), (((/* implicit */int) (unsigned short)17786))));
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
        {
            arr_10 [3U] [3U] = ((/* implicit */unsigned int) (((((-(((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_0])) ? (((/* implicit */int) arr_8 [14U] [(short)6] [i_2])) : (((/* implicit */int) arr_5 [i_0])))))) + (2147483647))) >> (((((/* implicit */int) arr_8 [i_0] [i_2] [i_2])) - (48024)))));
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            var_18 &= ((((/* implicit */int) arr_7 [i_2] [i_2])) > (((((/* implicit */_Bool) -2837635676554746274LL)) ? (((/* implicit */int) ((short) arr_1 [i_0]))) : ((+(var_0))))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_4))));
                            var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_14)))) || (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [(short)5])) && (((/* implicit */_Bool) arr_4 [i_2])))))) || (((/* implicit */_Bool) min((16776192U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_18 [i_4] [i_3] [i_2] [i_0]))))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */int) (((!(((/* implicit */_Bool) 14833687985922607443ULL)))) ? (min((var_13), (((/* implicit */long long int) (signed char)-13)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_5)))) : ((~(((/* implicit */int) (signed char)-111)))))))));
            /* LoopNest 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    {
                        var_22 += arr_1 [i_7 - 1];
                        var_23 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_20 [i_7 - 1] [i_7 - 1] [i_7])) ? (((((/* implicit */_Bool) (unsigned short)17787)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [3LL] [i_6] [i_7 - 1] [i_8]))))) : (((/* implicit */unsigned long long int) arr_14 [i_7 - 1] [i_7 - 1] [i_7 - 1]))))));
                        var_24 = ((/* implicit */int) min((arr_8 [1LL] [i_6] [i_6]), (((/* implicit */unsigned short) (_Bool)1))));
                    }
                } 
            } 
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (-(((((/* implicit */int) (unsigned short)14758)) + (((/* implicit */int) (unsigned char)94)))))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                for (short i_10 = 1; i_10 < 22; i_10 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_7 [i_9] [i_10 + 1])) : (((/* implicit */int) arr_28 [i_0]))))))));
                            var_27 -= ((/* implicit */unsigned char) (-((-(arr_29 [i_0] [i_10 + 1] [i_10 + 1] [i_10 + 1])))));
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((unsigned char) ((int) (_Bool)1))))));
                            var_29 -= ((/* implicit */unsigned char) (-(1894286755)));
                            var_30 -= ((/* implicit */int) ((short) var_1));
                        }
                        arr_36 [i_10 - 1] [i_10] [i_9] [(short)7] [i_6] [i_0] = arr_5 [i_10];
                    }
                } 
            } 
        }
        var_31 = ((/* implicit */short) ((((/* implicit */int) var_3)) * (((/* implicit */int) min((arr_28 [i_0]), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [(unsigned char)14]))) < (arr_25 [i_0])))))))));
        var_32 += ((/* implicit */unsigned char) arr_15 [i_0] [i_0]);
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3264506401U)) || (((/* implicit */_Bool) (unsigned char)145))));
    }
    for (unsigned long long int i_12 = 1; i_12 < 19; i_12 += 4) 
    {
        arr_39 [i_12 + 1] [i_12 + 1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_20 [i_12 + 1] [i_12 + 1] [i_12 - 1]))))), (((long long int) var_11))));
        /* LoopSeq 4 */
        for (int i_13 = 2; i_13 < 19; i_13 += 2) 
        {
            arr_43 [i_12] = ((/* implicit */signed char) max(((~(var_0))), (((/* implicit */int) (!(((/* implicit */_Bool) min((0), (((/* implicit */int) (unsigned short)17796))))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) min((((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_18 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 1])), (((unsigned char) var_5))))), (arr_20 [i_14] [i_12 + 1] [i_12 + 1]))))));
                var_35 -= ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_8))))));
                arr_47 [10ULL] [3ULL] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_12 + 1] [i_12 - 1] [i_13 + 1]))) % (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_0)) : (arr_45 [i_12 + 1] [i_13] [i_13] [i_14])))))) ? (((/* implicit */int) (((_Bool)1) || (((((/* implicit */int) var_10)) >= (((/* implicit */int) var_10))))))) : (((int) arr_34 [i_12 - 1] [i_12 - 1] [i_13 - 2]))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    arr_52 [i_12] [i_14] [i_13 - 1] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_12 - 1] [i_12])) ? (((((/* implicit */_Bool) arr_49 [i_12 + 1] [i_12 + 1] [i_14] [(unsigned short)9])) ? (2835907051U) : (arr_29 [i_12] [i_13] [i_12] [i_15]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_12 + 1])))));
                    var_36 -= ((unsigned int) (unsigned char)110);
                    var_37 -= ((/* implicit */unsigned char) arr_22 [i_13] [i_13]);
                }
                for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 1; i_17 < 17; i_17 += 4) 
                    {
                        var_38 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_12] [i_17] [i_14] [i_16] [i_12])) ? (((/* implicit */int) arr_18 [i_12] [i_12] [i_12] [i_12 - 1])) : (((/* implicit */int) arr_40 [i_14]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1231578122)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))) >> (((((((arr_50 [i_17] [(unsigned char)10] [i_13 - 1] [i_12]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_12]))))) & ((~(6886753597019023752ULL))))) - (9242532225533707362ULL)))));
                        arr_57 [i_17] [i_16] [i_13 - 1] [i_13 - 1] [i_17] = ((/* implicit */short) min((((/* implicit */int) arr_42 [i_12] [i_16] [i_17 + 1])), (((((/* implicit */int) arr_42 [i_12 - 1] [i_13 - 2] [i_14])) + (((/* implicit */int) arr_42 [i_13 - 2] [i_16] [i_13 - 2]))))));
                        var_39 -= ((/* implicit */unsigned short) max((67106816), (((/* implicit */int) (unsigned short)47750))));
                    }
                    arr_58 [i_12] [(short)11] [(short)11] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_12 - 1] [i_12])) || (((/* implicit */_Bool) var_1)))))) > (13332950869370736478ULL)))) + (((/* implicit */int) ((_Bool) arr_16 [13U] [i_13 + 1] [13U] [i_13 + 1] [i_12 - 1] [i_13 + 1])))));
                }
                for (unsigned int i_18 = 0; i_18 < 20; i_18 += 2) 
                {
                    arr_62 [i_12 - 1] [i_13 + 1] [i_14] [i_13 + 1] [i_12] &= ((/* implicit */long long int) ((var_7) > (((((/* implicit */_Bool) arr_29 [i_13 - 2] [i_13 + 1] [i_14] [(unsigned char)5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (3971752636U)))));
                    arr_63 [i_12] [i_12] [i_12] [i_12 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) != (((/* implicit */int) (unsigned short)19)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max((arr_12 [i_12] [i_13] [i_14] [i_12 + 1]), (((/* implicit */unsigned short) (short)-18622)))))))) && (((/* implicit */_Bool) var_12))));
                    var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) (!(var_4))))));
                }
                var_41 = 3554681964575614086LL;
            }
            arr_64 [i_13] = ((/* implicit */long long int) ((18446744073709551612ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_12] [i_13] [i_13 + 1])))));
            /* LoopNest 2 */
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
            {
                for (short i_20 = 0; i_20 < 20; i_20 += 4) 
                {
                    {
                        var_42 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((2147483647), (((/* implicit */int) arr_51 [i_13 + 1]))))), (((((((/* implicit */int) var_11)) <= (((/* implicit */int) arr_9 [i_19] [i_19 - 1])))) ? (((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)228)))))));
                        arr_69 [16] [16] [16] [i_19] [i_20] = ((/* implicit */long long int) var_14);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_21 = 2; i_21 < 18; i_21 += 2) 
            {
                var_43 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) arr_72 [i_12] [i_13] [i_21] [i_13 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (min((((/* implicit */unsigned long long int) var_9)), (16656171932854447002ULL)))))));
                var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_26 [i_21 - 2] [i_21 - 1] [i_21 - 1]), (arr_26 [i_21 + 1] [i_21] [i_21 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_21 + 1] [i_21 - 1] [i_13 - 2] [11U] [i_12]))) : (2793722628445625496ULL)));
            }
        }
        for (short i_22 = 0; i_22 < 20; i_22 += 4) 
        {
            arr_76 [i_22] [i_12 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_11))));
            var_45 -= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (+(arr_74 [i_12] [i_12])))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)23808))) & (-247884583925004053LL))) : (((var_13) - (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
            arr_77 [i_12 + 1] [(short)18] [(short)18] = ((/* implicit */unsigned char) (((+(1465419904128027353LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) 3495322183108618259LL)))))));
            var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -1231578122)) ? (((/* implicit */unsigned long long int) 4294967294U)) : (26ULL))))));
        }
        for (unsigned char i_23 = 1; i_23 < 17; i_23 += 4) 
        {
            var_47 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14761)) ? (((/* implicit */unsigned long long int) 3748057120279421791LL)) : (4002838381983673165ULL)))) || (((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) 9956821173534102213ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)63))))));
            var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_12 - 1] [i_23 + 3] [i_12] [i_23 + 2] [i_12 + 1])) ? (((((/* implicit */int) arr_67 [i_12 - 1] [i_23 - 1] [i_23 + 2] [i_23 - 1] [i_12 + 1])) / (((/* implicit */int) (unsigned short)51059)))) : (((/* implicit */int) ((arr_45 [i_23 - 1] [i_23 + 1] [i_23 + 2] [i_23 - 1]) >= (arr_45 [i_23 + 2] [i_23 - 1] [i_23] [i_23 + 2]))))));
        }
        for (unsigned long long int i_24 = 0; i_24 < 20; i_24 += 3) 
        {
            arr_83 [i_12] [i_24] = ((/* implicit */long long int) min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) (unsigned short)17796)))), (((/* implicit */int) arr_35 [i_12] [i_12] [i_12 - 1] [i_12 - 1] [i_12 + 1]))));
            /* LoopSeq 1 */
            for (int i_25 = 3; i_25 < 18; i_25 += 4) 
            {
                arr_86 [i_12] [i_24] = var_3;
                arr_87 [i_12 - 1] [i_24] [i_12] = ((/* implicit */unsigned short) arr_72 [i_12 + 1] [i_24] [i_12 + 1] [i_12 + 1]);
            }
            var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) arr_53 [i_12] [i_24] [i_24]))));
        }
    }
}
