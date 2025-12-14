/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173749
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
    var_15 = ((/* implicit */_Bool) ((short) (signed char)-119));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((unsigned int) ((unsigned long long int) (_Bool)1))))));
        var_17 = ((/* implicit */signed char) 1366922160);
        arr_2 [i_0] = ((/* implicit */unsigned int) ((long long int) 4294967295U));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((int) 3659447842U));
                        var_18 += ((/* implicit */int) ((short) 1366922167));
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_18 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) 4294967295U);
            arr_19 [i_4] [i_5] [i_5] = ((/* implicit */short) ((unsigned short) 9223372036854775807LL));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                arr_22 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) 3772268343U);
                arr_23 [i_4] [i_5] [i_5] [i_5] = ((/* implicit */short) -345646145);
            }
            var_19 = ((/* implicit */short) ((signed char) ((unsigned char) 1366922167)));
        }
        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            arr_26 [i_7] [i_4] = ((/* implicit */short) ((unsigned short) ((unsigned short) 4294967281U)));
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) 4294967292U);
                        var_21 = ((/* implicit */unsigned char) ((signed char) ((int) ((unsigned long long int) (_Bool)1))));
                        arr_31 [i_9] = ((/* implicit */_Bool) -1366922173);
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_35 [i_10] = ((long long int) 1877595448U);
                var_22 = ((/* implicit */unsigned int) 18446744073709551615ULL);
                arr_36 [i_4] [i_4] [i_10] = ((/* implicit */int) ((unsigned long long int) (_Bool)1));
                arr_37 [i_10] [i_7] [i_10] = ((/* implicit */unsigned int) (signed char)127);
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned long long int) -345646127);
                var_24 |= ((/* implicit */long long int) ((_Bool) -4767017676845036737LL));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_13 = 2; i_13 < 17; i_13 += 2) 
                {
                    arr_47 [i_13 - 2] [i_12] [i_7] [i_4] = ((/* implicit */unsigned int) -7576589780042535910LL);
                    arr_48 [i_4] [i_4] [i_4] [3U] [i_4] [i_4] = ((/* implicit */_Bool) ((short) ((long long int) ((signed char) 4294967295U))));
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 2; i_14 < 18; i_14 += 2) 
                    {
                        arr_52 [i_4] [i_4] = ((/* implicit */short) ((_Bool) ((int) ((unsigned char) (signed char)-92))));
                        arr_53 [i_4] [i_12] [i_14] = ((/* implicit */unsigned char) ((short) ((unsigned short) (unsigned char)45)));
                    }
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        var_25 *= ((/* implicit */signed char) 2147483647);
                        var_26 ^= ((/* implicit */short) 7576589780042535909LL);
                    }
                    var_27 = ((/* implicit */short) (unsigned short)2047);
                }
                /* LoopSeq 2 */
                for (long long int i_16 = 0; i_16 < 19; i_16 += 2) /* same iter space */
                {
                    var_28 = ((/* implicit */signed char) (unsigned short)63488);
                    var_29 = ((/* implicit */unsigned char) (_Bool)1);
                }
                for (long long int i_17 = 0; i_17 < 19; i_17 += 2) /* same iter space */
                {
                    arr_60 [i_12] [(short)12] = ((/* implicit */long long int) ((short) ((_Bool) 1926225125363006841LL)));
                    arr_61 [i_17] = ((/* implicit */signed char) ((unsigned int) (_Bool)1));
                    var_30 = ((/* implicit */signed char) ((unsigned char) ((long long int) ((unsigned char) (short)32767))));
                }
            }
            /* vectorizable */
            for (unsigned int i_18 = 0; i_18 < 19; i_18 += 2) 
            {
                var_31 = ((/* implicit */_Bool) ((unsigned long long int) ((int) 18517085U)));
                arr_66 [0] [i_18] = ((/* implicit */unsigned short) ((int) ((unsigned long long int) 4294967279U)));
                var_32 = ((/* implicit */unsigned int) ((unsigned long long int) ((int) (short)32762)));
            }
            /* LoopSeq 1 */
            for (signed char i_19 = 3; i_19 < 18; i_19 += 2) 
            {
                var_33 = ((/* implicit */unsigned short) ((int) ((signed char) ((_Bool) 4515517324390144916ULL))));
                var_34 = ((/* implicit */unsigned long long int) ((_Bool) ((short) ((_Bool) (unsigned short)47545))));
                var_35 = -345646145;
                arr_69 [i_4] [i_7] [i_19] = ((/* implicit */_Bool) ((unsigned char) ((unsigned char) ((unsigned long long int) (_Bool)1))));
            }
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                for (unsigned int i_22 = 0; i_22 < 19; i_22 += 2) 
                {
                    for (unsigned char i_23 = 0; i_23 < 19; i_23 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */int) (unsigned char)170);
                            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((int) 4515517324390144905ULL)))));
                            arr_81 [i_4] [i_20] [i_20] [i_21] [i_20] [i_22] [i_23] = ((/* implicit */unsigned char) (_Bool)1);
                            var_38 ^= ((/* implicit */unsigned char) ((short) (_Bool)1));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_24 = 1; i_24 < 15; i_24 += 2) 
            {
                var_39 = ((/* implicit */signed char) ((unsigned char) ((short) 1482526686U)));
                /* LoopSeq 2 */
                for (unsigned long long int i_25 = 0; i_25 < 19; i_25 += 2) /* same iter space */
                {
                    arr_86 [i_20] = ((/* implicit */unsigned long long int) (short)-21385);
                    var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((signed char) ((int) (short)-21933))))));
                    arr_87 [i_4] [i_20] [i_20] [i_4] = ((/* implicit */short) 554658727);
                }
                for (unsigned long long int i_26 = 0; i_26 < 19; i_26 += 2) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned short) ((int) ((short) ((unsigned int) 345646144))));
                    arr_91 [i_20] = ((/* implicit */short) (unsigned short)41563);
                }
            }
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                arr_94 [i_20] [i_20] = ((/* implicit */unsigned long long int) 9223372036854775805LL);
                arr_95 [i_4] [i_20] [i_27] = ((/* implicit */signed char) ((int) 345646145));
                arr_96 [i_4] [i_20] = ((short) ((unsigned char) 345646154));
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 19; i_28 += 2) 
                {
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) ((_Bool) (_Bool)0)))));
                            var_43 = ((/* implicit */_Bool) ((long long int) ((unsigned long long int) ((int) (signed char)127))));
                        }
                    } 
                } 
            }
            var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((short) ((_Bool) ((int) 894403695)))))));
        }
        arr_101 [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned long long int) 2269246761U)));
        /* LoopNest 2 */
        for (signed char i_30 = 0; i_30 < 19; i_30 += 2) 
        {
            for (unsigned char i_31 = 4; i_31 < 16; i_31 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_32 = 0; i_32 < 19; i_32 += 2) 
                    {
                        arr_109 [i_31] [i_4] = ((/* implicit */int) (_Bool)1);
                        var_45 = ((/* implicit */long long int) 4294967285U);
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_33 = 0; i_33 < 19; i_33 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_34 = 0; i_34 < 19; i_34 += 2) /* same iter space */
                        {
                            var_46 = ((/* implicit */_Bool) ((unsigned int) 345646145));
                            var_47 = ((/* implicit */signed char) 1704432165);
                            var_48 = ((int) ((unsigned int) ((signed char) (unsigned short)65534)));
                        }
                        for (short i_35 = 0; i_35 < 19; i_35 += 2) /* same iter space */
                        {
                            arr_117 [i_35] [i_30] [i_31 + 2] [i_30] [(_Bool)1] = ((unsigned char) ((int) ((unsigned long long int) (_Bool)1)));
                            var_49 = ((/* implicit */int) ((unsigned short) 1366922167));
                        }
                        arr_118 [i_4] [i_4] = ((/* implicit */unsigned int) (signed char)-100);
                    }
                    for (int i_36 = 1; i_36 < 15; i_36 += 2) 
                    {
                        var_50 = ((/* implicit */unsigned long long int) ((_Bool) ((short) ((int) 345646140))));
                        var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_37 = 1; i_37 < 18; i_37 += 2) 
                    {
                        var_52 *= ((/* implicit */short) (unsigned short)65534);
                        var_53 = ((/* implicit */int) max((var_53), (-345646145)));
                        var_54 = ((/* implicit */unsigned long long int) (signed char)-26);
                    }
                    arr_127 [i_4] [(unsigned short)5] [(unsigned short)5] &= ((int) ((long long int) ((unsigned char) -2721173476199108989LL)));
                    var_55 = ((/* implicit */_Bool) min((var_55), (((/* implicit */_Bool) ((unsigned int) ((unsigned int) ((_Bool) (unsigned short)12)))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_38 = 4; i_38 < 22; i_38 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_39 = 0; i_39 < 23; i_39 += 2) /* same iter space */
        {
            var_56 = ((/* implicit */unsigned int) (unsigned short)39009);
            arr_133 [i_38] = ((/* implicit */unsigned long long int) ((unsigned short) 4767017676845036722LL));
            var_57 = ((/* implicit */_Bool) ((signed char) -345646144));
        }
        for (signed char i_40 = 0; i_40 < 23; i_40 += 2) /* same iter space */
        {
            var_58 = ((/* implicit */unsigned int) max((var_58), (((/* implicit */unsigned int) (unsigned short)30610))));
            var_59 = ((/* implicit */signed char) 4767017676845036742LL);
            /* LoopSeq 1 */
            for (unsigned int i_41 = 1; i_41 < 22; i_41 += 2) 
            {
                arr_139 [i_38] [i_38] [i_38] [i_38] = ((/* implicit */short) ((int) ((short) ((unsigned int) (signed char)94))));
                arr_140 [i_38] [i_38] = ((/* implicit */short) ((unsigned int) (_Bool)1));
            }
            arr_141 [i_40] = (_Bool)1;
        }
        var_60 = ((/* implicit */unsigned short) (signed char)-18);
        arr_142 [i_38] [i_38 - 2] = ((/* implicit */int) (signed char)127);
        arr_143 [i_38] [i_38 - 1] = ((/* implicit */short) ((_Bool) ((_Bool) ((short) 18446744073709551599ULL))));
    }
}
