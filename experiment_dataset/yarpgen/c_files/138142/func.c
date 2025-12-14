/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138142
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
    var_18 = ((/* implicit */unsigned int) 1860943450);
    var_19 = ((/* implicit */unsigned long long int) 656389283U);
    var_20 = ((/* implicit */unsigned long long int) (unsigned short)0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (unsigned char i_4 = 3; i_4 < 22; i_4 += 1) 
                    {
                        {
                            var_21 += ((/* implicit */unsigned short) (unsigned char)3);
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) (short)-14872);
                        }
                    } 
                } 
            } 
            arr_15 [i_0] = ((/* implicit */short) (unsigned char)16);
        }
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (short)-13525);
            arr_20 [10ULL] [i_0] = ((/* implicit */unsigned int) (short)-8192);
            /* LoopNest 2 */
            for (unsigned short i_6 = 2; i_6 < 23; i_6 += 2) 
            {
                for (unsigned char i_7 = 3; i_7 < 21; i_7 += 3) 
                {
                    {
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (signed char)74))));
                        arr_26 [i_0] [i_0] [(short)16] = ((/* implicit */int) (unsigned char)133);
                        arr_27 [i_0] [i_0] [i_6] = ((/* implicit */long long int) (unsigned char)8);
                        arr_28 [i_0] [i_6] [i_5] [i_0] = ((/* implicit */_Bool) (short)-13513);
                        var_23 = ((/* implicit */short) (signed char)-33);
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned int) (short)-28839);
        }
        arr_29 [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)234);
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 3; i_8 < 23; i_8 += 4) 
        {
            for (unsigned char i_9 = 1; i_9 < 21; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 1; i_11 < 23; i_11 += 2) 
                        {
                            {
                                arr_40 [i_0] [i_0] = ((/* implicit */short) 905377289U);
                                arr_41 [i_0] = ((/* implicit */_Bool) 4294967295U);
                            }
                        } 
                    } 
                    arr_42 [i_0] [i_0] [i_0] [(signed char)4] = ((/* implicit */unsigned char) (signed char)123);
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 4; i_12 < 22; i_12 += 4) 
                    {
                        arr_46 [i_0] [i_8] [i_9] [i_9] [i_12] = ((/* implicit */unsigned char) (short)-15590);
                        var_25 ^= ((/* implicit */short) (signed char)119);
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_13 = 1; i_13 < 20; i_13 += 3) 
        {
            for (int i_14 = 1; i_14 < 21; i_14 += 3) 
            {
                {
                    var_26 *= (short)25961;
                    /* LoopSeq 3 */
                    for (unsigned short i_15 = 2; i_15 < 21; i_15 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */_Bool) (unsigned char)43);
                        arr_54 [i_0 - 2] [i_13] [(unsigned short)12] [i_0] = ((/* implicit */short) (unsigned short)47565);
                    }
                    for (unsigned short i_16 = 2; i_16 < 21; i_16 += 1) /* same iter space */
                    {
                        arr_59 [i_0] [i_0] [22LL] = ((/* implicit */signed char) (unsigned short)47565);
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (unsigned char)16))));
                        arr_60 [i_0] [i_14] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)17945);
                        arr_61 [i_0] [i_13] [i_14 + 2] [i_16] = ((/* implicit */unsigned char) 17461816334075440966ULL);
                    }
                    for (unsigned int i_17 = 4; i_17 < 21; i_17 += 3) 
                    {
                        arr_64 [i_14] [18LL] [(unsigned short)18] [i_14] [i_0] [i_14] = ((/* implicit */unsigned char) 14336U);
                        arr_65 [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)22513);
                        /* LoopSeq 2 */
                        for (long long int i_18 = 4; i_18 < 23; i_18 += 4) 
                        {
                            var_29 = ((/* implicit */int) 1989899410U);
                            arr_68 [i_0] [i_13] [3] [i_17 - 1] [i_18 - 3] = ((/* implicit */short) 0U);
                            var_30 = ((/* implicit */long long int) 2305067892U);
                            var_31 = ((/* implicit */int) (signed char)-36);
                        }
                        for (unsigned long long int i_19 = 4; i_19 < 23; i_19 += 2) 
                        {
                            var_32 += ((/* implicit */_Bool) 14356U);
                            arr_71 [i_14] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)211);
                        }
                        arr_72 [i_0 - 3] [10U] [i_13] [i_0] [i_17] [i_17] = ((/* implicit */long long int) 11326988555613444978ULL);
                    }
                    arr_73 [i_0] [i_0] [i_14] = ((/* implicit */long long int) (unsigned short)53363);
                    arr_74 [i_0] [i_13] [i_0] = ((/* implicit */unsigned long long int) 14364U);
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 2; i_20 < 23; i_20 += 1) 
                    {
                        for (signed char i_21 = 1; i_21 < 21; i_21 += 1) 
                        {
                            {
                                arr_81 [i_0] [i_0] = ((/* implicit */_Bool) 2305067886U);
                                arr_82 [i_21] [i_0] = ((/* implicit */signed char) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_22 = 3; i_22 < 22; i_22 += 4) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (unsigned short)52658))));
        arr_86 [i_22] [i_22] = ((/* implicit */unsigned char) -400157933);
        arr_87 [i_22] = ((/* implicit */short) (unsigned short)65526);
        arr_88 [i_22] = ((/* implicit */unsigned short) -4798615278837686186LL);
        arr_89 [i_22] = ((/* implicit */short) (_Bool)1);
    }
    for (long long int i_23 = 3; i_23 < 22; i_23 += 4) /* same iter space */
    {
        var_34 -= ((/* implicit */signed char) (unsigned char)200);
        arr_92 [i_23] = ((/* implicit */long long int) -1465511911);
        arr_93 [i_23] = ((/* implicit */unsigned long long int) (signed char)46);
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_24 = 1; i_24 < 20; i_24 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_25 = 1; i_25 < 21; i_25 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_26 = 3; i_26 < 22; i_26 += 1) 
                {
                    for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                    {
                        {
                            var_35 += ((/* implicit */long long int) (_Bool)1);
                            arr_105 [i_27] [i_23] [(unsigned short)20] [6] [i_25] [i_23] [i_23 - 2] = ((/* implicit */signed char) (unsigned char)213);
                            arr_106 [i_23] [i_26 - 1] [i_25] [i_24] [i_23] = ((/* implicit */long long int) (unsigned char)30);
                            arr_107 [i_27] [i_26] [i_23] [i_24] [i_23] [(unsigned char)12] [i_23] = ((/* implicit */long long int) (unsigned short)3);
                        }
                    } 
                } 
                var_36 *= ((/* implicit */short) 8028381625448280252ULL);
                arr_108 [(unsigned short)4] [i_23] [i_23] [i_23 - 1] = ((/* implicit */unsigned short) -1653904880130194865LL);
            }
            for (long long int i_28 = 3; i_28 < 22; i_28 += 2) 
            {
                arr_112 [i_23] [i_23] [i_28] = ((/* implicit */unsigned char) (unsigned short)11556);
                arr_113 [i_23] [16U] [i_23] [(unsigned short)4] = ((/* implicit */int) 4294952940U);
                /* LoopNest 2 */
                for (unsigned short i_29 = 1; i_29 < 23; i_29 += 3) 
                {
                    for (unsigned short i_30 = 2; i_30 < 23; i_30 += 2) 
                    {
                        {
                            arr_118 [i_23] [3U] [i_23] [i_28] [i_29] [(signed char)18] [(unsigned short)2] = ((/* implicit */unsigned char) (_Bool)1);
                            arr_119 [i_23] [i_23] = ((/* implicit */signed char) 1306392119U);
                        }
                    } 
                } 
            }
            var_37 = ((/* implicit */unsigned long long int) (unsigned char)46);
            /* LoopNest 2 */
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                for (unsigned short i_32 = 4; i_32 < 22; i_32 += 3) 
                {
                    {
                        var_38 *= ((/* implicit */unsigned short) (_Bool)1);
                        arr_127 [i_23] [i_24] [i_31] [i_23] = ((/* implicit */long long int) (signed char)-77);
                        arr_128 [i_23] [i_31] [i_23] = 4294952939U;
                        arr_129 [i_23] [(unsigned short)18] = ((/* implicit */unsigned short) (signed char)-60);
                    }
                } 
            } 
        }
        for (_Bool i_33 = 0; i_33 < 0; i_33 += 1) 
        {
            arr_132 [i_23] [i_23] = ((/* implicit */unsigned char) (unsigned short)28672);
            var_39 = ((/* implicit */unsigned short) (signed char)-41);
            arr_133 [21] [i_23] = ((/* implicit */unsigned char) (signed char)-40);
        }
        for (unsigned short i_34 = 3; i_34 < 22; i_34 += 2) 
        {
            arr_136 [i_23] [i_23] = ((/* implicit */long long int) (signed char)32);
            arr_137 [i_23] [i_23] = ((/* implicit */unsigned char) (unsigned short)0);
            /* LoopNest 2 */
            for (long long int i_35 = 1; i_35 < 21; i_35 += 3) 
            {
                for (unsigned int i_36 = 2; i_36 < 23; i_36 += 2) 
                {
                    {
                        var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) 3573704750U))));
                        var_41 = ((/* implicit */unsigned char) -172498694);
                        var_42 -= ((/* implicit */unsigned long long int) (signed char)36);
                        arr_145 [i_23] [i_35] = (unsigned short)52658;
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_37 = 2; i_37 < 23; i_37 += 2) 
                        {
                            arr_148 [i_34] [i_23] [i_35] [i_35] [i_34] [i_23] [i_23] = ((/* implicit */unsigned int) 3162846004711513549ULL);
                            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) 303467196330464580ULL))));
                        }
                    }
                } 
            } 
            var_44 = 3758942936U;
            arr_149 [i_23] = ((/* implicit */unsigned char) 9620123781318847667ULL);
        }
        arr_150 [i_23] = 676504712U;
    }
    /* LoopNest 3 */
    for (short i_38 = 3; i_38 < 12; i_38 += 2) 
    {
        for (unsigned char i_39 = 1; i_39 < 11; i_39 += 2) 
        {
            for (short i_40 = 1; i_40 < 12; i_40 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_41 = 3; i_41 < 10; i_41 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_42 = 1; i_42 < 10; i_42 += 2) 
                        {
                            var_45 = ((/* implicit */_Bool) (unsigned char)128);
                            var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) (unsigned short)52650))));
                        }
                        for (long long int i_43 = 4; i_43 < 12; i_43 += 1) 
                        {
                            arr_169 [4U] [4U] [i_40 + 1] [i_38] [i_43] = ((/* implicit */int) (_Bool)0);
                            arr_170 [i_38 - 3] [i_38] [(_Bool)1] [i_40] [(_Bool)1] [i_41] [i_38] = ((/* implicit */int) (signed char)26);
                        }
                        arr_171 [i_38] [i_38] [i_40] [i_41 - 1] = (signed char)19;
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_44 = 1; i_44 < 10; i_44 += 1) /* same iter space */
                    {
                        var_47 = ((/* implicit */unsigned char) 647039800U);
                        arr_174 [(unsigned short)0] [i_38] = ((/* implicit */unsigned int) (unsigned char)0);
                        arr_175 [i_38] [i_38] = ((/* implicit */signed char) (short)-10668);
                        var_48 = ((/* implicit */int) (_Bool)1);
                        var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) (unsigned char)64))));
                    }
                    /* vectorizable */
                    for (unsigned char i_45 = 1; i_45 < 10; i_45 += 1) /* same iter space */
                    {
                        var_50 = ((/* implicit */unsigned int) (short)-27819);
                        var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) 2147483631))));
                    }
                }
            } 
        } 
    } 
}
