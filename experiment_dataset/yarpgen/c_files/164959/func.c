/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164959
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -5676649175150664080LL)))))))) : ((((((-(2044874015556173135LL))) + (9223372036854775807LL))) << (((((/* implicit */int) arr_0 [i_0])) + (56)))))));
        arr_2 [i_0] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (+(610097751089533162LL)))) ? (((/* implicit */unsigned int) -1941071144)) : (((1871286328U) + (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 3; i_2 < 10; i_2 += 2) 
        {
            var_12 += ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (arr_4 [i_2]) : (((/* implicit */int) var_2))))) ^ (((((/* implicit */_Bool) 10707166228668923471ULL)) ? (2253991091U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))))));
            var_13 ^= ((/* implicit */signed char) var_4);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_14 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (349582122)));
            /* LoopNest 2 */
            for (signed char i_4 = 2; i_4 < 10; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    {
                        var_15 = ((((/* implicit */_Bool) (short)28029)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)136)));
                        var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) | (((/* implicit */int) arr_9 [(unsigned char)7] [i_5])))) | (((((/* implicit */_Bool) -1167455555)) ? (-1) : (((/* implicit */int) var_1))))));
                    }
                } 
            } 
            var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) -1579653949)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (unsigned char)184))))));
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) var_10)))))));
        }
        for (signed char i_6 = 3; i_6 < 10; i_6 += 3) 
        {
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((16489076532620823077ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32715))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)0)))))))));
            /* LoopSeq 4 */
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                arr_20 [i_1] [i_6 + 1] [i_7] = -633796136;
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_1 - 2] [i_1 - 2])))))));
            }
            for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 597338602U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (((((/* implicit */unsigned int) arr_11 [i_1 - 2] [i_1 - 2] [i_8] [(_Bool)1])) | (var_5)))));
                /* LoopSeq 4 */
                for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    var_22 = ((((((/* implicit */int) var_8)) + (2147483647))) << (((/* implicit */int) (signed char)0)));
                    var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_4))))) - (2047U)));
                }
                for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)18998))));
                    arr_29 [i_8] [i_10] [9U] [i_10] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_1 - 1] [i_8])) ? (((/* implicit */int) arr_23 [i_1 - 1] [i_8])) : (((/* implicit */int) var_8))));
                }
                for (int i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_6 - 2] [(signed char)8]))));
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 1]))) - (-679312577336142850LL)));
                }
                for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    arr_35 [i_1] [i_1] [i_8] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)121)) << (((((/* implicit */int) (unsigned char)75)) - (58)))));
                    var_27 = ((/* implicit */int) 2927599135U);
                }
                var_28 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */int) (unsigned char)189)))));
                arr_36 [i_8] [6LL] [i_8] [i_8] = ((/* implicit */int) (unsigned short)34032);
            }
            for (unsigned short i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_6 + 1] [i_1 - 1]))) | (((unsigned long long int) 16168646616405859099ULL))));
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    for (long long int i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        {
                            var_30 ^= ((/* implicit */short) ((((/* implicit */_Bool) (short)-1135)) ? (((/* implicit */int) (unsigned short)24198)) : (2147483647)));
                            var_31 ^= ((/* implicit */int) ((((/* implicit */int) (signed char)62)) < (((/* implicit */int) arr_9 [i_1] [i_1 + 1]))));
                        }
                    } 
                } 
            }
            for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 11; i_17 += 4) 
                {
                    for (int i_18 = 0; i_18 < 11; i_18 += 4) 
                    {
                        {
                            arr_52 [(signed char)10] [(signed char)4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 5915462965853230114LL)) ? (arr_15 [i_1] [5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) & (((((/* implicit */_Bool) arr_51 [i_18] [i_6] [i_16] [i_16] [i_18] [i_18])) ? (((/* implicit */long long int) 4)) : (-5452274233868960453LL)))));
                            var_32 = ((/* implicit */short) ((unsigned short) -1106694983));
                            var_33 = ((unsigned short) (short)-29838);
                        }
                    } 
                } 
                var_34 = ((((var_7) ? (((/* implicit */int) arr_49 [7LL] [(unsigned char)10] [i_6] [i_16])) : (((/* implicit */int) var_4)))) - (((/* implicit */int) (signed char)105)));
                var_35 = ((/* implicit */int) (+(var_9)));
                arr_53 [(signed char)3] = ((arr_18 [i_16 + 1]) != (arr_18 [i_16 + 1]));
            }
        }
        arr_54 [i_1] = ((/* implicit */unsigned char) (-(2018307302U)));
        /* LoopNest 2 */
        for (short i_19 = 0; i_19 < 11; i_19 += 2) 
        {
            for (unsigned short i_20 = 0; i_20 < 11; i_20 += 4) 
            {
                {
                    var_36 = (((+(5757916569236803875LL))) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_58 [i_1] [i_19] [i_19] [i_19])) ? (((/* implicit */int) (unsigned char)236)) : (var_10)))));
                    var_37 = ((/* implicit */_Bool) 0U);
                    var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)76))));
                    arr_59 [i_1] [3ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)46507))))) ? (0) : (((((/* implicit */_Bool) -1850677478)) ? (98529030) : (483861012)))));
                }
            } 
        } 
    }
    var_39 = ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */int) max((((_Bool) 3315727969U)), ((!(((/* implicit */_Bool) (unsigned short)51375))))))) : (((((((/* implicit */_Bool) -369406542)) ? (((/* implicit */int) (signed char)61)) : (var_10))) >> (((((((/* implicit */int) var_1)) ^ (((/* implicit */int) (short)-1)))) + (105))))));
    var_40 = ((/* implicit */short) ((((/* implicit */int) var_1)) << ((((((-(((/* implicit */int) (short)0)))) | (var_10))) + (1675012402)))));
    /* LoopSeq 2 */
    for (long long int i_21 = 1; i_21 < 20; i_21 += 4) 
    {
        var_41 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
        var_42 &= ((/* implicit */unsigned char) var_7);
    }
    for (unsigned short i_22 = 4; i_22 < 10; i_22 += 4) 
    {
        arr_65 [(signed char)9] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) ^ (((((/* implicit */_Bool) arr_18 [i_22 - 1])) ? (arr_14 [i_22] [i_22 - 1] [i_22]) : (1765849796)))));
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 11; i_23 += 4) 
        {
            for (signed char i_24 = 0; i_24 < 11; i_24 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_25 = 0; i_25 < 11; i_25 += 4) 
                    {
                        var_43 = ((/* implicit */short) 4186112U);
                        var_44 = ((/* implicit */unsigned long long int) -1756292112724190841LL);
                        /* LoopSeq 3 */
                        for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                        {
                            var_45 ^= ((/* implicit */_Bool) ((signed char) arr_26 [i_22 - 1] [i_22 - 4] [i_26 - 1]));
                            var_46 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4016603253U))));
                            var_47 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(3778243614100484508LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_75 [(_Bool)1] [i_23] [i_24] [(unsigned char)9] [i_26] [i_23])) : (((/* implicit */int) (short)-17434))))) : (2449909356U)))));
                            arr_78 [i_22] [i_24] [i_25] [i_26] = ((/* implicit */long long int) ((unsigned long long int) (!(((((/* implicit */_Bool) 17994944355309203341ULL)) || (((/* implicit */_Bool) arr_40 [i_22] [10LL])))))));
                            var_48 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_57 [i_22 - 4] [i_22 - 2] [i_22 - 3] [i_26 - 1])) && (((/* implicit */_Bool) 1656875468U))))) << (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (1143833706)))) ? (((/* implicit */int) ((2937896560492248798ULL) > (((/* implicit */unsigned long long int) -1054776717))))) : ((~(((/* implicit */int) var_2))))))));
                        }
                        for (long long int i_27 = 0; i_27 < 11; i_27 += 2) 
                        {
                            arr_83 [i_23] [i_27] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)175)), (arr_11 [i_22] [i_23] [i_23] [(unsigned char)7])))) && (((/* implicit */_Bool) 0ULL)))))));
                            var_49 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_5)))) && (((((/* implicit */_Bool) (short)32024)) && (((/* implicit */_Bool) 1595898963337980791ULL))))));
                            arr_84 [i_22] [i_23] [i_24] [i_24] [i_25] [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)5979))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_6)), (arr_47 [i_22 - 1] [i_22 + 1] [i_22] [i_22 - 2] [i_22 - 1] [i_23]))))) : (max((2934278109522193940LL), (((/* implicit */long long int) (_Bool)1))))));
                            var_50 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 536870911LL)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (unsigned short)22584))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_75 [i_22] [i_22 - 1] [i_24] [i_25] [i_25] [i_27]))) ^ (((((/* implicit */_Bool) var_9)) ? (0LL) : (((/* implicit */long long int) 1583727240)))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_80 [i_22] [0LL] [i_22] [i_22] [i_22 - 3] [i_22] [i_22 - 2])))));
                        }
                        for (short i_28 = 0; i_28 < 11; i_28 += 2) 
                        {
                            var_51 = ((/* implicit */unsigned long long int) (short)-17007);
                            arr_87 [i_22] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))) < (12511945245255231924ULL))) ? (-18) : ((~(((/* implicit */int) (unsigned char)242)))))))));
                            var_52 = ((/* implicit */unsigned short) ((long long int) ((arr_79 [i_22] [i_23] [10ULL] [i_25] [i_28]) / (((long long int) (_Bool)1)))));
                            var_53 = ((/* implicit */long long int) max((var_53), ((((~(((0LL) | (((/* implicit */long long int) var_9)))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_82 [i_22 - 4] [i_23] [i_24] [9U] [i_24])) - (((/* implicit */int) (unsigned char)151)))))))))))));
                            var_54 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_73 [i_22 - 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)17263))))) : (((/* implicit */int) (unsigned char)134))))) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (short)0)))))))));
                        }
                    }
                    for (signed char i_29 = 0; i_29 < 11; i_29 += 1) 
                    {
                        arr_90 [i_29] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_9))) | (((/* implicit */unsigned int) (+(((/* implicit */int) var_7)))))))) ? (((/* implicit */int) min(((signed char)111), ((signed char)-119)))) : ((+(((/* implicit */int) max(((unsigned char)128), (var_4))))))));
                        var_55 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2313189070389412229ULL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_6))))) ? (((9ULL) << (((((/* implicit */int) var_4)) - (22))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14126)))));
                        var_56 = ((/* implicit */long long int) (_Bool)1);
                    }
                    var_57 = ((/* implicit */long long int) ((((((131072U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-5319)) > (((/* implicit */int) (short)-26837)))))))) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_2)))))) : (((/* implicit */int) ((_Bool) -8541036343436032510LL)))));
                    /* LoopSeq 2 */
                    for (signed char i_30 = 0; i_30 < 11; i_30 += 2) 
                    {
                        var_58 += ((/* implicit */long long int) var_4);
                        var_59 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)60)) << (((-1) + (21)))))) % (((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (-2536124026166805676LL))))) - (((/* implicit */long long int) (-(((/* implicit */int) arr_68 [2LL])))))));
                        arr_94 [(short)6] = ((/* implicit */unsigned long long int) arr_8 [i_23] [i_24] [i_24]);
                    }
                    for (unsigned char i_31 = 1; i_31 < 7; i_31 += 4) 
                    {
                        var_60 = ((/* implicit */int) arr_22 [10LL] [i_23] [i_22] [i_31]);
                        arr_97 [i_22] [i_22] [i_24] [i_23] = ((/* implicit */unsigned long long int) (-(((int) ((((/* implicit */int) arr_88 [i_23])) | (((/* implicit */int) (short)(-32767 - 1))))))));
                        arr_98 [i_22 - 3] [i_22 - 3] [i_22 - 3] [i_22 - 3] [i_23] [i_24] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)27)) - (1626842001))) + (((/* implicit */int) var_3))));
                    }
                }
            } 
        } 
        var_61 ^= ((/* implicit */unsigned char) ((((((((/* implicit */int) arr_66 [i_22] [i_22] [i_22])) + (2147483647))) >> (((((/* implicit */int) (short)-9)) + (24))))) ^ (((((((/* implicit */int) var_4)) * (((/* implicit */int) arr_38 [i_22] [i_22 - 3] [i_22] [i_22])))) << (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)55))))))));
        var_62 = ((/* implicit */unsigned short) (~(((294897382196185132ULL) << (((((/* implicit */int) arr_24 [i_22 - 4] [i_22 - 4] [i_22 + 1] [i_22])) + (151)))))));
        var_63 = ((/* implicit */short) min((var_63), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_63 [i_22 - 4])) | (((/* implicit */int) (unsigned char)218))))) ? (((((/* implicit */int) var_3)) % (((/* implicit */int) var_7)))) : (((((/* implicit */int) arr_63 [i_22 - 1])) & (((/* implicit */int) (short)-21351)))))))));
    }
}
