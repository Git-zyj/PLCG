/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164993
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) (~(((min(((_Bool)1), ((_Bool)0))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_1 [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22496)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            arr_9 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)44066))));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                arr_13 [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) : (arr_7 [i_1] [i_2] [i_3])));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned short)1536))))));
                            arr_20 [i_5] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_14 [i_1] [i_2] [i_1] [i_4] [i_5])) : (((((/* implicit */int) (unsigned char)240)) % (((/* implicit */int) (_Bool)1)))))))));
                            arr_21 [i_1] [i_2] [i_1] [i_2] [i_3] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_1] [i_1] [i_3] [i_5] [i_3] [i_1] [i_5]))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) arr_6 [i_4]))))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_5] [i_5] [i_3] [i_3] [i_5])) < (((/* implicit */int) arr_14 [i_1] [i_2] [i_3] [i_4] [i_5]))));
                        }
                    } 
                } 
                var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1263720116U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7048))) : (2036795838U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1]))) : (8796093022207ULL)));
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                {
                    arr_24 [i_1] [i_2] [i_2] [i_2] [i_6] = ((/* implicit */unsigned short) (~(arr_23 [i_1] [i_2] [i_2] [i_6] [i_6])));
                    arr_25 [i_1] [i_1] [i_3] [i_1] = ((((/* implicit */_Bool) var_5)) ? (arr_7 [i_1] [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30885))));
                    arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] = ((9018020378053261928ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_6] [i_6] [i_1] [i_6]))));
                }
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_8 = 1; i_8 < 14; i_8 += 3) 
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), ((signed char)24)));
                        var_21 ^= ((/* implicit */unsigned short) (~((+(((/* implicit */int) (signed char)0))))));
                        var_22 = ((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_7]));
                        arr_31 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) arr_29 [i_3] [i_3] [i_3] [i_7] [i_3] [i_3] [i_3]);
                    }
                    for (unsigned int i_9 = 3; i_9 < 16; i_9 += 3) 
                    {
                        var_23 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_17 [i_3] [i_9 - 3] [i_9]));
                        arr_34 [i_1] [i_9] [i_9] [i_1] = ((((/* implicit */int) arr_33 [i_9 - 1] [i_9 + 1] [i_9] [i_9])) % (((/* implicit */int) arr_33 [i_9] [i_9 - 1] [i_9] [i_9 - 1])));
                    }
                    for (signed char i_10 = 1; i_10 < 16; i_10 += 2) 
                    {
                        var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62127))) + (4064648486U)));
                        arr_37 [i_1] [i_2] [i_7] [i_7] [i_10 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) -2225605509258362368LL)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) & (18446744073709551608ULL))))));
                    }
                    arr_38 [i_1] [i_2] [i_2] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9018020378053261928ULL)) && (((/* implicit */_Bool) var_13))));
                }
            }
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_25 ^= ((/* implicit */long long int) (_Bool)1);
                var_26 |= ((((/* implicit */_Bool) 1130411384U)) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1] [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((arr_18 [i_1] [i_1] [i_1] [i_2] [i_2] [i_11] [i_11]) ? ((+(-2466340936168767483LL))) : (((/* implicit */long long int) arr_15 [i_1] [i_2])))))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 1; i_12 < 17; i_12 += 1) 
                {
                    for (signed char i_13 = 1; i_13 < 14; i_13 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) arr_19 [i_1] [i_1] [i_1] [i_12] [i_13]);
                            arr_46 [i_11] = ((/* implicit */unsigned char) ((unsigned int) (unsigned char)196));
                            arr_47 [i_1] [i_11] [i_1] [i_11] [i_11] [i_1] = ((/* implicit */long long int) (((!((_Bool)1))) ? (arr_15 [i_13 + 3] [i_13 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_29 *= arr_15 [i_12] [i_2];
                            var_30 = arr_32 [i_13 + 3] [i_2];
                        }
                    } 
                } 
                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_1]))) : (arr_8 [i_2]))))));
            }
            var_32 = ((/* implicit */signed char) ((-2466340936168767465LL) > (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))));
        }
        for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_15 = 0; i_15 < 18; i_15 += 1) 
            {
                for (short i_16 = 0; i_16 < 18; i_16 += 2) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_33 -= ((/* implicit */long long int) (short)126);
                            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (-(-2225605509258362368LL)))) && (((/* implicit */_Bool) ((((12410295564232053977ULL) / (((/* implicit */unsigned long long int) 900497995U)))) << (((min((((/* implicit */unsigned int) (unsigned char)255)), (849050736U))) - (195U))))))));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)76)) - (((/* implicit */int) (_Bool)1))))))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) & (min((arr_4 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_23 [i_1] [i_14] [i_14] [i_1] [i_1]))))))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_18 = 0; i_18 < 18; i_18 += 2) 
        {
            for (unsigned long long int i_19 = 0; i_19 < 18; i_19 += 4) 
            {
                {
                    var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1719068477)))))) & (max((arr_4 [i_1] [i_1]), (((/* implicit */unsigned long long int) ((var_3) != (((/* implicit */int) (short)-22487))))))))))));
                    arr_64 [i_1] [i_18] [i_19] |= ((/* implicit */signed char) (+((-(((/* implicit */int) (unsigned char)1))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_21 = 0; i_21 < 10; i_21 += 4) 
        {
            arr_69 [i_20] = ((/* implicit */unsigned long long int) (_Bool)1);
            var_37 = ((/* implicit */int) min(((short)-12228), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)0)))))));
        }
        for (int i_22 = 0; i_22 < 10; i_22 += 1) /* same iter space */
        {
            arr_72 [i_20] [i_20] [2U] |= ((((((/* implicit */_Bool) (~(4133106984U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_22] [i_20] [i_20] [i_20] [i_20])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65533))))) : (((var_6) | (var_1))))) <= (((min((var_9), (((/* implicit */unsigned long long int) var_12)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-12243)))))))));
            /* LoopNest 2 */
            for (signed char i_23 = 0; i_23 < 10; i_23 += 3) 
            {
                for (signed char i_24 = 0; i_24 < 10; i_24 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_25 = 0; i_25 < 10; i_25 += 3) 
                        {
                            var_38 = ((/* implicit */short) ((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)248)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))));
                            var_39 = ((/* implicit */unsigned int) var_8);
                            var_40 -= ((/* implicit */_Bool) ((((arr_12 [i_22] [i_22] [i_22] [i_22]) | (arr_12 [i_20] [i_20] [i_24] [i_20]))) ^ (((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))) ^ ((~(((/* implicit */int) (signed char)-1)))))))));
                            var_41 |= ((/* implicit */signed char) (!(((((-1439959171) % (((/* implicit */int) (_Bool)1)))) < (((int) (_Bool)1))))));
                            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) arr_3 [i_20]))));
                        }
                        var_43 = ((/* implicit */unsigned int) (((((+(var_5))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)9))))))) && (((/* implicit */_Bool) arr_3 [i_20]))));
                        /* LoopSeq 1 */
                        for (int i_26 = 0; i_26 < 10; i_26 += 4) 
                        {
                            var_44 -= ((/* implicit */signed char) var_2);
                            var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-90)) - (((/* implicit */int) arr_36 [i_23]))))) ? (((2525646778112321736LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_20] [i_22] [i_23] [i_23] [i_24] [i_26])) ? (((/* implicit */int) arr_22 [i_20] [i_20] [i_26] [i_26] [i_20] [i_23])) : (((/* implicit */int) arr_36 [i_20])))))));
                        }
                        var_46 = ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / ((-(2096212149U))))) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
        for (int i_27 = 0; i_27 < 10; i_27 += 1) /* same iter space */
        {
            arr_83 [i_20] [i_20] [i_27] = ((/* implicit */_Bool) ((arr_79 [i_20] [i_27] [i_20] [i_20] [8LL] [i_27]) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_12 [i_20] [i_27] [i_20] [i_27])))));
            /* LoopNest 3 */
            for (unsigned int i_28 = 0; i_28 < 10; i_28 += 4) 
            {
                for (signed char i_29 = 0; i_29 < 10; i_29 += 4) 
                {
                    for (unsigned int i_30 = 3; i_30 < 9; i_30 += 3) 
                    {
                        {
                            arr_90 [i_20] [i_27] [i_28] [i_28] [i_28] [i_27] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_63 [i_20] [i_20])))))));
                            var_47 *= ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) (+(12611881383742528695ULL)))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (int i_31 = 0; i_31 < 10; i_31 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (short i_32 = 4; i_32 < 9; i_32 += 4) 
            {
                var_48 &= ((/* implicit */long long int) var_4);
                arr_96 [i_31] [i_31] [i_31] [i_31] = ((((/* implicit */unsigned long long int) arr_79 [i_32 - 2] [i_31] [i_32] [i_32 - 1] [i_31] [i_32 - 1])) < ((-(var_9))));
                /* LoopNest 2 */
                for (signed char i_33 = 0; i_33 < 10; i_33 += 3) 
                {
                    for (long long int i_34 = 0; i_34 < 10; i_34 += 4) 
                    {
                        {
                            arr_102 [i_33] [i_33] [i_33] [i_31] = var_5;
                            arr_103 [i_34] [i_34] [i_31] [i_32 - 3] [i_34] [i_31] = ((/* implicit */long long int) (_Bool)1);
                            var_49 -= ((/* implicit */unsigned long long int) (-(-1414473212)));
                            arr_104 [i_20] [i_20] [i_31] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (1512996853) : (((/* implicit */int) (signed char)83))))) : (arr_29 [i_20] [i_31] [i_20] [i_20] [i_31] [i_33] [i_31])));
                        }
                    } 
                } 
                var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) ((((/* implicit */_Bool) -1906511643)) ? (4771135708508200397ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)41))))))));
            }
            for (unsigned int i_35 = 0; i_35 < 10; i_35 += 2) 
            {
                var_51 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_35] [i_31] [i_35] [i_35] [i_35] [i_20])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)210)))));
                var_52 |= ((/* implicit */long long int) ((var_1) + (var_1)));
            }
            for (signed char i_36 = 0; i_36 < 10; i_36 += 2) 
            {
                var_53 = ((/* implicit */signed char) ((arr_53 [i_20] [i_20] [i_20] [i_20] [i_20]) + (arr_53 [i_20] [i_20] [i_20] [i_20] [i_20])));
                var_54 &= ((/* implicit */int) ((arr_75 [i_20] [i_36] [i_36] [i_20]) & (((/* implicit */unsigned long long int) 4294967295U))));
            }
            for (unsigned char i_37 = 1; i_37 < 9; i_37 += 4) 
            {
                arr_114 [i_20] [i_31] = ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (unsigned short)50848)) : (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                var_55 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
            }
            var_56 = ((/* implicit */int) ((((/* implicit */_Bool) -1512996854)) ? (((/* implicit */long long int) ((/* implicit */int) arr_92 [i_20]))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-6516027166331327031LL)))));
            /* LoopNest 2 */
            for (short i_38 = 0; i_38 < 10; i_38 += 2) 
            {
                for (long long int i_39 = 0; i_39 < 10; i_39 += 2) 
                {
                    {
                        var_57 ^= ((/* implicit */unsigned char) (-(9516555487482956171ULL)));
                        var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)50867)) ? (((/* implicit */int) (unsigned short)32660)) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (signed char i_40 = 0; i_40 < 10; i_40 += 3) /* same iter space */
        {
            var_59 = ((/* implicit */signed char) max((16170137235033362254ULL), (((((/* implicit */_Bool) arr_111 [i_20] [i_20] [i_40] [0LL])) ? (((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */unsigned long long int) max((-1512996837), (((/* implicit */int) arr_10 [i_20] [i_20])))))))));
            /* LoopNest 3 */
            for (unsigned char i_41 = 1; i_41 < 9; i_41 += 3) 
            {
                for (_Bool i_42 = 0; i_42 < 1; i_42 += 1) 
                {
                    for (unsigned char i_43 = 1; i_43 < 8; i_43 += 3) 
                    {
                        {
                            var_60 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_35 [i_20])) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) arr_35 [i_41]))))));
                            var_61 += ((/* implicit */_Bool) (((-(((/* implicit */int) arr_76 [i_41 - 1] [i_41 - 1] [8] [i_43 - 1])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) -6501457858707310603LL)))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_44 = 0; i_44 < 10; i_44 += 3) /* same iter space */
        {
            arr_133 [i_44] [i_44] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_20] [i_44] [i_44]))) * (min((((/* implicit */unsigned long long int) 0U)), (15854809545493274252ULL)))))) ? ((((_Bool)1) ? (min((arr_52 [i_20] [i_44]), (((/* implicit */int) arr_88 [i_20] [i_20] [i_20] [i_20] [i_20])))) : ((~(((/* implicit */int) (_Bool)1)))))) : (((-1512996837) * (((/* implicit */int) (_Bool)1))))));
            arr_134 [i_44] = ((/* implicit */signed char) 1512996852);
            var_62 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_122 [i_20])) ? (((/* implicit */int) arr_122 [i_44])) : (((/* implicit */int) arr_10 [i_20] [i_20]))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_110 [8ULL] [8ULL])), (arr_32 [i_20] [i_20]))))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_45 = 0; i_45 < 10; i_45 += 4) 
        {
            for (int i_46 = 0; i_46 < 10; i_46 += 3) 
            {
                for (unsigned long long int i_47 = 0; i_47 < 10; i_47 += 4) 
                {
                    {
                        var_63 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)29147)) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) (unsigned short)32660)))) * (((((/* implicit */int) (unsigned short)32660)) & (((/* implicit */int) arr_120 [i_20] [i_45] [i_20] [i_20] [i_20]))))));
                        arr_144 [i_20] [i_45] [i_46] [i_46] &= ((/* implicit */unsigned char) ((16170137235033362254ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12)))));
                    }
                } 
            } 
        } 
        var_64 |= max((min((((/* implicit */long long int) arr_113 [(unsigned char)0] [i_20] [i_20] [i_20])), (var_13))), (((/* implicit */long long int) (~(arr_113 [(signed char)0] [i_20] [(signed char)0] [i_20])))));
    }
    /* vectorizable */
    for (unsigned long long int i_48 = 0; i_48 < 10; i_48 += 3) /* same iter space */
    {
        var_65 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6642457752663241532LL)) || ((!(((/* implicit */_Bool) arr_116 [i_48] [i_48] [6LL]))))));
        arr_149 [i_48] = ((/* implicit */signed char) var_7);
        arr_150 [i_48] [i_48] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_48] [i_48] [i_48])) ? (arr_7 [i_48] [i_48] [i_48]) : (arr_7 [i_48] [i_48] [i_48])));
        /* LoopNest 3 */
        for (unsigned short i_49 = 2; i_49 < 6; i_49 += 4) 
        {
            for (unsigned long long int i_50 = 0; i_50 < 10; i_50 += 2) 
            {
                for (unsigned char i_51 = 0; i_51 < 10; i_51 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_52 = 0; i_52 < 10; i_52 += 2) 
                        {
                            var_66 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 1241600656))) ? (((/* implicit */int) (signed char)2)) : ((~(((/* implicit */int) (short)7168))))));
                            var_67 = (!(((/* implicit */_Bool) arr_54 [i_49] [i_49 + 4] [i_49 + 4] [i_49 + 2] [i_49])));
                            var_68 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_19 [i_49 + 1] [i_49 + 4] [i_49] [i_49 + 2] [i_49 + 3])) : (((/* implicit */int) arr_19 [i_49 + 1] [i_49 + 2] [i_49 - 1] [i_49 + 1] [i_49 + 2]))));
                            var_69 -= ((/* implicit */signed char) arr_111 [i_51] [i_49 + 4] [i_49 - 2] [i_51]);
                            arr_160 [i_48] [i_49 + 2] [i_50] [i_51] [i_51] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (_Bool)1))))));
                        }
                        for (short i_53 = 0; i_53 < 10; i_53 += 2) 
                        {
                            var_70 |= ((/* implicit */short) ((((/* implicit */int) arr_22 [i_49] [i_49 + 2] [i_49] [i_49 + 4] [i_49 + 3] [i_49 + 4])) - (((/* implicit */int) (unsigned short)32674))));
                            var_71 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)97)) << (((2051802202521823660ULL) - (2051802202521823642ULL)))));
                            arr_163 [i_48] [i_48] [i_48] [i_49] [i_48] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -807174663)) ? (16394941871187727961ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12)))))) ? (((((/* implicit */int) arr_131 [i_51])) << (((-7490891002630989156LL) + (7490891002630989158LL))))) : (((((/* implicit */int) var_7)) * (((/* implicit */int) arr_137 [i_48] [i_48]))))));
                        }
                        for (signed char i_54 = 0; i_54 < 10; i_54 += 4) 
                        {
                            arr_168 [i_49] [i_49] [i_49] [i_54] = (((_Bool)1) ? ((+(var_0))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))));
                            arr_169 [i_48] [i_51] [i_50] [i_48] [i_48] = ((/* implicit */int) ((var_1) + (arr_107 [i_49 + 3])));
                            var_72 = ((/* implicit */unsigned short) max((var_72), (((/* implicit */unsigned short) (-(0LL))))));
                        }
                        var_73 += ((/* implicit */_Bool) ((unsigned short) 0ULL));
                    }
                } 
            } 
        } 
    }
    var_74 -= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) -1512996854)) / (var_8))) | (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)40163)) : (((/* implicit */int) var_2)))))));
    var_75 = ((/* implicit */short) (~(var_13)));
}
