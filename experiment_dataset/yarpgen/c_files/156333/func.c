/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156333
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
    var_15 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -954002106)) / (15049972423628799885ULL)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)200)) != (-954002106)))) : (982227747))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                arr_6 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0] [i_0]);
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    arr_10 [i_1] = ((unsigned char) 982227747);
                    /* LoopSeq 2 */
                    for (int i_4 = 1; i_4 < 18; i_4 += 1) 
                    {
                        var_16 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_2] [i_2] [i_4 + 2] [i_4] [i_4 - 1])))));
                        var_17 &= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_3 [i_4 + 1])) ? (((/* implicit */int) arr_3 [i_4 + 1])) : (((/* implicit */int) arr_3 [i_4 + 2]))))));
                    }
                    for (signed char i_5 = 3; i_5 < 21; i_5 += 1) 
                    {
                        var_18 -= arr_0 [i_0];
                        var_19 &= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)200))));
                    }
                }
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1]))))) & (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_2])) <= (((/* implicit */int) (unsigned char)98)))))));
            }
            /* LoopNest 3 */
            for (long long int i_6 = 2; i_6 < 21; i_6 += 1) 
            {
                for (signed char i_7 = 1; i_7 < 18; i_7 += 2) 
                {
                    for (unsigned char i_8 = 2; i_8 < 21; i_8 += 2) 
                    {
                        {
                            arr_25 [i_1] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0] [i_0]);
                            var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) -954002106)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3486931936U)) ? (17557621263825101723ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15958)))))) && (((/* implicit */_Bool) (short)22921))))) : (((/* implicit */int) (unsigned char)56))));
                            arr_26 [i_1] [i_1] [i_1] = ((/* implicit */int) arr_4 [i_0] [i_1] [i_6] [i_8 - 1]);
                            var_22 = ((/* implicit */_Bool) max((arr_23 [i_6] [i_6] [i_6 + 1] [i_6] [i_6 + 1]), (((/* implicit */short) ((unsigned char) (~(((/* implicit */int) (unsigned char)200))))))));
                            var_23 -= ((/* implicit */unsigned long long int) arr_22 [i_0] [i_6 - 1] [i_7 + 1] [i_7] [i_7]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_9 = 2; i_9 < 21; i_9 += 3) 
            {
                arr_29 [i_9] [i_9] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                /* LoopSeq 1 */
                for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    arr_33 [i_1] [i_0] [i_1] [i_9] [i_10] = ((/* implicit */long long int) (~((-(((/* implicit */int) (signed char)-4))))));
                    var_24 *= var_11;
                    arr_34 [i_0] [i_0] [i_1] [i_0] [i_10] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 808035365U))));
                }
            }
            var_25 ^= max(((+(arr_28 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)178)) < (((/* implicit */int) (unsigned char)79))))));
            var_26 = (-(((int) ((((/* implicit */_Bool) (unsigned char)117)) ? (889122809884449893ULL) : (((/* implicit */unsigned long long int) -982227748))))));
        }
        var_27 ^= max((((/* implicit */int) (unsigned char)11)), (1614314499));
    }
    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned char) var_11))) : (((/* implicit */int) arr_5 [i_11] [(unsigned char)12] [i_11])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)2953)))))));
        /* LoopSeq 1 */
        for (unsigned int i_12 = 0; i_12 < 22; i_12 += 1) 
        {
            arr_40 [i_11] [i_12] = ((/* implicit */short) ((unsigned int) (~(arr_24 [i_11] [i_11] [i_11] [i_12] [i_12] [i_12]))));
            /* LoopSeq 1 */
            for (unsigned int i_13 = 2; i_13 < 20; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    for (int i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) (_Bool)1);
                            arr_48 [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)70))))))) ? (min((max((((/* implicit */int) arr_27 [i_13])), (arr_21 [i_11] [i_12] [i_13] [i_14] [i_15]))), (((/* implicit */int) ((((/* implicit */int) var_4)) >= (-1173710524)))))) : (((/* implicit */int) ((signed char) var_4)))));
                            var_30 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_13 + 2] [i_13 - 1] [i_13] [i_13]))));
                        }
                    } 
                } 
                arr_49 [i_12] [i_12] [i_12] = (unsigned char)227;
                arr_50 [i_12] [i_12] = ((/* implicit */unsigned short) min((((((((/* implicit */int) arr_23 [i_11] [i_11] [i_12] [i_12] [i_13 - 2])) + (2147483647))) >> (((((/* implicit */int) (_Bool)1)) << (((arr_47 [i_11] [i_11] [i_11] [i_11] [i_11]) + (396524657))))))), (((/* implicit */int) ((signed char) (+(3486931930U)))))));
            }
            /* LoopSeq 4 */
            for (unsigned long long int i_16 = 3; i_16 < 20; i_16 += 3) /* same iter space */
            {
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */unsigned long long int) arr_37 [i_11] [i_12] [i_11])) - (6545140469392670935ULL))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_22 [i_16 + 2] [i_12] [i_16] [i_11] [i_16 - 1]))))) : (((/* implicit */int) ((short) arr_5 [i_16 - 3] [i_12] [i_11])))));
                arr_53 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) - (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_11 [i_11] [i_11] [i_12])), (arr_7 [i_11] [i_12] [i_16] [i_16])))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_30 [i_16] [i_16 + 1] [i_16] [i_16] [i_16 + 2]))))));
            }
            for (unsigned long long int i_17 = 3; i_17 < 20; i_17 += 3) /* same iter space */
            {
                arr_57 [i_11] [i_12] [i_17] = ((/* implicit */long long int) ((signed char) max((arr_5 [i_11] [i_12] [i_17 - 1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)227))))))));
                /* LoopSeq 4 */
                for (int i_18 = 0; i_18 < 22; i_18 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_19 = 0; i_19 < 22; i_19 += 1) 
                    {
                        arr_62 [i_11] [i_12] [i_12] [i_17] [i_17] [i_12] [i_17] = ((/* implicit */int) ((min((min((((/* implicit */unsigned int) 954002106)), (var_0))), (((/* implicit */unsigned int) arr_12 [i_11] [i_11] [i_17] [i_18] [i_19])))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) -982227747))))));
                        arr_63 [i_11] [i_18] [i_12] = ((/* implicit */signed char) max((((int) var_9)), ((+(((/* implicit */int) arr_8 [i_17 - 3] [i_17 - 1] [i_17 + 2]))))));
                    }
                    arr_64 [i_17] [i_12] [i_11] = ((/* implicit */unsigned char) ((int) min((((/* implicit */unsigned int) min((-107900322), (((/* implicit */int) var_13))))), (((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) : (3486931942U))))));
                }
                for (int i_20 = 0; i_20 < 22; i_20 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_21 = 0; i_21 < 22; i_21 += 4) 
                    {
                        arr_70 [i_12] = ((/* implicit */unsigned int) ((int) (~(-982227748))));
                        var_32 = ((/* implicit */int) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_11] [i_11] [i_11] [i_11] [i_11]))))) != (((/* implicit */int) var_10)))) ? (((/* implicit */long long int) max((((/* implicit */int) var_8)), (arr_47 [i_17 + 2] [i_17 + 2] [i_17 - 1] [i_20] [i_12])))) : ((+(min((4990642644618252382LL), (((/* implicit */long long int) (unsigned char)176))))))));
                        var_33 = min((((/* implicit */unsigned int) (signed char)14)), ((-(max((((/* implicit */unsigned int) (unsigned char)78)), (4052069857U))))));
                    }
                    var_34 = ((/* implicit */_Bool) min((((var_1) >> (((((/* implicit */int) arr_65 [i_17 + 2] [i_17] [i_17 - 2] [i_17 + 1] [i_17 - 3])) - (104))))), (((/* implicit */unsigned int) ((unsigned short) var_0)))));
                    arr_71 [i_12] [i_17 + 1] = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) (unsigned char)186)), (((((/* implicit */_Bool) (unsigned char)110)) ? (15875758593006908555ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81)))))))));
                    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) arr_69 [i_11] [i_20] [i_20] [i_11] [i_11] [i_20] [i_11]))));
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 954002106)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((int) arr_2 [i_11] [i_11] [i_11]))))) : ((~(6545140469392670918ULL)))));
                }
                /* vectorizable */
                for (unsigned long long int i_22 = 0; i_22 < 22; i_22 += 2) 
                {
                    var_37 += ((/* implicit */unsigned long long int) arr_30 [i_22] [i_22] [i_17] [i_12] [i_11]);
                    arr_75 [i_11] [i_11] [i_11] [i_11] [i_12] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_14))))));
                    var_38 = ((/* implicit */int) var_8);
                    arr_76 [i_17] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) (short)20380)) : (1333704524)));
                }
                /* vectorizable */
                for (long long int i_23 = 0; i_23 < 22; i_23 += 1) 
                {
                    arr_80 [i_11] [i_12] [i_17] [i_17] [i_23] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_12] [i_12] [i_12] [i_12])) <= (((/* implicit */int) (unsigned char)66))));
                    arr_81 [i_12] [i_17] [i_12] [i_12] = ((/* implicit */signed char) ((int) (+(6545140469392670935ULL))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_24 = 2; i_24 < 18; i_24 += 1) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_1 [i_17 - 3] [i_17 - 1]), (arr_1 [i_17 - 3] [i_17 + 1]))))));
                    /* LoopSeq 3 */
                    for (signed char i_25 = 2; i_25 < 20; i_25 += 3) 
                    {
                        arr_88 [i_12] = ((/* implicit */short) ((unsigned long long int) min((2570985480702643052ULL), (((/* implicit */unsigned long long int) (unsigned char)9)))));
                        arr_89 [i_11] [i_12] [i_17] [i_12] [i_24] [i_25 + 2] [i_25] = ((/* implicit */_Bool) min((((/* implicit */long long int) min(((unsigned char)176), (((/* implicit */unsigned char) (_Bool)0))))), (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_27 [i_24])), (var_8))))) & (var_5)))));
                        var_40 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_1)))) || (((/* implicit */_Bool) (+(((/* implicit */int) (short)-11414)))))));
                    }
                    for (unsigned long long int i_26 = 0; i_26 < 22; i_26 += 2) 
                    {
                        var_41 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_32 [i_26] [i_24] [i_24 - 1] [i_24 - 2])))));
                        arr_92 [i_26] [i_26] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -4990642644618252383LL)) : (15875758593006908555ULL)))) ? (((/* implicit */int) min((var_6), (arr_82 [i_26] [i_24] [i_17] [i_12] [i_11])))) : (((/* implicit */int) var_4))))) & ((~(10719340544965110516ULL)))));
                    }
                    /* vectorizable */
                    for (signed char i_27 = 0; i_27 < 22; i_27 += 2) 
                    {
                        var_42 = ((arr_61 [i_12] [i_17] [i_12]) ? (((/* implicit */int) arr_61 [i_12] [i_24] [i_27])) : (((/* implicit */int) arr_59 [i_11] [i_12] [i_17] [i_24] [i_27])));
                        var_43 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_21 [i_11] [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */long long int) 1778124720)) : (var_5)))));
                    }
                }
                for (unsigned char i_28 = 2; i_28 < 18; i_28 += 1) /* same iter space */
                {
                    var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((((long long int) var_0)) * (((/* implicit */long long int) (+(((/* implicit */int) arr_51 [i_17 - 3] [i_17 - 1] [4ULL] [i_17 + 2]))))))))));
                    arr_98 [i_12] [i_12] [i_17] [i_28] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((signed char) var_9))), (11901603604316880677ULL))), ((+(((unsigned long long int) 18431853296968700283ULL))))));
                }
                arr_99 [i_12] [i_12] = ((/* implicit */unsigned short) ((((int) (~(-954002106)))) | ((+(((/* implicit */int) arr_5 [i_17 + 2] [i_12] [i_17]))))));
            }
            for (unsigned long long int i_29 = 3; i_29 < 20; i_29 += 3) /* same iter space */
            {
                var_45 ^= ((unsigned long long int) (+(arr_28 [i_29] [i_29 - 1] [i_29 - 2] [i_29])));
                arr_102 [i_12] = max((((/* implicit */int) (!(((((/* implicit */int) var_4)) > (((/* implicit */int) (short)31738))))))), (((int) arr_20 [i_29 + 1] [i_12] [i_12] [i_11])));
                var_46 -= ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) var_7)))));
            }
            /* vectorizable */
            for (unsigned int i_30 = 0; i_30 < 22; i_30 += 2) 
            {
                arr_105 [i_11] [i_12] [i_11] = ((/* implicit */signed char) (+(arr_24 [i_30] [i_11] [i_12] [i_12] [i_12] [i_11])));
                /* LoopSeq 1 */
                for (unsigned int i_31 = 0; i_31 < 22; i_31 += 1) 
                {
                    arr_108 [i_11] [i_12] [i_12] [i_31] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_11] [i_12] [i_30] [i_31]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_32 = 1; i_32 < 20; i_32 += 4) 
                    {
                        arr_111 [i_11] [i_12] [i_30] [i_12] [i_32] [i_32 - 1] = ((/* implicit */unsigned long long int) ((unsigned char) arr_106 [i_12] [i_32] [i_32] [i_32 + 1] [i_12]));
                        var_47 = ((/* implicit */int) var_12);
                        arr_112 [i_12] [i_12] [i_30] [i_31] [i_32] = ((/* implicit */_Bool) ((unsigned char) (-(arr_79 [i_11] [i_12] [i_12] [i_31] [i_32]))));
                        var_48 *= ((/* implicit */unsigned char) (+(arr_85 [i_32] [i_32] [i_32 + 2] [i_32 + 1] [i_32])));
                    }
                    var_49 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16881259811819759495ULL)) ? (((((/* implicit */_Bool) (unsigned char)40)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_67 [i_11] [i_12] [i_30]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */unsigned int) -734613088)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_33 = 0; i_33 < 22; i_33 += 1) 
                    {
                        arr_117 [i_11] [i_12] [i_30] [i_12] [i_33] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_9 [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_9 [i_11] [i_33] [i_30]))));
                        arr_118 [i_12] [i_12] = ((/* implicit */unsigned char) (!((_Bool)1)));
                    }
                    var_50 += ((/* implicit */unsigned int) ((arr_14 [i_11] [i_11] [i_30]) % (arr_14 [i_11] [i_11] [i_30])));
                }
                var_51 = ((/* implicit */int) min((var_51), ((+(((/* implicit */int) arr_56 [i_12] [i_12] [i_12]))))));
                arr_119 [i_30] [i_12] [i_12] [i_11] = ((/* implicit */unsigned char) (_Bool)0);
                arr_120 [i_30] [i_30] [i_30] [i_11] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_52 [i_11] [i_12] [i_30])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2088834009U)));
            }
            arr_121 [i_12] = ((/* implicit */int) min((3338997187U), (((/* implicit */unsigned int) ((signed char) max((arr_115 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]), (((/* implicit */unsigned char) (signed char)96))))))));
        }
    }
    var_52 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((unsigned short) (short)11116))) ? (max((((/* implicit */unsigned long long int) (unsigned char)22)), (16925705237461236145ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
    var_53 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((((15875758593006908562ULL) + (3011943107732419698ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
}
