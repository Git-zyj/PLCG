/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116143
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_18 = ((/* implicit */int) (unsigned short)30720);
            var_19 = ((/* implicit */unsigned long long int) ((unsigned int) var_11));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_3 [i_1])))) ? (((/* implicit */unsigned int) max((arr_3 [i_0]), (arr_3 [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)2841))))) ? (6U) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) 65535))));
                var_22 = ((/* implicit */short) min((((/* implicit */unsigned int) var_7)), (((arr_0 [i_0] [i_0]) + (arr_0 [i_0] [i_0])))));
            }
        }
        /* LoopSeq 4 */
        for (short i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_4 = 1; i_4 < 9; i_4 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */int) max((((((/* implicit */_Bool) -65545)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58090))) : (10837682969724189324ULL))), (((/* implicit */unsigned long long int) ((unsigned short) ((6U) << (6U)))))));
                var_24 = ((/* implicit */long long int) (unsigned short)9886);
            }
            for (unsigned short i_5 = 1; i_5 < 9; i_5 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) % ((+(((/* implicit */int) var_3))))));
                var_26 += ((/* implicit */unsigned int) ((((4548425337724565933ULL) + (((/* implicit */unsigned long long int) arr_3 [i_5 + 1])))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) arr_3 [i_0])) : (3417782243U))))));
            }
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) var_17);
                            var_28 = ((/* implicit */unsigned short) (short)-14268);
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (+(var_14))))));
                            var_30 = ((/* implicit */unsigned char) min((arr_0 [i_3] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_3 [i_6 + 1])) == (var_1))))));
                        }
                    } 
                } 
            } 
            var_31 ^= ((/* implicit */int) ((((/* implicit */_Bool) 3417782219U)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((int) -3710961943173786461LL))), (116983536U)))) : (-3710961943173786461LL)));
        }
        for (short i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */long long int) var_5);
            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) arr_6 [i_0]))));
            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))), ((~(4548425337724565933ULL))))))));
        }
        for (unsigned long long int i_10 = 1; i_10 < 7; i_10 += 3) /* same iter space */
        {
            var_35 |= ((/* implicit */int) (~(var_12)));
            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_5 [(short)6])) >= (((/* implicit */int) arr_11 [i_0] [2U] [i_10 + 2] [i_10])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) (unsigned short)0)))) ? (((((/* implicit */_Bool) (unsigned short)58090)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(short)2] [i_0] [(short)2]))) : (var_8))) : (((/* implicit */unsigned int) max((-846744313), (((/* implicit */int) (unsigned short)0))))))))))));
        }
        for (unsigned long long int i_11 = 1; i_11 < 7; i_11 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned int) var_16);
                            var_38 -= ((/* implicit */unsigned char) var_9);
                            var_39 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_17)) : (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16204))) >= (arr_20 [i_0] [i_0] [i_11] [i_12] [i_13] [i_14]))))) : (((((/* implicit */_Bool) arr_31 [i_13] [i_13])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))), ((((!(((/* implicit */_Bool) 65528)))) ? (arr_0 [i_12] [i_0]) : (1635841675U)))));
                            var_40 -= ((/* implicit */short) (~(((long long int) (unsigned short)7445))));
                        }
                    } 
                } 
            } 
            var_41 = ((/* implicit */unsigned int) ((min((min((var_10), (((/* implicit */unsigned int) (_Bool)1)))), (877185056U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_35 [6] [6] [i_0])) >= (((/* implicit */int) arr_35 [i_0] [i_11] [i_0]))))))));
        }
        var_42 = ((/* implicit */unsigned short) -846744313);
        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1997))) * (min((3417782249U), (((/* implicit */unsigned int) min((var_4), (((/* implicit */int) var_13)))))))));
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 1) 
        {
            for (short i_16 = 2; i_16 < 8; i_16 += 1) 
            {
                {
                    var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((arr_39 [(unsigned char)6]) | (max((-3710961943173786467LL), (((/* implicit */long long int) (unsigned short)24557)))))))));
                    var_45 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_40 [i_16 - 1] [i_16] [i_16])) ? (arr_40 [i_16 - 1] [i_16 - 1] [i_16 - 1]) : (((/* implicit */unsigned int) var_16)))), (((((/* implicit */_Bool) (unsigned char)102)) ? (arr_40 [i_16 - 1] [i_16] [i_16]) : (1890859693U)))));
                }
            } 
        } 
    }
    for (int i_17 = 0; i_17 < 11; i_17 += 4) 
    {
        var_46 = ((/* implicit */int) min((max((4294967290U), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_1))))), (((var_5) >> (((9606087045834695723ULL) - (9606087045834695695ULL)))))));
        var_47 = ((/* implicit */short) arr_44 [i_17]);
        var_48 = ((/* implicit */long long int) min((((((/* implicit */int) (short)-5269)) % (((/* implicit */int) arr_45 [i_17] [i_17])))), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_45 [i_17] [i_17])))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_18 = 3; i_18 < 22; i_18 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_19 = 1; i_19 < 20; i_19 += 2) 
        {
            for (unsigned char i_20 = 0; i_20 < 23; i_20 += 3) 
            {
                {
                    var_49 -= ((/* implicit */unsigned char) arr_51 [i_18]);
                    var_50 = ((/* implicit */short) 15398369227301914698ULL);
                    var_51 = ((/* implicit */_Bool) 3283751501U);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_21 = 1; i_21 < 22; i_21 += 4) 
        {
            var_52 = ((/* implicit */unsigned char) min((var_52), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((((/* implicit */int) (short)21326)), (65515)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_21 + 1]))) : (min((arr_48 [i_18]), (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) 2416775780U)))))));
            var_53 &= ((/* implicit */_Bool) var_4);
        }
        for (unsigned char i_22 = 0; i_22 < 23; i_22 += 3) 
        {
            var_54 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) arr_47 [i_18]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_18]))) > (15398369227301914675ULL)))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)237)), (arr_47 [i_18]))))));
            var_55 = ((/* implicit */_Bool) arr_51 [i_18]);
            /* LoopSeq 1 */
            for (unsigned long long int i_23 = 0; i_23 < 23; i_23 += 3) 
            {
                var_56 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)47)) ? (7727245400717572103ULL) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 5694222995668932774ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_51 [i_18])))))))));
                var_57 = min((((int) var_14)), ((+(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_10))))))));
            }
            var_58 = ((unsigned short) -65500);
            /* LoopSeq 1 */
            for (signed char i_24 = 0; i_24 < 23; i_24 += 3) 
            {
                var_59 = ((/* implicit */short) max((var_59), (((/* implicit */short) max((((((/* implicit */_Bool) var_3)) ? (571747617009982130LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))))), (((/* implicit */long long int) 0U)))))));
                /* LoopNest 2 */
                for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                {
                    for (unsigned int i_26 = 0; i_26 < 23; i_26 += 1) 
                    {
                        {
                            var_60 = ((/* implicit */long long int) max((var_60), (((/* implicit */long long int) max((((min((18446744073709551603ULL), (((/* implicit */unsigned long long int) 3779202039U)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))))), (((/* implicit */unsigned long long int) var_1)))))));
                            var_61 = ((/* implicit */unsigned int) min((var_61), (((/* implicit */unsigned int) ((long long int) max((((/* implicit */unsigned long long int) var_2)), (arr_66 [(unsigned char)16] [i_24] [i_18 + 1] [i_25] [i_26])))))));
                            var_62 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_0)), (var_9))))) < (((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 5U)))))) : (7727245400717572103ULL))));
                        }
                    } 
                } 
                var_63 = ((/* implicit */_Bool) arr_47 [i_18]);
                /* LoopNest 2 */
                for (short i_27 = 3; i_27 < 21; i_27 += 1) 
                {
                    for (long long int i_28 = 3; i_28 < 21; i_28 += 3) 
                    {
                        {
                            var_64 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 4294967277U)) ? (((/* implicit */int) (unsigned short)48551)) : (((/* implicit */int) (short)17464))))));
                            var_65 = ((/* implicit */unsigned char) min((((/* implicit */short) ((((/* implicit */_Bool) arr_71 [i_18 - 2])) || (((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_67 [i_18] [i_27] [i_27] [i_24] [i_22] [i_18])))))))), ((short)-17466)));
                            var_66 = ((/* implicit */unsigned char) var_4);
                            var_67 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_75 [i_18] [i_22] [i_24] [i_24] [i_28 - 1])) ? (((/* implicit */int) (unsigned short)58090)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (arr_62 [i_27 - 1] [i_18 - 1] [i_28 - 2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_47 [i_18])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 3322706651U)) ? (((/* implicit */int) arr_67 [i_18] [i_18] [i_18] [i_18 - 2] [i_18] [i_18])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((unsigned short) arr_46 [i_18])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_29 = 0; i_29 < 23; i_29 += 2) 
                {
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        {
                            var_68 = ((/* implicit */long long int) 12582605665008601098ULL);
                            var_69 = ((/* implicit */unsigned short) max((((/* implicit */int) var_2)), ((-(((((/* implicit */_Bool) arr_76 [i_30] [i_30] [i_30] [i_30] [i_30])) ? (arr_68 [i_30] [i_18] [(short)16] [i_22] [i_18]) : (((/* implicit */int) var_2))))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned short i_31 = 2; i_31 < 22; i_31 += 3) 
        {
            var_70 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((4294967284U), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) >= (15762598695796736LL))))))), (max((5864138408700950518ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -17)) || ((_Bool)1))))))));
            var_71 = ((/* implicit */unsigned char) ((signed char) max((var_14), (((/* implicit */unsigned long long int) 15762598695796736LL)))));
        }
    }
    for (long long int i_32 = 2; i_32 < 14; i_32 += 2) 
    {
        var_72 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_62 [(short)19] [21U] [i_32])) ? (5123725178143067066ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_73 += ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_83 [i_32] [i_32] [i_32])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1)))) && (((8866518394761586453ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
        var_74 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (8893624699114775125ULL) : (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned char)161)))), (((/* implicit */int) ((_Bool) (_Bool)0))))))));
    }
}
