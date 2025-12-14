/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184269
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((unsigned char) 2906518281U))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) (-((~(min((((/* implicit */unsigned long long int) (_Bool)0)), (var_16)))))));
                    arr_7 [i_0] [(unsigned short)10] [i_1] = ((/* implicit */short) ((unsigned long long int) (((_Bool)1) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)30449))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        var_22 = ((/* implicit */signed char) ((unsigned short) (_Bool)0));
        var_23 = ((/* implicit */long long int) (unsigned short)2);
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        arr_13 [i_4] [i_4] = ((((/* implicit */_Bool) (unsigned short)4785)) ? (((/* implicit */long long int) ((/* implicit */int) (short)30449))) : (var_9));
        arr_14 [i_4] = ((/* implicit */short) var_17);
    }
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        arr_18 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? ((~(var_18))) : (((/* implicit */unsigned long long int) max((arr_16 [i_5]), (((/* implicit */unsigned int) var_12)))))));
        arr_19 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_15 [12]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5]))) : (((arr_16 [(unsigned short)0]) - (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))) ? (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) arr_9 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (585143020U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_17)) < (((/* implicit */int) arr_9 [i_5]))))))));
    }
    for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_27 [i_7] [i_6] [i_7] = ((/* implicit */int) var_2);
            arr_28 [i_7] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))));
            arr_29 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)39513)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6]))) : (var_2)));
        }
        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            arr_33 [(_Bool)1] [i_8] [6U] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_8] [i_6])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        {
                            var_24 = var_6;
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_21 [i_6])))) : (((/* implicit */int) arr_21 [i_6]))));
                            var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)3)) ? (((6770394213054336485ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4785))))) : (min((var_15), (((/* implicit */unsigned long long int) (unsigned char)9)))))) > (((/* implicit */unsigned long long int) 2906518281U))));
                            var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_14))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)-75), (((/* implicit */signed char) (_Bool)1))))) ? ((~(((/* implicit */int) ((signed char) arr_41 [(unsigned short)12] [(unsigned char)11] [i_9] [i_9] [i_8] [(unsigned short)12] [2]))))) : (((/* implicit */int) (short)-1))));
                        }
                    } 
                } 
                var_29 = max((((/* implicit */long long int) (-(((/* implicit */int) arr_38 [i_6] [i_6] [i_6] [i_8]))))), (((((/* implicit */long long int) 1388449021U)) + (var_9))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 15; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_40 [(unsigned char)14] [i_12])), (var_1)))) ? (((((/* implicit */unsigned int) (~(-670101222)))) * (1388449021U))) : (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (-1777415229)))))))));
                            var_31 *= ((/* implicit */short) (+(((/* implicit */int) var_17))));
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) max((((/* implicit */int) var_17)), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (var_4)))) ? (((/* implicit */int) arr_26 [(_Bool)1] [i_9])) : (((/* implicit */int) ((var_10) && (((/* implicit */_Bool) var_5))))))))))));
                            arr_47 [i_6] [i_8] [i_9] [i_8] [i_12] [i_13] = min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_6] [i_6])) | (((/* implicit */int) arr_20 [i_12] [2ULL]))))), (max((arr_39 [i_8]), (((/* implicit */unsigned long long int) arr_20 [i_8] [i_13])))));
                        }
                    } 
                } 
            }
            arr_48 [4] [i_8] &= ((/* implicit */unsigned char) 13706157807789158848ULL);
        }
        for (short i_14 = 0; i_14 < 15; i_14 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_15 = 0; i_15 < 15; i_15 += 1) 
            {
                for (signed char i_16 = 0; i_16 < 15; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((255), (((/* implicit */int) (signed char)-38))))) ? (14089533) : (((/* implicit */int) (unsigned short)50599)))), (((/* implicit */int) (unsigned short)0))));
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)248)) ? (((((/* implicit */long long int) 1054263311)) + (((long long int) arr_59 [7ULL] [i_14] [i_15] [i_17])))) : (max((((((/* implicit */_Bool) arr_34 [i_17] [(unsigned short)14] [i_15] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_1))), (((/* implicit */long long int) (-(((/* implicit */int) arr_43 [i_6] [i_14] [12] [i_16])))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 1) 
            {
                arr_64 [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)53785)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5351))) : (((var_10) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8447)))))));
                arr_65 [(unsigned char)6] [i_14] [(unsigned char)6] &= ((/* implicit */unsigned short) arr_62 [i_6]);
                var_35 = ((/* implicit */short) var_10);
                arr_66 [i_6] [i_14] [i_18] = ((/* implicit */short) arr_30 [i_14] [i_14]);
                /* LoopSeq 3 */
                for (signed char i_19 = 0; i_19 < 15; i_19 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_20 = 0; i_20 < 15; i_20 += 1) 
                    {
                        arr_73 [i_6] [i_14] = ((/* implicit */unsigned int) var_3);
                        var_36 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_14] [i_18] [i_19] [i_20])) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) arr_21 [i_18]))));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_38 = ((/* implicit */unsigned long long int) (signed char)-1);
                    }
                    var_39 = ((/* implicit */unsigned short) arr_58 [i_19] [i_19] [i_19] [i_18] [i_18] [i_14] [i_6]);
                    /* LoopSeq 2 */
                    for (long long int i_22 = 0; i_22 < 15; i_22 += 1) 
                    {
                        var_40 *= ((/* implicit */short) arr_35 [i_14] [i_22]);
                        arr_79 [7ULL] [i_14] [i_18] [i_14] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_26 [i_6] [i_6])) : (((/* implicit */int) var_4))));
                        var_41 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_54 [i_14] [4LL] [(unsigned short)3] [i_22])) && (var_10))))));
                        var_42 = ((/* implicit */unsigned short) arr_20 [i_6] [i_22]);
                        var_43 *= (!(((/* implicit */_Bool) (short)0)));
                    }
                    for (unsigned long long int i_23 = 0; i_23 < 15; i_23 += 1) 
                    {
                        var_44 = ((/* implicit */long long int) (short)32767);
                        var_45 = ((/* implicit */unsigned char) (~(((unsigned int) arr_45 [i_14] [10ULL] [i_18]))));
                        var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) (~(((/* implicit */int) (short)32763)))))));
                        var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_69 [(_Bool)1] [i_14] [12ULL] [i_19] [i_14])) : (((/* implicit */int) arr_49 [i_14] [i_18] [i_19]))))) : (var_2)));
                    }
                    var_48 *= ((/* implicit */short) 2906518281U);
                }
                for (signed char i_24 = 0; i_24 < 15; i_24 += 1) 
                {
                    arr_86 [i_14] [i_14] [(short)1] [i_14] [(short)1] = ((/* implicit */unsigned short) var_17);
                    arr_87 [i_6] [i_14] [7] [i_6] = ((/* implicit */_Bool) (unsigned short)0);
                    arr_88 [i_6] [i_14] [i_18] [i_14] [i_18] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)38897)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33335))) / (var_2))) : (((/* implicit */long long int) ((var_10) ? (((/* implicit */int) (unsigned char)31)) : (arr_55 [i_6] [i_14] [i_18] [i_18]))))));
                }
                for (unsigned char i_25 = 0; i_25 < 15; i_25 += 1) 
                {
                    arr_92 [14U] [14U] [i_14] [i_18] [i_14] [i_18] = ((/* implicit */unsigned short) var_15);
                    arr_93 [i_6] [i_6] [i_6] [i_14] = ((/* implicit */unsigned short) (~(var_9)));
                    arr_94 [(short)9] [i_14] [i_14] [11LL] = ((/* implicit */int) arr_49 [i_14] [i_14] [i_14]);
                    var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) var_2))));
                }
            }
            arr_95 [i_6] [7U] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_52 [i_14] [i_14] [i_14]), (var_8)))) ? (((unsigned long long int) ((var_10) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)8447))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65526)))));
        }
        var_50 = ((/* implicit */int) ((max((min((((/* implicit */long long int) (unsigned short)14336)), (-2392937450301099715LL))), (((/* implicit */long long int) var_4)))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 2906518286U))))) ? ((-(((/* implicit */int) (short)-30450)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (var_10)))))))));
        var_51 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60761)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned short)60735)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_6] [i_6] [i_6] [i_6]))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
    }
    var_52 = ((/* implicit */unsigned long long int) var_1);
}
