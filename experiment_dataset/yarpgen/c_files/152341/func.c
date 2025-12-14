/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152341
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
    var_17 -= ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) 1397311356U)))));
    var_18 = (+(((/* implicit */int) var_16)));
    var_19 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_3)))))), (((unsigned int) var_9))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) (-(1809636783U)))) : (((((/* implicit */_Bool) max((arr_0 [i_0 - 1] [i_2]), (var_15)))) ? (((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (var_13) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (arr_4 [i_1] [i_1 + 1] [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_2])))))))));
                var_21 = ((/* implicit */_Bool) ((short) max((6991912909915112528LL), (((/* implicit */long long int) arr_0 [i_1 - 2] [i_0])))));
            }
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((13813552894226385226ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (unsigned char)215))));
                arr_9 [i_0] [i_1] [i_3] &= arr_0 [i_1] [i_1];
            }
            for (int i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
            {
                var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_7 [i_0] [(_Bool)1] [(_Bool)1]))))))) ? (((/* implicit */int) (!(((arr_4 [i_1] [(unsigned short)2] [i_1] [i_1]) != (((/* implicit */int) var_6))))))) : ((+(((/* implicit */int) (unsigned char)233))))));
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) ((_Bool) 3386503842U)))))))));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        {
                            var_25 &= ((/* implicit */unsigned short) 863391513);
                            var_26 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [(unsigned short)7] [i_5] [i_1 + 1] [i_0 - 1] [i_0] [i_0])) || (((/* implicit */_Bool) (+(-4572946532039712879LL))))));
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19809)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) (unsigned char)252))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (var_0))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)29536)))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_0] [0] [i_0 - 1] [i_1]))));
                var_29 -= ((/* implicit */unsigned char) (~(arr_18 [9LL] [i_0 + 1] [i_5] [9LL] [i_1 - 2])));
            }
            /* LoopNest 2 */
            for (unsigned short i_8 = 2; i_8 < 10; i_8 += 2) 
            {
                for (unsigned char i_9 = 1; i_9 < 9; i_9 += 3) 
                {
                    {
                        var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_9 - 1] [7LL])) ? (((/* implicit */long long int) arr_18 [i_8 - 2] [i_8 - 2] [i_8 - 1] [i_8 + 1] [i_8])) : ((+(5677300780611337036LL))))))));
                        arr_26 [i_0] [i_0] [(unsigned char)7] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_10)))) ? ((+(-863391520))) : ((-((-(((/* implicit */int) var_12))))))));
                        var_31 = ((/* implicit */int) 3115499694U);
                        var_32 ^= ((/* implicit */int) min(((-(min((((/* implicit */long long int) (unsigned char)2)), (var_2))))), (((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned char)232)))))))));
                        /* LoopSeq 1 */
                        for (int i_10 = 2; i_10 < 7; i_10 += 2) 
                        {
                            arr_29 [i_0] [i_0] [i_8 - 1] [i_9] [i_10] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_23 [i_8 + 1] [7U] [i_8] [i_0])) : (((/* implicit */int) var_15)))));
                            var_33 -= ((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_22 [i_1] [i_8 + 1] [i_9 + 2] [i_10 + 4])), (var_12))))));
                            var_34 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) var_10)) / (arr_12 [i_8 - 2]))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28199))) : (8316598107302606718LL))) == (138561100085620285LL))))));
                        }
                    }
                } 
            } 
        }
        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_35 += ((/* implicit */long long int) (-((+(((/* implicit */int) ((_Bool) (_Bool)1)))))));
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_11] [i_0] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_18 [i_13] [i_12] [(_Bool)1] [i_11] [i_0]))))))) ? (-8211338815070633945LL) : (min((((/* implicit */long long int) var_11)), (((1647225122856518860LL) & (var_2)))))));
                    var_37 = ((/* implicit */_Bool) arr_27 [i_11] [i_11]);
                    var_38 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25216)) ? (arr_4 [i_11] [i_0] [i_0 + 1] [(short)8]) : (arr_4 [i_11] [i_0] [i_0 - 1] [i_11])))) ? (((/* implicit */long long int) max((arr_30 [i_13] [i_11]), (((/* implicit */unsigned int) arr_22 [i_11] [2ULL] [i_0 - 1] [i_13]))))) : (((long long int) ((((/* implicit */_Bool) -8316598107302606732LL)) ? (((/* implicit */int) (unsigned short)17836)) : (((/* implicit */int) arr_33 [i_11] [2LL])))))));
                    var_39 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3115499673U)) ? (((/* implicit */int) (unsigned short)37336)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) (unsigned short)4922)) : (((/* implicit */int) ((unsigned char) var_8)))))));
                }
                var_40 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
            }
            for (unsigned long long int i_14 = 1; i_14 < 9; i_14 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 3; i_15 < 10; i_15 += 2) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        {
                            var_41 *= ((/* implicit */unsigned char) ((short) arr_22 [i_16] [i_16] [i_16] [i_15]));
                            var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)3)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (unsigned char)232)) : (-166646274)))) ? (((/* implicit */int) (short)11339)) : (((/* implicit */int) arr_1 [i_11])))) : (((/* implicit */int) (short)27869)))))));
                            var_43 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0]))) | (4137690771U))))));
                        }
                    } 
                } 
                var_44 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_16)), ((short)28568)))) ? (((/* implicit */int) arr_42 [i_11] [i_14 + 1] [i_14 - 1] [i_14 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                var_45 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -7732040386797788857LL)) ? (((/* implicit */int) (short)-29708)) : (((/* implicit */int) (unsigned short)5946))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((short) arr_1 [i_0])))))));
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_46 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)27855))));
                /* LoopNest 2 */
                for (signed char i_18 = 1; i_18 < 8; i_18 += 2) 
                {
                    for (signed char i_19 = 0; i_19 < 11; i_19 += 2) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned long long int) (-((+(-1851890107)))));
                            var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) -746467982))));
                            var_49 &= ((/* implicit */long long int) var_1);
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned short i_20 = 0; i_20 < 11; i_20 += 2) 
                {
                    var_50 -= ((/* implicit */signed char) (~(min(((-(565607648U))), (var_7)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_21 = 1; i_21 < 7; i_21 += 3) 
                    {
                        var_51 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
                        var_52 = ((/* implicit */unsigned long long int) (~(((unsigned int) (~(((/* implicit */int) (unsigned short)37337)))))));
                        var_53 = ((((/* implicit */_Bool) (unsigned short)12146)) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) (short)25102)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned int) var_12))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (short)-27869)) ? (-6926994078779836635LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-117))))) : ((~(var_5))))));
                    }
                }
                for (signed char i_22 = 3; i_22 < 9; i_22 += 3) 
                {
                    var_54 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_18 [i_0 - 1] [i_11] [i_11] [i_17] [i_22])) ? ((-(((/* implicit */int) var_15)))) : (((/* implicit */int) (unsigned short)34075))))));
                    var_55 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_35 [i_0] [i_0] [i_17] [i_22])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_44 [i_0])))) ? (((((/* implicit */_Bool) arr_21 [i_0] [i_0 - 1] [i_22 - 1] [(unsigned char)6])) ? (((unsigned long long int) 2909174226U)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))))) : (max((((/* implicit */unsigned long long int) arr_45 [i_0] [i_22 - 2])), (max((var_13), (((/* implicit */unsigned long long int) 8316598107302606734LL))))))));
                }
                for (unsigned short i_23 = 0; i_23 < 11; i_23 += 3) /* same iter space */
                {
                    var_56 += ((/* implicit */short) ((signed char) min((((/* implicit */unsigned int) ((_Bool) 6069837201045782438ULL))), ((+(2267058761U))))));
                    var_57 = ((/* implicit */int) max((var_57), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_11] [i_23]))))) == (((/* implicit */int) ((short) arr_3 [i_0] [i_11] [i_17]))))))));
                    var_58 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)16608)) ? (((/* implicit */int) (short)-12405)) : (((/* implicit */int) var_11))))) + (1385793074U)))) ? (max((min((((/* implicit */unsigned long long int) arr_39 [(unsigned short)4] [i_11] [i_17])), (arr_48 [i_23] [i_17] [i_17] [i_11] [i_0]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)60613)) ? (((/* implicit */int) arr_57 [i_0] [i_11] [i_17] [i_0] [i_0])) : (((/* implicit */int) var_9)))))))));
                    var_59 |= ((/* implicit */unsigned long long int) max(((short)29111), ((short)16608)));
                }
                for (unsigned short i_24 = 0; i_24 < 11; i_24 += 3) /* same iter space */
                {
                    var_60 -= (((((~(((/* implicit */int) var_4)))) > (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned short)17831)) : (((/* implicit */int) (unsigned short)63338)))))) ? ((-(((unsigned int) (signed char)94)))) : (((unsigned int) min((((/* implicit */unsigned char) (signed char)31)), (var_6)))));
                    arr_68 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)33803)) + (((/* implicit */int) arr_54 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))), (6926994078779836635LL)))) ? ((+(1557548169))) : (((/* implicit */int) var_3))));
                    var_61 = ((/* implicit */int) max((var_61), (((((/* implicit */_Bool) (unsigned char)108)) ? ((+(((/* implicit */int) (short)28568)))) : (((/* implicit */int) var_8))))));
                }
                var_62 = ((/* implicit */unsigned int) min((var_62), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)21716)), ((unsigned short)17827)))) ? ((((~(arr_31 [i_0] [i_11] [i_17]))) | (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) (~(min((1881737275U), (((/* implicit */unsigned int) (_Bool)0))))))))))));
            }
            var_63 = ((/* implicit */unsigned char) max((var_63), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(arr_13 [i_11])))))))));
        }
        var_64 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1] [i_0 - 1])))) | (((/* implicit */int) var_12))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (min(((unsigned short)33807), ((unsigned short)17816)))))) : ((~((~(((/* implicit */int) (short)11265))))))));
        /* LoopNest 2 */
        for (unsigned short i_25 = 0; i_25 < 11; i_25 += 2) 
        {
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                {
                    var_65 |= ((/* implicit */_Bool) (+(((((_Bool) (unsigned char)109)) ? ((+(((/* implicit */int) var_6)))) : ((~(((/* implicit */int) (_Bool)1))))))));
                    var_66 &= ((/* implicit */unsigned int) ((int) (_Bool)0));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_27 = 0; i_27 < 11; i_27 += 2) 
        {
            for (unsigned int i_28 = 3; i_28 < 7; i_28 += 3) 
            {
                for (short i_29 = 2; i_29 < 10; i_29 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_30 = 0; i_30 < 11; i_30 += 3) 
                        {
                            var_67 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((arr_20 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47704))) : (10140589980144615651ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)60921)))))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_28 + 2] [i_28] [i_0] [i_30] [i_30]))) : (((((/* implicit */_Bool) arr_31 [i_0] [i_27] [i_0])) ? (var_14) : (arr_38 [i_28] [i_29] [i_30]))))) : ((~(((long long int) arr_17 [i_27] [i_27]))))));
                            var_68 = ((/* implicit */unsigned int) (unsigned short)65041);
                        }
                        for (unsigned char i_31 = 0; i_31 < 11; i_31 += 3) 
                        {
                            var_69 = ((/* implicit */_Bool) arr_60 [i_0 + 1] [i_29]);
                            var_70 -= ((/* implicit */long long int) (-((-(((((/* implicit */_Bool) 2996595075402081795LL)) ? (((/* implicit */unsigned long long int) 2232102203U)) : (var_13)))))));
                            var_71 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_0 + 1] [i_0 + 1] [i_28] [i_0 + 1] [i_29] [i_0])) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_42 [i_27] [i_28] [i_29] [i_31])), ((unsigned char)0))))))) ? (((/* implicit */int) min((arr_23 [i_0 - 1] [i_0] [i_0 + 1] [i_27]), (arr_23 [i_29] [i_29 - 1] [i_29 - 2] [i_27])))) : (max((-706995942), (((/* implicit */int) arr_66 [i_0] [i_0] [i_0 - 1] [i_0 - 1]))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_32 = 0; i_32 < 11; i_32 += 3) /* same iter space */
                        {
                            var_72 = ((/* implicit */unsigned char) max((var_72), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_29] [i_29])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_16 [i_0] [(unsigned short)0] [(unsigned short)0] [i_0] [i_0] [i_0]))))))));
                            var_73 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (_Bool)1))))));
                            var_74 |= ((/* implicit */short) (+(((/* implicit */int) (unsigned short)44302))));
                        }
                        /* vectorizable */
                        for (unsigned short i_33 = 0; i_33 < 11; i_33 += 3) /* same iter space */
                        {
                            var_75 = ((/* implicit */int) (!(((/* implicit */_Bool) 2712265730U))));
                            var_76 = ((/* implicit */long long int) var_15);
                        }
                        var_77 = ((/* implicit */int) max((var_77), (((/* implicit */int) ((unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
    }
    var_78 -= ((/* implicit */long long int) (unsigned short)24292);
}
