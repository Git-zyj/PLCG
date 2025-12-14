/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166924
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
    var_13 = ((/* implicit */short) var_8);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_0 [6U] [i_0])), ((-(min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_11)))))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 18; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (var_10)))) | (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (var_11)))));
        arr_6 [i_1 + 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_1 - 1]))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) (+(var_4)));
        var_15 = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_2 + 1]))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                {
                    arr_16 [i_2] [i_3] [i_4] = ((/* implicit */signed char) var_3);
                    arr_17 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_15 [i_2 - 1] [i_3] [i_4] [i_2])) : (((/* implicit */int) arr_11 [i_2 - 1] [i_3] [i_3]))));
                    arr_18 [i_2] [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-9183))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) var_5);
                                var_17 ^= (~(((/* implicit */int) (unsigned short)0)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            {
                                arr_28 [i_2 - 1] [i_7] [i_2] [i_2] [i_3] [i_2 - 1] = ((/* implicit */unsigned char) arr_27 [i_8] [i_7] [i_2] [i_2] [i_2]);
                                var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
        {
            arr_32 [i_2] = var_2;
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_26 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])))))));
        }
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
        {
            var_20 ^= ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_2] [i_10]))))));
            arr_36 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9338))) / (890886053U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_29 [i_2] [18LL] [i_10])))))));
            arr_37 [i_2] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_2 - 1] [i_2 + 1] [i_2 - 1]))));
            var_21 = ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
        }
        arr_38 [(unsigned short)16] |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) 1647145230U)) ? (15816928388478615563ULL) : (((/* implicit */unsigned long long int) 3021681461U))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_11 = 0; i_11 < 15; i_11 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_12 = 0; i_12 < 15; i_12 += 1) 
        {
            arr_45 [i_12] = ((/* implicit */unsigned short) arr_42 [i_11] [i_12] [i_12]);
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 2) 
            {
                arr_48 [i_13] [i_11] [i_12] [i_13] |= ((/* implicit */unsigned int) (-(arr_44 [i_11])));
                var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) >= (arr_20 [i_12])));
                arr_49 [i_11] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_12] [i_12] [i_11])) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (unsigned char)0))));
                arr_50 [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_11]))));
                var_23 = ((/* implicit */signed char) var_10);
            }
            /* LoopNest 3 */
            for (signed char i_14 = 1; i_14 < 11; i_14 += 1) 
            {
                for (unsigned char i_15 = 4; i_15 < 13; i_15 += 4) 
                {
                    for (signed char i_16 = 2; i_16 < 13; i_16 += 4) 
                    {
                        {
                            arr_58 [i_12] [i_16] [i_15] [i_15 - 4] [i_14] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_34 [i_12])) : (((/* implicit */int) arr_34 [i_12]))));
                            arr_59 [i_12] = ((/* implicit */long long int) var_4);
                        }
                    } 
                } 
            } 
        }
        for (signed char i_17 = 0; i_17 < 15; i_17 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_18 = 0; i_18 < 15; i_18 += 2) 
            {
                for (unsigned short i_19 = 0; i_19 < 15; i_19 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_20 = 0; i_20 < 15; i_20 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */int) arr_53 [i_11] [i_17] [i_18] [i_11] [i_20])) + (((/* implicit */int) arr_53 [i_11] [i_17] [i_17] [i_19] [i_20])))))));
                            arr_71 [i_18] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)204)) <= (((/* implicit */int) (unsigned short)26363))));
                        }
                        for (unsigned short i_21 = 0; i_21 < 15; i_21 += 3) /* same iter space */
                        {
                            arr_74 [i_11] [i_11] [i_18] [(signed char)3] [(unsigned char)11] [(signed char)3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_64 [i_11] [i_11] [i_11] [i_11]))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_21 [i_11] [i_17] [i_18] [i_19] [i_21] [i_18])))))));
                            arr_75 [i_11] [i_17] [i_18] [i_11] [i_21] = ((/* implicit */unsigned int) arr_8 [i_11] [i_11]);
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_5)))) ? (((/* implicit */int) arr_60 [i_17])) : (((/* implicit */int) var_3))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_0)) ? (arr_65 [i_17] [(signed char)6]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_17] [i_19])))));
                        }
                        var_28 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (var_11)))) & (((/* implicit */int) var_9))));
                    }
                } 
            } 
            var_29 = ((/* implicit */int) ((var_11) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_11])))));
            var_30 *= ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-1))));
        }
        arr_76 [i_11] = arr_44 [i_11];
    }
    for (unsigned long long int i_22 = 0; i_22 < 22; i_22 += 1) 
    {
        var_31 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (arr_78 [i_22]))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))));
        arr_80 [i_22] = ((/* implicit */_Bool) arr_0 [i_22] [i_22]);
        /* LoopNest 3 */
        for (long long int i_23 = 0; i_23 < 22; i_23 += 3) 
        {
            for (signed char i_24 = 0; i_24 < 22; i_24 += 2) 
            {
                for (signed char i_25 = 0; i_25 < 22; i_25 += 4) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) arr_77 [i_24] [i_25]);
                        arr_87 [i_25] [i_22] = ((/* implicit */signed char) (+(((/* implicit */int) ((arr_81 [i_23] [i_22]) < (max((arr_81 [i_22] [i_22]), (((/* implicit */long long int) var_6)))))))));
                        var_33 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))), (arr_79 [i_22] [i_24])));
                        /* LoopSeq 3 */
                        for (signed char i_26 = 0; i_26 < 22; i_26 += 1) /* same iter space */
                        {
                            arr_90 [i_26] [i_26] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((var_12), (var_1))))))), (max((((((/* implicit */_Bool) arr_82 [i_24] [i_22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_85 [i_22] [i_22] [i_25]))) : (var_11))), (((/* implicit */unsigned long long int) arr_84 [i_23] [i_25]))))));
                            arr_91 [i_26] = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_77 [i_26] [i_25])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) >> (((max((arr_78 [i_23]), (((/* implicit */unsigned int) var_4)))) - (3110726076U))))) <= (((((/* implicit */_Bool) max(((unsigned short)33900), ((unsigned short)31636)))) ? (((/* implicit */int) min(((unsigned short)9963), ((unsigned short)33235)))) : ((-(var_4)))))));
                        }
                        for (signed char i_27 = 0; i_27 < 22; i_27 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_93 [i_27] [i_23] [i_24] [i_25] [i_27]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_88 [i_22] [i_25])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_95 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22]))) : (((((/* implicit */_Bool) arr_95 [i_22] [i_23] [i_24] [i_24] [i_25] [i_27])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_5)))));
                            arr_96 [i_22] [i_23] [i_24] [i_25] [i_27] |= ((/* implicit */short) ((arr_93 [i_25] [i_23] [i_23] [i_23] [i_27]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_93 [i_24] [i_23] [i_24] [i_25] [i_24]))))))));
                            arr_97 [i_23] [i_27] [i_27] [i_27] [i_22] [i_23] [i_22] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(arr_81 [i_27] [i_24])))) ? (((((/* implicit */_Bool) arr_79 [i_23] [i_23])) ? (var_4) : (var_4))) : (((/* implicit */int) arr_0 [i_23] [i_23])))), (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_4))))), (max((var_6), (((/* implicit */unsigned short) var_0)))))))));
                            arr_98 [i_27] [i_27] [i_27] [i_22] [i_22] = var_12;
                            arr_99 [i_22] [i_24] [i_24] [i_27] [i_24] = ((/* implicit */signed char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_24] [i_23])))))))), (var_6)));
                        }
                        for (signed char i_28 = 0; i_28 < 22; i_28 += 1) /* same iter space */
                        {
                            var_35 = (+(var_11));
                            arr_102 [i_22] [i_23] [i_23] [i_25] [i_28] = var_10;
                        }
                        arr_103 [i_22] [i_22] [9U] [i_25] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (1760792897000924189ULL) : (((/* implicit */unsigned long long int) 3404081243U))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_29 = 0; i_29 < 21; i_29 += 4) 
    {
        arr_106 [i_29] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_78 [i_29])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_86 [i_29] [i_29] [i_29] [i_29] [i_29] [i_29])))));
        arr_107 [i_29] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_104 [i_29])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))));
    }
}
