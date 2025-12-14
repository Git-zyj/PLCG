/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153849
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
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (short)(-32767 - 1)))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) 9223372036854775779LL)))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) var_3)))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_3] [i_3] [i_3] [i_0] [i_0] [i_4] = ((/* implicit */short) (+(-593040699051569186LL)));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(9223372036854775775LL)))) ? (((/* implicit */int) (unsigned short)37)) : (((((/* implicit */_Bool) 2521276295U)) ? (((/* implicit */int) (short)-20857)) : (((/* implicit */int) (short)-1))))));
                                var_16 += ((/* implicit */unsigned char) (((((+(var_9))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2])) || (((/* implicit */_Bool) var_3)))))));
                                var_17 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? ((+(var_2))) : (arr_4 [i_1] [i_1] [i_0])));
                            }
                        } 
                    } 
                    var_18 = var_0;
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                {
                    arr_23 [i_0] [i_6] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)61575)) >> (((((/* implicit */int) (unsigned short)4659)) - (4650)))));
                    var_19 ^= ((arr_3 [i_5]) / (((/* implicit */long long int) ((/* implicit */int) var_11))));
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 1; i_7 < 6; i_7 += 2) 
                    {
                        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(var_2))))));
                        arr_27 [i_0] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88))) : (2872459301U))));
                    }
                    for (unsigned short i_8 = 1; i_8 < 6; i_8 += 1) 
                    {
                        var_21 = ((/* implicit */short) var_12);
                        var_22 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (unsigned char)10)))));
                        var_23 = (-(arr_22 [i_5] [i_8 - 1]));
                        arr_30 [i_0] [i_6] [i_5] [i_0] [i_0] = (unsigned char)13;
                    }
                }
            } 
        } 
        arr_31 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_0]))));
    }
    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
    {
        var_24 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_34 [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_9))) | (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (min((((/* implicit */long long int) var_3)), ((~(-9223372036854775771LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_9]))) : (0U))))));
        /* LoopSeq 2 */
        for (unsigned short i_10 = 2; i_10 < 13; i_10 += 2) 
        {
            var_25 = ((/* implicit */long long int) ((short) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))) * (34359214080LL))))));
            var_26 = ((/* implicit */long long int) (unsigned char)4);
            var_27 = ((/* implicit */short) ((9223372036854775807LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
            var_28 = (unsigned char)13;
        }
        /* vectorizable */
        for (long long int i_11 = 1; i_11 < 15; i_11 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                for (unsigned char i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    for (unsigned short i_14 = 1; i_14 < 14; i_14 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -8935239467002725582LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)194))) : (8031547371646264130LL)))));
                            arr_47 [i_9] [i_11] [i_11 - 1] [i_12] [i_11] [i_13] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_9])) ? (((/* implicit */int) arr_40 [i_12])) : (((/* implicit */int) arr_40 [i_11 + 1]))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */short) var_5);
            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_11 + 1] [i_11 - 1])) ? (((/* implicit */int) arr_38 [i_11 + 1] [i_11 + 1])) : (((/* implicit */int) arr_38 [i_11 - 1] [i_11 - 1])))))));
            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) var_5))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_15 = 2; i_15 < 14; i_15 += 4) /* same iter space */
        {
            arr_51 [i_15] [i_9] [i_9] = ((/* implicit */short) arr_43 [i_9] [i_15]);
            /* LoopNest 3 */
            for (short i_16 = 0; i_16 < 16; i_16 += 2) 
            {
                for (unsigned char i_17 = 0; i_17 < 16; i_17 += 1) 
                {
                    for (unsigned short i_18 = 0; i_18 < 16; i_18 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (unsigned short)56705)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10))) : (7791436984352084677LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_37 [6LL])) : (var_2)))))));
                            var_34 = ((/* implicit */unsigned char) 7161369694965988835LL);
                            var_35 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)1))) - (2369380166U)))), (((long long int) arr_54 [i_9] [i_9] [i_9] [i_9]))));
                            var_36 = ((/* implicit */long long int) var_1);
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_19 = 2; i_19 < 14; i_19 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_20 = 0; i_20 < 16; i_20 += 3) 
            {
                for (unsigned int i_21 = 0; i_21 < 16; i_21 += 2) 
                {
                    {
                        var_37 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_61 [i_19 - 2] [i_19 - 1])))) ? (arr_59 [i_19 - 1]) : (((/* implicit */long long int) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_61 [i_19 + 2] [i_19 - 1])) - (36138))))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_22 = 0; i_22 < 16; i_22 += 2) /* same iter space */
                        {
                            arr_67 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) ((unsigned char) min((((unsigned short) var_8)), (((/* implicit */unsigned short) var_12)))));
                            var_38 = ((/* implicit */unsigned short) min((-7437849222845714518LL), (((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_19 + 2] [i_19 + 2] [i_9]))) : (2726917147910185609LL)))));
                        }
                        for (unsigned int i_23 = 0; i_23 < 16; i_23 += 2) /* same iter space */
                        {
                            var_39 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_62 [i_23] [i_21] [i_20] [i_19 + 1])) && (((/* implicit */_Bool) 0LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((unsigned int) var_2)))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_19 + 2] [i_19] [i_19 + 2] [i_9])))));
                            var_40 = ((/* implicit */unsigned char) 1434344068U);
                            var_41 &= (~(-966707964258020073LL));
                        }
                        for (unsigned int i_24 = 0; i_24 < 16; i_24 += 2) /* same iter space */
                        {
                            var_42 = ((/* implicit */long long int) max((arr_53 [i_19]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_63 [i_9] [i_9])))))));
                            var_43 = ((/* implicit */short) ((long long int) (-(arr_69 [i_9] [i_19 - 2] [i_19 - 2] [i_19] [i_19 - 2] [i_19 - 2] [i_19 - 2]))));
                            var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) (+(((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32767))) >= (700784781U))) ? (min((((/* implicit */long long int) var_7)), (var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4018154451U)))))))))));
                            arr_72 [i_9] [i_9] [i_19 + 2] [i_19 + 2] [i_20] [(unsigned char)2] [i_9] = max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_38 [i_19 + 2] [i_19 + 2]))))), (max((2726917147910185603LL), (966707964258020048LL))));
                            var_45 &= ((/* implicit */unsigned char) ((unsigned int) min((-966707964258020073LL), (((/* implicit */long long int) ((unsigned short) (short)-21194))))));
                        }
                        /* LoopSeq 1 */
                        for (short i_25 = 0; i_25 < 16; i_25 += 1) 
                        {
                            var_46 = ((/* implicit */unsigned char) (+((~(arr_73 [i_9] [i_19 - 1] [i_20] [i_21] [i_20])))));
                            var_47 = ((/* implicit */long long int) (unsigned short)65535);
                        }
                        arr_75 [i_9] [i_19 + 1] [i_20] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_54 [i_19 + 1] [i_19 - 2] [i_19] [i_19]), (arr_54 [i_19 + 1] [i_19 - 2] [i_19] [i_19])))) ? (((/* implicit */int) arr_54 [i_19 + 1] [i_19 - 2] [i_19 - 2] [i_19])) : ((+(((/* implicit */int) var_10))))));
                        arr_76 [i_19 - 2] [i_21] = ((/* implicit */unsigned short) ((unsigned char) min((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_63 [i_9] [i_20])) : (((/* implicit */int) (unsigned char)97))))))));
                    }
                } 
            } 
            var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)255)))))));
            var_49 = ((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */short) var_11)), (arr_52 [i_9] [i_9] [(unsigned char)4] [i_19 + 2]))))));
        }
    }
    var_50 = ((/* implicit */long long int) var_4);
}
