/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189367
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_15) : (var_15)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) 3417130747U)) : (4376659744466886992LL)))) ? (var_10) : ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (+(-4638865654940921097LL))))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0 + 2]) + (((/* implicit */long long int) 2147483641))))) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) (short)-10569)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    var_20 = ((/* implicit */unsigned char) (-(4638865654940921081LL)));
                    arr_9 [i_0 + 2] [i_0 + 2] [i_3] [i_0 + 2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_14))) <= (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_5)))));
                    arr_10 [9] [i_1] [i_3] = ((/* implicit */short) ((arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 2]) | (((/* implicit */int) var_12))));
                }
                for (short i_4 = 1; i_4 < 10; i_4 += 4) 
                {
                    var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -4638865654940921092LL)) ? (((/* implicit */long long int) 0)) : (var_5))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) (signed char)73)))))));
                    arr_15 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_0 + 2] [i_0 + 1] [i_4 - 1] [i_4 + 1])) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_1])) && (((/* implicit */_Bool) (signed char)75)))))));
                    arr_16 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)128))));
                    var_22 = (+(((/* implicit */int) (unsigned char)247)));
                }
                var_23 = ((/* implicit */unsigned short) ((var_5) + ((+(arr_7 [(short)2] [i_1] [i_2] [(short)2])))));
            }
            /* LoopSeq 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopSeq 4 */
                for (signed char i_6 = 1; i_6 < 8; i_6 += 2) 
                {
                    var_24 = arr_1 [i_6 + 1] [i_0 + 2];
                    arr_23 [i_0] [i_1] [i_6] [i_6] = (-((+(((/* implicit */int) var_7)))));
                }
                for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    arr_26 [(signed char)6] [i_1] [(signed char)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_7] [i_1] [i_5] [i_0 - 1])) && ((_Bool)0)));
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */int) (signed char)-90)) ^ (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)133))))));
                        arr_29 [i_0] = ((/* implicit */signed char) -2761874165241096071LL);
                        var_26 = ((/* implicit */signed char) (unsigned char)147);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_32 [i_0] [i_9] [i_7] = ((/* implicit */unsigned char) 4638865654940921096LL);
                        var_27 = ((/* implicit */short) ((((/* implicit */int) var_9)) * (-1)));
                    }
                    arr_33 [i_0] [i_1] [i_5] [i_7] [i_7] = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_5] [i_7] [i_0]);
                }
                for (int i_10 = 2; i_10 < 10; i_10 += 3) /* same iter space */
                {
                    var_28 ^= ((/* implicit */unsigned short) var_5);
                    arr_37 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -877147095)) ? (-124947924) : (((/* implicit */int) (signed char)-27))));
                }
                for (int i_11 = 2; i_11 < 10; i_11 += 3) /* same iter space */
                {
                    arr_40 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_11] [i_11 - 1] = ((/* implicit */_Bool) var_1);
                    var_29 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0 - 1])) - ((-(((/* implicit */int) arr_35 [i_1] [i_1] [i_11 + 1]))))));
                    arr_41 [i_11 - 2] [i_5] [i_0 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) ((signed char) (_Bool)1)))));
                }
                /* LoopSeq 4 */
                for (short i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    var_30 = ((/* implicit */unsigned char) var_4);
                    var_31 = ((/* implicit */long long int) (-(((((/* implicit */int) (signed char)48)) + (((/* implicit */int) (unsigned char)139))))));
                }
                for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    arr_46 [i_13] |= ((((/* implicit */long long int) (+(((/* implicit */int) var_11))))) / (arr_42 [i_0] [i_1] [i_0 + 2]));
                    var_32 = (~(((/* implicit */int) (unsigned char)23)));
                }
                for (int i_14 = 1; i_14 < 9; i_14 += 3) 
                {
                    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)0)))))));
                    arr_50 [i_0 - 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_45 [i_0 - 1])) : (((/* implicit */int) arr_45 [i_0 + 2]))));
                }
                for (int i_15 = 1; i_15 < 10; i_15 += 1) 
                {
                    var_34 = ((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_0 - 1])) || (((/* implicit */_Bool) 2815188519U))));
                    arr_53 [i_0] [(unsigned short)5] [i_5] [i_5] = ((/* implicit */signed char) ((unsigned short) arr_48 [i_15] [i_15 - 1] [i_15 - 1] [i_15 - 1]));
                    arr_54 [i_0 + 2] [i_5] [i_5] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)2))) : (var_1))));
                }
                /* LoopSeq 1 */
                for (short i_16 = 0; i_16 < 11; i_16 += 4) 
                {
                    arr_58 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1] [i_5] [(unsigned short)0] = ((/* implicit */_Bool) (~(arr_0 [i_0 - 1])));
                    arr_59 [i_16] [i_16] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) (short)23414)) ? (124947950) : (((/* implicit */int) (signed char)-107)))) : ((~(arr_38 [i_0] [i_1] [2LL])))));
                    var_35 += var_8;
                }
            }
            for (signed char i_17 = 1; i_17 < 10; i_17 += 2) /* same iter space */
            {
                var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_17 + 1] [i_0] [i_0 - 1] [i_0 - 1]))));
                arr_63 [i_0] [i_0] [7U] = ((/* implicit */long long int) ((arr_31 [i_17 - 1] [i_17 - 1] [i_17 + 1] [8U] [8U]) & (arr_31 [i_17 + 1] [i_17 - 1] [i_17 - 1] [(_Bool)1] [i_17 + 1])));
                var_37 = ((/* implicit */int) max((var_37), ((~((~(((/* implicit */int) (short)-32762))))))));
            }
            for (signed char i_18 = 1; i_18 < 10; i_18 += 2) /* same iter space */
            {
                arr_67 [i_0] = (-((-(arr_51 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                arr_68 [i_0 + 1] [(signed char)9] [i_18] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
            }
            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)3)) ? (1249505164) : (((/* implicit */int) (short)14194))));
            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_11)) ? (var_15) : (((/* implicit */int) var_12)))))))));
        }
        for (unsigned char i_19 = 0; i_19 < 11; i_19 += 4) /* same iter space */
        {
            arr_73 [i_0] [i_19] = (+((-(1024856902252373887LL))));
            var_40 = ((/* implicit */unsigned short) (((+(1024856902252373874LL))) != (((/* implicit */long long int) ((/* implicit */int) ((short) (short)13997))))));
        }
        for (unsigned char i_20 = 0; i_20 < 11; i_20 += 4) /* same iter space */
        {
            arr_77 [i_0] = ((/* implicit */unsigned char) ((arr_70 [i_0 + 2]) / (arr_70 [i_0 + 2])));
            arr_78 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [4LL]);
            arr_79 [i_20] [i_20] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_0] [i_0 + 1] [i_0] [i_20] [i_0])) ? ((-(((/* implicit */int) (unsigned char)192)))) : (var_15)));
        }
    }
    for (short i_21 = 0; i_21 < 21; i_21 += 4) 
    {
        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_81 [i_21]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(-1024856902252373882LL))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned short) (unsigned short)51689))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))))));
        /* LoopSeq 1 */
        for (unsigned char i_22 = 3; i_22 < 20; i_22 += 3) 
        {
            arr_84 [i_21] [i_21] [i_22 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_80 [i_21])) ? (min((min((8490946006168672567LL), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) (+(((/* implicit */int) var_11))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((-879641625) & (((/* implicit */int) var_6))))) ? ((~(var_10))) : (((/* implicit */int) var_7)))))));
            var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_2)) - (((/* implicit */int) var_6))))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_81 [i_22 + 1])) % (((/* implicit */int) arr_81 [i_22 - 2]))))) : ((+(arr_83 [i_21] [9])))));
        }
        var_43 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-62)) ? (((((/* implicit */long long int) ((/* implicit */int) var_9))) - (var_4))) : (arr_83 [1LL] [1LL]))) - (((/* implicit */long long int) ((arr_82 [i_21] [i_21]) + (var_15))))));
        var_44 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (-27)))) ? (arr_83 [i_21] [i_21]) : (((/* implicit */long long int) (+(var_0))))))));
        var_45 &= ((/* implicit */unsigned char) var_5);
    }
    for (int i_23 = 0; i_23 < 10; i_23 += 4) 
    {
        var_46 = ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)17)), (42942039)))) || (((/* implicit */_Bool) var_13)));
        arr_87 [i_23] [i_23] = ((/* implicit */short) ((min((arr_51 [i_23] [i_23] [i_23] [i_23] [i_23]), (((((/* implicit */_Bool) (short)-32759)) ? (2147483636) : (((/* implicit */int) (signed char)11)))))) - (((/* implicit */int) var_2))));
        arr_88 [i_23] = ((/* implicit */unsigned char) ((signed char) (signed char)11));
        arr_89 [i_23] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) arr_74 [i_23] [i_23])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_23] [i_23] [i_23])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_23] [i_23]))))) : (((((/* implicit */_Bool) ((var_15) + (((/* implicit */int) (short)-30863))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) arr_52 [i_23] [i_23]))))) : (min((var_4), (((/* implicit */long long int) var_6))))))));
        var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((+(1651007994))) : ((-(((/* implicit */int) arr_45 [i_23])))))) / (((/* implicit */int) (!(arr_22 [i_23] [i_23])))))))));
    }
}
