/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186710
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
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (arr_1 [i_0])))), ((signed char)30)))), (((((/* implicit */_Bool) (short)-29766)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_4 = 2; i_4 < 18; i_4 += 2) 
                    {
                        arr_17 [(_Bool)1] [i_0] [i_2] [i_0] [i_4] [i_0] [i_4] = ((/* implicit */short) -7258664986656161925LL);
                        var_13 = ((/* implicit */_Bool) (unsigned char)254);
                        arr_18 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 - 1])) ? (1287124671277801759LL) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)30100), (arr_10 [i_3] [i_4] [i_0] [i_3])))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1175887234)) ? (10015305597435899430ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28)))))) ? (((/* implicit */int) (unsigned short)25835)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)0)))))))) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)116))) : (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_2] [i_3]))) / (1LL)))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_14 = ((((long long int) (short)7220)) + (((/* implicit */long long int) ((/* implicit */int) (short)-7989))));
                        var_15 = 1LL;
                    }
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        var_16 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47511)) ? (arr_7 [i_0]) : (((/* implicit */long long int) 0U))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))) & (2426262996U))))));
                        arr_25 [i_1] [i_1] [i_0] [10U] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-102))) - (max((((/* implicit */long long int) (~(4294967295U)))), (-1LL)))));
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_1] [i_0] [i_0 - 1])) ? (((/* implicit */int) (short)-23926)) : (((/* implicit */int) (signed char)-6)))))));
                    }
                    for (short i_7 = 1; i_7 < 18; i_7 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) (signed char)-16);
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-24772)) >= (((((/* implicit */_Bool) (short)12889)) ? (((/* implicit */int) (short)-23931)) : (((/* implicit */int) (signed char)16)))))))) : (min((arr_7 [i_1]), (((/* implicit */long long int) (unsigned char)96)))))))));
                        var_20 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 10LL)) ? (arr_27 [i_0] [i_1] [i_0 + 1] [i_7 + 2] [i_7 + 1] [(unsigned char)10] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7 + 1] [i_0 + 1] [(_Bool)1]))))), (((/* implicit */unsigned int) arr_19 [i_3] [i_1] [i_2] [i_1] [i_2]))));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_22 [i_0] [i_0] [i_2] [i_0 - 2] [i_7 + 1] [i_0 - 2]))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_12 [i_7]), (((/* implicit */short) (_Bool)1))))) ? (arr_23 [i_1] [i_1]) : (((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-114))) : (8090107957750881954LL)))))) ? (((arr_13 [i_0 - 1] [i_0 + 1] [(unsigned short)0] [i_7 + 1]) - (((/* implicit */long long int) 489211170)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)123)) * (((/* implicit */int) (unsigned short)15701))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 806593188)) || ((_Bool)1))))) : (arr_23 [i_1] [i_1]))))))));
                    }
                    arr_28 [i_0] [i_0 - 2] [i_2] [i_0 - 2] = ((/* implicit */unsigned short) ((signed char) ((int) (signed char)126)));
                    var_23 = ((/* implicit */unsigned int) (short)23928);
                }
                var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30))) >= (((unsigned long long int) max((((/* implicit */int) arr_12 [i_0 + 1])), (var_12))))));
                arr_29 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)4605)) ? (arr_16 [(_Bool)1] [i_2] [i_2] [i_0 - 2] [(unsigned char)10] [i_0] [i_1]) : (((/* implicit */long long int) -183385763)))), (((((/* implicit */_Bool) 15360U)) ? (((/* implicit */long long int) 896890131U)) : (1LL)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1]))))) : ((-(((((/* implicit */_Bool) 9901979494098725562ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-102))) : (562571638U)))))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                arr_32 [i_0] [i_1] [i_1] [i_0] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)161)) >> (((/* implicit */int) (_Bool)1))))) - (3669295713U)));
                arr_33 [i_0 - 1] [i_0] [i_8] = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) 3126494302U)) ? (12LL) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_1] [i_1] [i_8] [i_1]))))))) < (((/* implicit */long long int) ((/* implicit */int) ((0LL) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0] [1ULL] [i_8] [1ULL] [i_8])) ? (arr_27 [i_0] [i_0] [5ULL] [i_0] [i_1] [i_1] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8))))))))))));
                arr_34 [i_0] [i_0 + 1] = ((/* implicit */signed char) min((min((((/* implicit */long long int) ((var_4) ? (var_12) : (((/* implicit */int) arr_31 [i_0] [(signed char)3] [(signed char)3] [(unsigned short)18]))))), (-25LL))), (((((/* implicit */_Bool) 1766582353U)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))))));
                /* LoopNest 2 */
                for (short i_9 = 1; i_9 < 19; i_9 += 1) 
                {
                    for (int i_10 = 2; i_10 < 19; i_10 += 3) 
                    {
                        {
                            arr_39 [i_0] [i_1] [i_0] [i_0] [i_0] [i_8] [3LL] = ((/* implicit */short) ((arr_38 [(_Bool)1] [i_8] [i_8] [i_9] [i_9]) % (((/* implicit */long long int) ((/* implicit */int) ((short) min((((/* implicit */long long int) (short)-1)), (1039399097345016746LL))))))));
                            var_25 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((short) (short)-8192))) ? (((/* implicit */int) arr_4 [i_0 - 2])) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_8] [i_9 - 1] [i_9 - 1]))))));
                            arr_40 [i_1] [(short)2] [(short)2] [i_9] [(signed char)16] [i_1] [i_9] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)26533)) & (((/* implicit */int) (unsigned char)215)))))));
                        }
                    } 
                } 
            }
            for (signed char i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (unsigned short)15))) == (((/* implicit */int) var_0))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 1; i_12 < 16; i_12 += 3) 
                {
                    for (unsigned long long int i_13 = 1; i_13 < 18; i_13 += 1) 
                    {
                        {
                            var_27 = var_7;
                            arr_47 [i_0] [i_12 - 1] [i_0] [i_12 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1677597653)) + (arr_20 [i_11] [i_12 + 1] [i_11] [i_12 + 1] [i_13 + 2])))) ? (((/* implicit */int) ((17732923532771328LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)22)))))) : (((((/* implicit */_Bool) arr_20 [i_1] [i_12 - 1] [i_11] [i_12] [i_1])) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) (unsigned char)70))))));
                            arr_48 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) arr_38 [i_0] [i_0] [i_11] [i_12] [i_0])))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */short) (unsigned short)18729);
                arr_49 [i_0] = ((/* implicit */_Bool) max((((((-1214342527) & (((/* implicit */int) var_6)))) ^ ((~(((/* implicit */int) arr_42 [i_0] [i_1] [i_0] [i_1])))))), (((/* implicit */int) (short)-26909))));
                var_29 = (+(((/* implicit */int) (signed char)75)));
            }
            arr_50 [i_1] [i_1] [i_1] &= ((/* implicit */_Bool) arr_21 [i_0 + 1] [i_1] [i_1] [i_0 - 1] [i_0] [i_0] [i_0 - 2]);
        }
        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 3) 
        {
            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 0)) > (arr_46 [i_0] [(unsigned short)16] [i_14] [i_14])))), (2262650586832529807ULL)))) ? (max((((/* implicit */long long int) (short)12470)), (arr_38 [i_0] [i_14] [(unsigned short)14] [i_0 - 2] [7]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 1817194678U)) < (8153248386060138882LL))))))))));
            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */int) (short)4095)) | (((/* implicit */int) (unsigned short)18729)))))));
        }
    }
    for (long long int i_15 = 0; i_15 < 21; i_15 += 1) 
    {
        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) 2528384943U))));
        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) arr_55 [i_15]))));
        var_34 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_56 [i_15]), (((/* implicit */short) arr_55 [i_15]))))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_0)))) : (min((13205175152420236770ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))))))) || (((/* implicit */_Bool) (unsigned char)248))));
        arr_57 [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_54 [i_15])))) & ((-(4389185037627164150LL)))))) ? (((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((((/* implicit */int) arr_54 [i_15])) ^ (((/* implicit */int) arr_54 [i_15])))) : (((/* implicit */int) arr_55 [i_15])))) : (((/* implicit */int) min(((unsigned short)46806), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709027328ULL)) || (arr_55 [i_15])))))))));
        arr_58 [i_15] = ((/* implicit */unsigned char) min((18047476427588340910ULL), (max((5241568921289314847ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [(short)0])) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) arr_54 [i_15])))))))));
    }
    var_35 = ((/* implicit */long long int) 2528384935U);
}
