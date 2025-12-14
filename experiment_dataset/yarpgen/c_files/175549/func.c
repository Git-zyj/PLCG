/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175549
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
    var_12 -= ((/* implicit */_Bool) var_1);
    var_13 = ((/* implicit */unsigned char) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) / (var_0))), (((/* implicit */unsigned long long int) var_10)))), (var_0)));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((var_0), (((/* implicit */unsigned long long int) (unsigned char)251))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)254)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) : ((((!(((/* implicit */_Bool) 2147475456)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (1152921496016912384ULL)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [(unsigned short)6] [i_2] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 9218868437227405312LL))));
                    arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) + (((/* implicit */int) var_8))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) (unsigned char)255)) - (250)))));
                    var_16 = ((((/* implicit */long long int) ((/* implicit */int) var_11))) | (743635890077608560LL));
                    arr_9 [3] [i_0] [i_0] [i_0] = arr_2 [i_0];
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */signed char) ((long long int) arr_1 [i_0]));
        arr_11 [i_0] = ((/* implicit */unsigned int) ((var_6) + (4859436222314872743LL)));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [(signed char)2] [i_0])) : (arr_2 [i_0])));
        var_18 ^= ((/* implicit */unsigned char) var_1);
    }
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((int) (!(((((/* implicit */int) (unsigned char)13)) != (((/* implicit */int) arr_13 [i_3] [0ULL]))))))))));
            arr_17 [i_4] [(signed char)9] = ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */int) ((unsigned char) var_8))), (((((/* implicit */int) arr_15 [i_3] [i_3])) | (((/* implicit */int) var_4)))))));
        }
        for (short i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
        {
            var_20 = (-(((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5]))) | (2376842286944200193LL))));
            var_21 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)244)), ((+(((/* implicit */int) (unsigned char)246))))));
        }
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((/* implicit */long long int) ((signed char) arr_22 [i_3] [i_6] [i_7]))), (((arr_22 [i_3] [i_6] [i_7]) - (arr_22 [i_3] [i_6] [i_8]))))))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_8))));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        var_24 -= ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((/* implicit */int) ((arr_28 [i_9]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))))))) | (((arr_14 [i_3] [i_9]) % (((/* implicit */long long int) ((/* implicit */int) (signed char)32)))))))));
                        arr_29 [i_8] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_9] [i_8] [i_7] [i_6])) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 12839555644168627987ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)65529)))))))) || (((((/* implicit */int) var_4)) != (((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) (signed char)21)) : (-107041866)))))));
                        var_25 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((/* implicit */short) (signed char)14)), ((short)-6810)))), (max((-5608893163029301831LL), (arr_22 [i_3] [i_3] [12LL])))));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (unsigned char)255))));
                    }
                }
                for (signed char i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) min((((((/* implicit */int) ((signed char) arr_22 [(unsigned short)4] [i_6] [i_3]))) & (((/* implicit */int) ((((/* implicit */_Bool) 17361956028752210427ULL)) && (((/* implicit */_Bool) 1102185786U))))))), (((/* implicit */int) arr_31 [i_3] [i_6] [(_Bool)1] [i_10])))))));
                    var_28 = ((/* implicit */unsigned long long int) (-(1102185802U)));
                }
                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_3] [i_6] [i_6] [i_3])) ? (((/* implicit */unsigned long long int) (+(max((6LL), (((/* implicit */long long int) (unsigned char)255))))))) : (11990935768975052323ULL))))));
            }
            /* vectorizable */
            for (long long int i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 17; i_12 += 4) 
                {
                    for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        {
                            var_30 = (_Bool)1;
                            var_31 = ((/* implicit */short) ((unsigned short) (+(-407202023))));
                            arr_41 [i_3] [i_6] [i_3] [i_3] [i_13] = ((/* implicit */int) ((signed char) ((short) arr_28 [i_12])));
                            var_32 ^= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (unsigned short)37727)) | (((/* implicit */int) (unsigned char)34)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 1; i_14 < 14; i_14 += 4) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 3) 
                    {
                        {
                            arr_48 [i_3] [i_14] = ((((/* implicit */int) ((unsigned char) var_9))) == (((((/* implicit */int) (signed char)56)) | (((/* implicit */int) var_9)))));
                            arr_49 [i_3] [i_6] [i_11] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) arr_39 [i_3] [0LL] [i_11] [i_3] [(signed char)13] [i_14 - 1])) ^ (((/* implicit */int) (unsigned char)21))));
                            var_33 = ((/* implicit */unsigned char) var_1);
                        }
                    } 
                } 
                var_34 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)28672)) >= (((/* implicit */int) (unsigned char)17))));
                arr_50 [i_11] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)1503))));
            }
            for (signed char i_16 = 0; i_16 < 17; i_16 += 3) 
            {
                var_35 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_15 [i_3] [i_6])) ? (((/* implicit */unsigned long long int) 4294967282U)) : (var_0))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-92))))));
                var_36 = ((/* implicit */int) max((var_36), ((+(((/* implicit */int) (!(((/* implicit */_Bool) -9218868437227405297LL)))))))));
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 17; i_17 += 4) 
                {
                    for (signed char i_18 = 0; i_18 < 17; i_18 += 3) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (short)-6825))) << ((((~(((((/* implicit */int) (signed char)102)) << (((((/* implicit */int) (signed char)-56)) + (62))))))) + (6533)))));
                            var_38 = ((/* implicit */_Bool) max((var_38), ((_Bool)1)));
                            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_45 [i_16] [i_17] [i_18])) & (((/* implicit */int) arr_45 [i_6] [i_6] [i_18])))) - ((-(arr_52 [i_3]))))))));
                            var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) 4477805979770757341ULL))));
                        }
                    } 
                } 
            }
            var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) ((((int) ((var_6) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47)))))) | (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (short)0))))) != (min((((/* implicit */long long int) -897770599)), (-186222645774466636LL)))))))))));
        }
        for (int i_19 = 0; i_19 < 17; i_19 += 1) 
        {
            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) 11ULL))));
            arr_62 [i_19] [i_19] [i_19] = ((/* implicit */int) (-(((long long int) arr_33 [i_3] [i_19] [i_19]))));
        }
        for (unsigned long long int i_20 = 1; i_20 < 16; i_20 += 4) 
        {
            arr_65 [i_3] = ((/* implicit */signed char) min(((short)1), (((/* implicit */short) (unsigned char)0))));
            var_43 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_30 [i_20 + 1]), (((/* implicit */unsigned char) arr_42 [i_3] [i_20 + 1] [i_3] [i_3]))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)8)), (8857411745809796946ULL))))));
        }
        var_44 += ((/* implicit */unsigned short) (unsigned char)255);
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        var_45 = ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
        /* LoopSeq 2 */
        for (int i_22 = 0; i_22 < 25; i_22 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_23 = 0; i_23 < 25; i_23 += 3) 
            {
                for (unsigned char i_24 = 1; i_24 < 23; i_24 += 4) 
                {
                    {
                        var_46 ^= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((15020024358449105774ULL), (((/* implicit */unsigned long long int) (unsigned char)3))))) ? (((/* implicit */int) (unsigned short)49937)) : (((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (signed char)-17))))))));
                        arr_80 [i_21] [i_21] [i_23] [i_21] [i_23] [i_24] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) arr_70 [i_21])))));
                        var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-18)))))));
                        var_48 += ((/* implicit */_Bool) (+((+(((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) (unsigned char)3)))))))));
                    }
                } 
            } 
            var_49 = ((/* implicit */long long int) max((var_49), (((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))) & (arr_71 [i_22] [i_22])))) ? (((/* implicit */long long int) ((((/* implicit */int) ((var_6) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249)))))) | (max((-1081149156), (((/* implicit */int) (unsigned char)17))))))) : (min((((((/* implicit */long long int) ((/* implicit */int) arr_73 [i_21] [i_21] [i_21] [i_22]))) % (9223372036854775807LL))), (((/* implicit */long long int) (unsigned char)252))))))));
        }
        for (int i_25 = 0; i_25 < 25; i_25 += 3) 
        {
            var_50 *= ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) (signed char)58))))));
            var_51 = ((/* implicit */signed char) arr_66 [i_21]);
        }
        var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) (unsigned short)2))));
        var_53 = (+((-(((/* implicit */int) (signed char)-23)))));
        var_54 = ((/* implicit */unsigned long long int) (unsigned char)217);
    }
    /* LoopSeq 2 */
    for (unsigned short i_26 = 1; i_26 < 20; i_26 += 1) /* same iter space */
    {
        var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) ((((/* implicit */int) var_10)) | (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_83 [i_26] [i_26 + 2]))))))))));
        var_56 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_81 [i_26 + 2]) / (arr_81 [i_26 + 2])))) ? (((/* implicit */int) arr_67 [i_26] [21])) : (((-694404154) / (((/* implicit */int) (unsigned char)245))))));
    }
    for (unsigned short i_27 = 1; i_27 < 20; i_27 += 1) /* same iter space */
    {
        arr_88 [i_27] = ((/* implicit */long long int) (short)-28655);
        /* LoopSeq 1 */
        for (unsigned long long int i_28 = 0; i_28 < 22; i_28 += 2) 
        {
            var_57 ^= ((/* implicit */long long int) 1958780613446673205ULL);
            arr_91 [i_27] [8LL] [i_27] = 3;
            arr_92 [i_27] [i_27] = ((/* implicit */unsigned char) 6032862221167888916ULL);
        }
        arr_93 [i_27] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_75 [i_27 - 1] [i_27] [i_27] [i_27]))))))) * (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (var_5)))))))));
    }
}
