/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117106
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            var_19 = var_8;
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? ((+(9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (unsigned char)175))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
        {
            arr_7 [(unsigned char)7] [i_0] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) (unsigned short)16)), (3321421578367114672ULL))) + (((/* implicit */unsigned long long int) ((long long int) var_2)))));
            /* LoopSeq 2 */
            for (long long int i_3 = 1; i_3 < 19; i_3 += 4) 
            {
                arr_10 [i_3] = var_5;
                var_21 += ((/* implicit */int) (short)-4637);
                arr_11 [i_3] [i_3] = ((/* implicit */unsigned char) ((((unsigned int) min((var_6), (((/* implicit */short) (signed char)-123))))) * (((/* implicit */unsigned int) ((/* implicit */int) min((var_14), (((/* implicit */unsigned short) (_Bool)1))))))));
                arr_12 [i_3] = ((/* implicit */unsigned short) (signed char)0);
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (!(((((/* implicit */unsigned int) ((/* implicit */int) max(((short)19421), (((/* implicit */short) (unsigned char)254)))))) >= (8U))))))));
            }
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                arr_16 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((unsigned int) (unsigned char)68));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (short)-32755))));
                    var_24 = ((/* implicit */long long int) (~(4294967295U)));
                    arr_20 [i_4] [i_4] [i_2] [i_4] = ((/* implicit */signed char) (~(((((/* implicit */int) var_17)) & (((/* implicit */int) (signed char)-66))))));
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_9))))))))));
                }
            }
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        {
                            arr_30 [i_7] [i_2] [4U] [i_2] [i_7] [i_2] = ((/* implicit */long long int) var_6);
                            var_26 ^= min((((/* implicit */short) (signed char)-71)), (min(((short)32743), (((/* implicit */short) (unsigned char)143)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_9 = 3; i_9 < 20; i_9 += 3) 
            {
                arr_33 [i_0] = ((/* implicit */short) var_18);
                var_27 = ((/* implicit */long long int) min((((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_0)), (var_15))))));
            }
        }
        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) /* same iter space */
        {
            arr_36 [i_10] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (signed char)-84))))), (min((((/* implicit */unsigned char) var_0)), ((unsigned char)156)))));
            /* LoopNest 3 */
            for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                for (long long int i_12 = 3; i_12 < 18; i_12 += 4) 
                {
                    for (signed char i_13 = 1; i_13 < 18; i_13 += 1) 
                    {
                        {
                            var_28 *= ((/* implicit */short) min(((-(-1694517629))), (((/* implicit */int) (unsigned char)0))));
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((unsigned short) (unsigned char)62)))));
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */short) (signed char)-111)), (var_15)))) > (((/* implicit */int) ((signed char) ((unsigned short) (-9223372036854775807LL - 1LL))))))))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */_Bool) min((var_31), (((((int) (unsigned char)81)) == (((/* implicit */int) var_18))))));
            var_32 &= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))))) * (((/* implicit */int) (unsigned short)18928))));
        }
        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (_Bool)1))));
    }
    var_34 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : ((~(((/* implicit */int) (short)11536))))));
    /* LoopSeq 2 */
    for (signed char i_14 = 2; i_14 < 10; i_14 += 2) 
    {
        arr_49 [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) - (9647360273048988545ULL)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_15 = 2; i_15 < 9; i_15 += 4) 
        {
            var_35 = ((/* implicit */_Bool) (-(var_5)));
            arr_54 [i_14] = ((/* implicit */unsigned char) var_5);
            arr_55 [i_14] [i_15] [i_14] &= ((/* implicit */short) ((unsigned long long int) var_9));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_16 = 1; i_16 < 10; i_16 += 1) 
        {
            arr_59 [i_14 - 2] [i_16 - 1] [i_16] = ((/* implicit */signed char) (unsigned short)2195);
            /* LoopNest 2 */
            for (unsigned char i_17 = 0; i_17 < 11; i_17 += 2) 
            {
                for (unsigned int i_18 = 3; i_18 < 9; i_18 += 1) 
                {
                    {
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)87)) || (((/* implicit */_Bool) var_17)))))));
                        var_37 = ((/* implicit */signed char) ((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58)))));
                        var_38 = ((/* implicit */unsigned char) var_3);
                        /* LoopSeq 3 */
                        for (int i_19 = 0; i_19 < 11; i_19 += 2) 
                        {
                            var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) (short)32767))));
                            arr_67 [i_18] [i_17] [i_17] = ((/* implicit */unsigned short) 3572964821U);
                            arr_68 [i_14] [i_18] [i_17] [i_14] [i_17] [i_14] [i_14] = ((/* implicit */long long int) var_15);
                        }
                        for (signed char i_20 = 2; i_20 < 10; i_20 += 4) /* same iter space */
                        {
                            arr_71 [(unsigned short)4] [i_16] [i_18] [i_16] [(short)10] [i_16] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) >= ((+(((/* implicit */int) var_8))))));
                            arr_72 [i_18] [i_20] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */signed char) var_2);
                        }
                        for (signed char i_21 = 2; i_21 < 10; i_21 += 4) /* same iter space */
                        {
                            var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) var_17))));
                            var_41 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (unsigned short)65521))));
                        }
                        var_42 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                    }
                } 
            } 
            var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)81)) == (((/* implicit */int) var_10)))))));
            arr_75 [i_14 - 1] &= ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163))) >= (((unsigned int) (unsigned char)197)));
        }
        for (unsigned char i_22 = 4; i_22 < 9; i_22 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
            {
                for (signed char i_24 = 0; i_24 < 11; i_24 += 3) 
                {
                    {
                        arr_85 [i_24] [i_23] [i_23] [(_Bool)1] [i_14] [i_24] = ((/* implicit */unsigned char) 1948585578U);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_25 = 0; i_25 < 11; i_25 += 3) 
                        {
                            arr_89 [i_25] [i_25] [i_25] [i_25] [i_24] = (~(((/* implicit */int) var_8)));
                            arr_90 [i_14] [i_14] [i_14] [i_23] [i_24] [i_25] = ((/* implicit */short) ((((/* implicit */int) var_16)) >> (((((/* implicit */int) var_17)) + (101)))));
                            arr_91 [i_24] [i_24] [i_24] [i_24] [i_24] = ((/* implicit */unsigned int) ((signed char) (unsigned char)198));
                            arr_92 [i_14] [i_14] [i_22] [i_14] [i_14] [i_22] [i_14] &= (!(((/* implicit */_Bool) var_0)));
                        }
                        for (long long int i_26 = 0; i_26 < 11; i_26 += 1) 
                        {
                            var_44 *= ((/* implicit */unsigned short) var_18);
                            var_45 = ((/* implicit */int) var_8);
                            var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((unsigned short) (signed char)-95)))));
                        }
                        /* vectorizable */
                        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                        {
                            arr_98 [i_27] [i_24] [i_24] [i_22] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                            arr_99 [i_24] [i_22] [i_14 - 1] = ((/* implicit */long long int) var_7);
                            var_47 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) (signed char)-67))));
                        }
                        /* vectorizable */
                        for (unsigned short i_28 = 1; i_28 < 9; i_28 += 4) 
                        {
                            var_48 = ((/* implicit */long long int) ((unsigned int) 652228649));
                            var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) ((var_13) - (((/* implicit */int) var_16)))))));
                            arr_104 [i_24] [i_22 - 4] [i_23] [i_23] [i_23] [i_28] [i_28] = ((/* implicit */signed char) var_7);
                            arr_105 [i_14] [i_14] [i_22] [i_24] [i_14] [i_24] [i_28] = ((/* implicit */short) (_Bool)1);
                            var_50 = ((/* implicit */unsigned int) min((var_50), (((/* implicit */unsigned int) ((unsigned short) var_6)))));
                        }
                        arr_106 [i_24] [i_22] [i_23 + 1] [i_22] [i_24] = ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) (unsigned char)62)), (var_1)))));
                    }
                } 
            } 
            var_51 = ((/* implicit */unsigned int) max((var_51), (((/* implicit */unsigned int) min((((/* implicit */int) var_15)), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)198)))))))));
        }
        /* vectorizable */
        for (unsigned char i_29 = 4; i_29 < 9; i_29 += 4) /* same iter space */
        {
            var_52 *= ((/* implicit */unsigned long long int) 3536296895U);
            /* LoopNest 2 */
            for (unsigned int i_30 = 0; i_30 < 11; i_30 += 1) 
            {
                for (signed char i_31 = 3; i_31 < 8; i_31 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_32 = 0; i_32 < 11; i_32 += 2) 
                        {
                            arr_117 [i_14] [i_30] [i_30] [i_31 + 3] [i_30] = ((/* implicit */unsigned char) (signed char)63);
                            var_53 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)78))));
                        }
                        var_54 *= ((/* implicit */short) (signed char)79);
                        var_55 = ((/* implicit */_Bool) min((var_55), (((/* implicit */_Bool) ((signed char) (short)20626)))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
            {
                var_56 += ((/* implicit */long long int) (+(((/* implicit */int) var_11))));
                var_57 = ((/* implicit */unsigned long long int) min((var_57), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) var_15)))))));
                arr_122 [i_29] = (unsigned short)5;
            }
        }
    }
    for (signed char i_34 = 0; i_34 < 24; i_34 += 3) 
    {
        arr_126 [i_34] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)62)))))));
        arr_127 [i_34] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)0))))));
    }
    var_58 = ((/* implicit */long long int) (unsigned char)115);
}
