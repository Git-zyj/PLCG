/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155236
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
    var_12 += ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_4))))), ((-(((((/* implicit */_Bool) -1264461879)) ? (4006380950U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_4 [i_0] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4006380950U)) ? (-1264461879) : (((int) 4006380942U))));
            var_13 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) ((unsigned int) (unsigned char)117))), (min((var_6), (((/* implicit */long long int) var_11)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) && (((/* implicit */_Bool) arr_0 [i_1])))))));
            arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0])))))))));
        }
        for (int i_2 = 3; i_2 < 20; i_2 += 4) 
        {
            arr_9 [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-65))))), (536870848U)));
            arr_10 [i_2] [i_2 + 2] [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)8029)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) ((1264461872) != (((/* implicit */int) (unsigned char)139)))))))));
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)57507)) && (((/* implicit */_Bool) -4833882341106315311LL))));
        }
        /* LoopNest 2 */
        for (short i_3 = 3; i_3 < 20; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                {
                    var_15 &= ((/* implicit */long long int) var_4);
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((var_10) != (min((3758096449U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1264461872)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
        {
            arr_20 [i_5] = ((/* implicit */unsigned int) ((unsigned long long int) (~(2915244013684389098ULL))));
            var_17 = ((/* implicit */unsigned int) var_11);
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_18 = ((/* implicit */short) ((unsigned short) ((signed char) arr_0 [i_6])));
                        var_19 = arr_15 [i_7] [i_6] [i_5] [i_0];
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */signed char) arr_14 [(short)8]);
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_0))));
                            var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((-1116833752) <= (((/* implicit */int) ((var_10) != (180465157U)))))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_30 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (signed char)102))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_17 [i_0 + 2] [i_0 + 2])), (var_5)))) : (((((/* implicit */int) var_9)) | (((/* implicit */int) var_11))))));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (min((0U), (1902935056U)))));
                            var_24 = ((/* implicit */short) (unsigned short)37820);
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 4; i_10 < 19; i_10 += 3) 
                        {
                            var_25 = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */int) ((_Bool) arr_17 [i_0] [i_5]))), (((int) var_6)))));
                            var_26 = ((((/* implicit */_Bool) 1168038015104305475LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8029))) : (1902935056U));
                            var_27 -= min((4001419068U), (((/* implicit */unsigned int) (unsigned char)31)));
                            arr_33 [i_10 - 4] [i_5] [i_6] [i_5] [i_0] = ((/* implicit */unsigned short) ((-8598214778777436785LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26949)))));
                        }
                        for (unsigned int i_11 = 1; i_11 < 21; i_11 += 1) 
                        {
                            arr_38 [i_0 - 1] [i_5] [16LL] [i_5] [i_11 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 14817820U)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)22843))))) : (536870855U)));
                            var_28 = ((((((/* implicit */_Bool) arr_23 [i_0 + 1] [i_0] [7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_11 [i_0 + 1] [i_0 - 1] [i_7 - 1]))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)53314)) ? (((/* implicit */int) (unsigned short)35119)) : (-1213882672)))));
                            arr_39 [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */signed char) ((max((arr_19 [i_5] [i_7 - 1] [i_11 - 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)38587)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0 - 1] [i_0 + 1])))))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) 2577490375039847949LL)) ? (((/* implicit */int) (short)-14296)) : (((/* implicit */int) (_Bool)1)))))));
                            var_29 = ((/* implicit */int) min((var_29), (-161380233)));
                        }
                        for (long long int i_12 = 0; i_12 < 22; i_12 += 4) 
                        {
                            arr_42 [i_12] [18U] [i_6] [i_5] [i_12] [i_6] = ((/* implicit */long long int) arr_2 [i_0]);
                            arr_43 [i_5] [i_5] [i_5] [i_7 - 1] [(_Bool)1] = ((/* implicit */_Bool) (+(-1LL)));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 22; i_13 += 4) 
            {
                for (long long int i_14 = 2; i_14 < 21; i_14 += 3) 
                {
                    {
                        arr_49 [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-4))));
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (((~(((((/* implicit */_Bool) 161380250)) ? (36028797018959872LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30435))))))) != (((/* implicit */long long int) ((int) -36028797018959857LL))))))));
                        var_31 = ((/* implicit */_Bool) (-(min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) max((((/* implicit */short) var_0)), (arr_21 [i_14 + 1]))))))));
                        arr_50 [i_14 - 2] [i_5] [7ULL] [i_14] = ((/* implicit */unsigned long long int) max((((long long int) min((((/* implicit */long long int) arr_15 [i_0] [(unsigned char)2] [i_13] [i_14])), (arr_19 [i_5] [7LL] [7LL])))), (((/* implicit */long long int) (+(23684253U))))));
                    }
                } 
            } 
        }
        for (short i_15 = 0; i_15 < 22; i_15 += 3) /* same iter space */
        {
            var_32 = ((/* implicit */long long int) var_1);
            var_33 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_28 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2])), (arr_0 [i_0])))) ? (288586352U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 2]))))));
        }
        for (signed char i_16 = 0; i_16 < 22; i_16 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_17 = 1; i_17 < 20; i_17 += 2) 
            {
                for (long long int i_18 = 0; i_18 < 22; i_18 += 1) 
                {
                    {
                        var_34 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_10) : (var_3)))) ? (((/* implicit */int) ((arr_11 [i_18] [i_18] [i_18]) != (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (((/* implicit */int) var_2)))));
                        var_35 = ((/* implicit */long long int) ((((unsigned int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((99195056973469593ULL) - (99195056973469571ULL)))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65512)) != (2147483647)))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (short i_19 = 2; i_19 < 19; i_19 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_20 = 2; i_20 < 21; i_20 += 4) 
                {
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8013155965698496811ULL)) ? (-3370917491957705703LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)225)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_21 = 2; i_21 < 20; i_21 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) arr_46 [i_16] [i_16] [i_16] [i_21]))));
                        var_38 = var_5;
                        arr_67 [i_19] [11LL] [i_19] [i_20 + 1] [i_19] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (unsigned short)43347)), (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (arr_23 [i_19 + 2] [i_19 + 2] [i_19]))))) < (min((3697717760U), (((/* implicit */unsigned int) (short)7766))))));
                    }
                    arr_68 [i_16] [i_19] = ((/* implicit */int) (((-(((/* implicit */int) ((var_10) <= (var_10)))))) <= (((/* implicit */int) arr_27 [i_0] [i_16] [i_19] [i_19] [i_19]))));
                    /* LoopSeq 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        arr_71 [i_19] [(signed char)2] [i_19] [i_19] [i_16] [i_0] = ((/* implicit */int) var_8);
                        arr_72 [i_0 + 2] [7LL] [i_19] [i_20 - 2] [i_19] = ((_Bool) min((((((/* implicit */_Bool) var_6)) ? (arr_6 [i_20]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))))), (((var_2) ? (((/* implicit */long long int) var_10)) : (arr_19 [i_19] [i_20] [i_19])))));
                        var_39 = ((/* implicit */long long int) (unsigned char)127);
                    }
                    for (unsigned short i_23 = 1; i_23 < 21; i_23 += 2) 
                    {
                        arr_75 [i_0] [i_19] [i_0] [i_0] [i_0 + 2] = ((/* implicit */_Bool) ((long long int) (-(arr_48 [i_0] [(short)3]))));
                        arr_76 [i_0] [i_19] [i_19] [i_20 + 1] [i_19] = ((/* implicit */unsigned short) var_9);
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)36448)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) (_Bool)1))));
                        var_41 += ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)203)) >> (((/* implicit */int) (_Bool)1))));
                        arr_77 [i_19] [i_16] [i_19] [i_20 - 2] [i_23 + 1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (min((4640912102855548272ULL), (((/* implicit */unsigned long long int) arr_64 [i_23 + 1] [i_23 - 1] [i_19] [i_23 - 1]))))));
                    }
                }
                var_42 = ((/* implicit */unsigned short) arr_8 [i_0]);
                var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((((((/* implicit */int) (short)(-32767 - 1))) > (((/* implicit */int) (signed char)-42)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)59572))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_37 [i_0] [i_0] [i_16] [i_16] [i_19 + 1] [17U])))) : (((/* implicit */int) (unsigned char)36))))) : (2163682368U))))));
            }
            for (signed char i_24 = 0; i_24 < 22; i_24 += 2) 
            {
                /* LoopSeq 2 */
                for (long long int i_25 = 0; i_25 < 22; i_25 += 4) 
                {
                    arr_83 [i_0 + 1] [i_0 + 2] [i_0 + 1] = ((/* implicit */unsigned char) arr_70 [i_0] [i_0] [i_0] [i_25] [i_0]);
                    arr_84 [0LL] [i_16] [i_24] [i_25] = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
                    arr_85 [i_0] [i_16] [i_0] [i_24] [i_25] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) min((arr_59 [i_0] [i_16] [i_24] [i_25]), (((/* implicit */unsigned short) var_8))))), (arr_46 [i_0] [i_0] [i_0] [i_0 - 1]))))));
                }
                for (int i_26 = 3; i_26 < 19; i_26 += 4) 
                {
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */int) arr_28 [i_0] [i_24] [i_24] [i_24])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (var_10))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_26])))))) : (((((/* implicit */_Bool) 8U)) ? (14665806506359207196ULL) : (((/* implicit */unsigned long long int) 4830783103211679026LL))))));
                    var_45 &= ((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)-1))))));
                    arr_90 [i_0] [(signed char)8] [i_0] [i_0 + 1] [i_26] = ((/* implicit */unsigned short) max((((/* implicit */int) var_0)), ((-(((/* implicit */int) arr_24 [i_0] [i_16] [i_24] [i_0 + 2]))))));
                }
                arr_91 [i_0 + 2] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
            }
            for (short i_27 = 0; i_27 < 22; i_27 += 3) 
            {
                var_46 = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) 2097151U)))));
                /* LoopNest 2 */
                for (unsigned char i_28 = 0; i_28 < 22; i_28 += 2) 
                {
                    for (unsigned short i_29 = 0; i_29 < 22; i_29 += 1) 
                    {
                        {
                            var_47 = ((/* implicit */short) ((_Bool) (unsigned short)2));
                            var_48 = ((/* implicit */_Bool) arr_98 [i_16] [i_16] [(_Bool)1] [i_16] [i_16]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_30 = 4; i_30 < 21; i_30 += 3) 
                {
                    for (long long int i_31 = 0; i_31 < 22; i_31 += 4) 
                    {
                        {
                            var_49 = ((/* implicit */unsigned short) arr_103 [i_30] [i_30] [(_Bool)1] [i_30] [i_27] [i_30] [i_30]);
                            var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) ((((/* implicit */long long int) 134201344U)) != (9223372036854775807LL))))));
                        }
                    } 
                } 
                arr_105 [i_0] [i_27] = ((/* implicit */unsigned int) max((-161380232), (((/* implicit */int) (unsigned char)255))));
            }
        }
    }
    var_51 = min((((unsigned int) (+(((/* implicit */int) var_5))))), (((unsigned int) ((var_6) > (((/* implicit */long long int) var_10))))));
}
