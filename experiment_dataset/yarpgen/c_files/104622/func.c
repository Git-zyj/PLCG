/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104622
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
    var_12 = ((/* implicit */int) min((var_12), ((~(((((/* implicit */_Bool) var_8)) ? (((int) var_2)) : (((/* implicit */int) ((_Bool) var_2)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) var_9)) << (((131071) - (131064))))) >> (((806325013U) - (806324991U)))));
        var_14 = ((/* implicit */long long int) ((262143) << (((((((/* implicit */int) (short)-30038)) + (30052))) - (10)))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_1])) != (-6399689928881466836LL)))) != (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (arr_3 [i_1])))));
        var_15 = ((/* implicit */long long int) min((var_15), (-5810392803549149413LL)));
    }
    for (int i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 1; i_4 < 21; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_4 + 2])), (arr_15 [i_2] [i_2] [i_2])))) ? ((~(var_0))) : (((/* implicit */int) (unsigned char)80))))), (((long long int) arr_12 [i_2])))))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((/* implicit */long long int) 683753554U)), (((((/* implicit */_Bool) ((signed char) var_5))) ? (var_4) : (((/* implicit */long long int) min((var_1), (-113954925)))))))))));
                        arr_16 [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) (((-(358093459U))) << (((/* implicit */int) min((var_11), ((unsigned char)255)))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_7 = 4; i_7 < 21; i_7 += 3) 
                {
                    arr_21 [i_7] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) 358093459U);
                    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (-8060019935516840406LL) : (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) arr_14 [i_7] [i_3] [i_7] [i_6 + 1] [i_3] [i_6 + 1])))))));
                    arr_22 [i_3] [i_3] [i_6] [i_3] [14LL] [i_6] = ((/* implicit */unsigned char) arr_4 [i_7] [i_7]);
                }
                for (int i_8 = 2; i_8 < 19; i_8 += 4) 
                {
                    arr_27 [i_2] [i_3] [i_3] [i_8] = ((/* implicit */unsigned char) (-(min((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_11))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 683753554U)) ? (var_4) : (((/* implicit */long long int) arr_10 [i_8 + 3] [i_3] [i_6 + 1] [12LL]))));
                        var_20 -= ((/* implicit */unsigned char) ((signed char) arr_10 [i_8] [i_3] [i_8] [i_8 + 3]));
                    }
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        var_21 = ((/* implicit */_Bool) max((((/* implicit */short) arr_31 [i_10] [i_2] [i_6] [i_3] [i_2])), (arr_8 [i_10] [i_2])));
                        var_22 = (signed char)-53;
                        var_23 = ((/* implicit */long long int) max((((/* implicit */int) ((signed char) 1023))), (((((/* implicit */_Bool) -2068124647)) ? (((/* implicit */int) var_9)) : (((int) var_11))))));
                        var_24 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_15 [i_6] [i_8] [i_10]), (((/* implicit */long long int) var_11)))))));
                    }
                }
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1145247257U)) ? (var_10) : (((/* implicit */int) arr_24 [i_6 + 1] [i_6] [i_6] [i_6]))))) ? ((+(15LL))) : (((long long int) arr_24 [i_6 + 1] [i_6] [i_6] [i_6])))))));
                var_26 = ((/* implicit */unsigned char) (unsigned short)38510);
                arr_34 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */int) max((arr_29 [i_6 + 1]), (((/* implicit */long long int) var_10))));
                var_27 = ((/* implicit */unsigned char) (signed char)-11);
            }
            for (signed char i_11 = 0; i_11 < 23; i_11 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_28 &= ((/* implicit */signed char) (+(((int) arr_11 [i_12] [i_3] [i_11] [i_3]))));
                    arr_39 [10LL] [i_3] [i_3] [i_3] [i_3] [i_2] = max((((/* implicit */signed char) (_Bool)1)), (arr_11 [i_2] [i_2] [i_2] [i_2]));
                }
                for (long long int i_13 = 0; i_13 < 23; i_13 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        arr_47 [i_2] [i_3] [i_11] [i_3] [i_11] = ((/* implicit */int) min((7653307305011443417LL), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_9)), ((signed char)-16))))) : (((long long int) var_10))))));
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) min((max((((/* implicit */int) arr_24 [i_2] [i_3] [i_2] [i_13])), (var_10))), (((/* implicit */int) ((unsigned short) (signed char)-17))))))));
                        arr_48 [i_2] [i_2] [i_2] [i_13] [i_14] [i_14] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) + ((((+(-5310724503703111439LL))) % (((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */long long int) var_0))))))));
                        arr_49 [i_2] [i_3] [i_11] [i_13] = ((_Bool) var_7);
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((unsigned short) (+(((long long int) arr_13 [i_11] [i_11]))))))));
                    }
                    for (unsigned int i_15 = 1; i_15 < 22; i_15 += 3) 
                    {
                        var_31 += ((/* implicit */unsigned int) var_11);
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_37 [i_3])), (max((arr_9 [i_3] [i_11]), (((/* implicit */unsigned int) var_1))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((int) var_6))) > (max((((/* implicit */long long int) (signed char)71)), (0LL)))))) : ((+(((/* implicit */int) var_9))))));
                    }
                    var_33 = min((((/* implicit */int) arr_37 [i_3])), (min((((((/* implicit */_Bool) 72057594037927935LL)) ? (-71487019) : (var_5))), (((/* implicit */int) arr_18 [10LL] [i_3] [i_11])))));
                }
                for (long long int i_16 = 0; i_16 < 23; i_16 += 3) /* same iter space */
                {
                    var_34 ^= ((/* implicit */int) ((((/* implicit */_Bool) 7155070235350835263LL)) ? (((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) 0LL))), (((((/* implicit */_Bool) 3149720021U)) ? (((/* implicit */int) (signed char)-1)) : (var_5)))))) : ((((_Bool)1) ? (7653307305011443417LL) : (((/* implicit */long long int) 1785356717U))))));
                    arr_54 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (-(arr_15 [i_2] [i_3] [i_3]))))) ? (arr_20 [i_2] [i_3] [i_3]) : (((((/* implicit */_Bool) min((((/* implicit */long long int) 3936873834U)), (7155070235350835263LL)))) ? (((/* implicit */long long int) arr_40 [i_3] [i_3] [i_11] [i_16])) : (var_4)))));
                    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */int) min((arr_8 [i_2] [i_11]), (arr_8 [i_11] [i_11])))) & (arr_30 [i_2]))))));
                }
                arr_55 [i_3] [i_3] [i_3] [i_11] = ((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) arr_32 [i_3] [i_2] [i_3] [i_11] [i_11] [i_11])))));
                /* LoopSeq 3 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_36 = ((/* implicit */unsigned int) var_9);
                    arr_58 [i_2] [i_3] [i_3] [i_17] = ((/* implicit */short) ((unsigned short) 358093462U));
                }
                for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) /* same iter space */
                {
                    var_37 = ((/* implicit */short) max((((/* implicit */unsigned int) (~((((_Bool)1) ? (var_2) : (((/* implicit */int) (unsigned char)66))))))), (((unsigned int) var_4))));
                    /* LoopSeq 1 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_2] [i_3] [i_18] [i_19])) ? (min((max((((/* implicit */long long int) arr_6 [i_2])), (arr_60 [i_19] [i_18] [i_3]))), (((/* implicit */long long int) max(((_Bool)0), (var_9)))))) : (((/* implicit */long long int) var_8))));
                        var_39 |= ((/* implicit */_Bool) arr_13 [i_18] [i_11]);
                        arr_64 [i_3] [i_18] [i_3] [i_3] [i_3] = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) arr_36 [i_3] [i_18] [i_18] [i_18])))));
                    }
                    var_40 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_30 [i_3])) : (-16LL))));
                }
                for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) /* same iter space */
                {
                    var_41 -= ((/* implicit */long long int) (~(((arr_62 [i_2]) ? (((/* implicit */int) arr_62 [i_2])) : (((/* implicit */int) arr_62 [i_2]))))));
                    var_42 = ((/* implicit */signed char) var_3);
                    var_43 = ((/* implicit */long long int) (signed char)109);
                    var_44 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_37 [i_3])) & (((/* implicit */int) var_11)))), (var_0)));
                    var_45 += max((((/* implicit */int) arr_37 [i_2])), (((((/* implicit */_Bool) arr_37 [i_2])) ? (((/* implicit */int) arr_37 [i_2])) : (((/* implicit */int) arr_37 [i_2])))));
                }
            }
            var_46 = ((long long int) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)106)))) + (((/* implicit */int) arr_61 [i_3] [i_3] [i_2] [i_2]))));
            arr_67 [i_3] [i_3] = var_10;
        }
        for (int i_21 = 0; i_21 < 23; i_21 += 2) 
        {
            var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)222)))))));
            /* LoopNest 3 */
            for (int i_22 = 1; i_22 < 20; i_22 += 2) 
            {
                for (int i_23 = 3; i_23 < 22; i_23 += 2) 
                {
                    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                    {
                        {
                            var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) max(((~(arr_78 [i_24 - 1] [i_23 - 3] [i_22 + 1] [i_21] [i_21] [i_2]))), (((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */unsigned int) var_0)) : (arr_78 [i_23 - 2] [i_21] [i_23 - 2] [i_23 - 2] [i_24] [i_21]))))))));
                            arr_79 [i_21] [i_21] = ((/* implicit */long long int) (~((~(((/* implicit */int) var_11))))));
                            var_49 = ((/* implicit */unsigned short) max((var_49), (((/* implicit */unsigned short) var_10))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_25 = 0; i_25 < 23; i_25 += 2) 
            {
                arr_82 [i_21] [(short)4] [i_21] [i_21] = ((/* implicit */_Bool) ((unsigned char) var_11));
                /* LoopSeq 2 */
                for (int i_26 = 3; i_26 < 20; i_26 += 2) 
                {
                    var_50 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) 2848819063U)) ? (3149720021U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))))));
                    var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) var_9))));
                    arr_85 [i_2] [i_21] [i_21] [i_26] [i_21] &= var_8;
                    /* LoopSeq 1 */
                    for (long long int i_27 = 3; i_27 < 22; i_27 += 4) 
                    {
                        arr_89 [i_2] [i_21] [i_27] [i_26] [i_27] = ((/* implicit */_Bool) 358093462U);
                        var_52 = ((/* implicit */unsigned char) min((var_52), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_21] [i_2])) ? (((/* implicit */unsigned int) var_7)) : (arr_17 [i_25] [i_25]))))));
                        arr_90 [i_2] [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (16383LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127)))));
                        arr_91 [i_27] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 131071)) ? (((/* implicit */int) (!(arr_26 [i_27] [i_27] [i_26] [i_27])))) : (((/* implicit */int) ((((/* implicit */int) arr_38 [17LL] [i_27] [(short)2] [i_27] [i_2])) >= (var_7))))));
                        var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_15 [i_26 + 3] [i_27] [i_27 - 3])));
                    }
                }
                for (signed char i_28 = 0; i_28 < 23; i_28 += 3) 
                {
                    var_54 = ((/* implicit */_Bool) 3936873829U);
                    var_55 = ((/* implicit */long long int) max((var_55), (((((/* implicit */long long int) 17)) / (16383LL)))));
                    var_56 = ((/* implicit */unsigned short) max((var_56), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (var_4))))));
                }
                /* LoopSeq 4 */
                for (signed char i_29 = 0; i_29 < 23; i_29 += 1) 
                {
                    var_57 -= ((/* implicit */unsigned char) 4294967287U);
                    var_58 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)13648)) : (-2027659268)))));
                    var_59 = ((/* implicit */unsigned char) min((var_59), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 3149720021U)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_93 [i_2] [i_21] [i_25] [i_29]))))))));
                    var_60 = ((/* implicit */int) min((var_60), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 6172423248747175195LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_80 [i_29] [i_2] [i_2]))) : (arr_81 [i_2] [i_21]))))));
                    /* LoopSeq 3 */
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) /* same iter space */
                    {
                        arr_100 [i_2] [i_25] [i_29] = ((/* implicit */unsigned short) var_9);
                        arr_101 [i_29] [i_21] [i_21] [18LL] = ((/* implicit */signed char) 1145247274U);
                        var_61 = ((/* implicit */_Bool) (+(var_2)));
                        var_62 ^= ((/* implicit */signed char) (-(var_7)));
                    }
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) /* same iter space */
                    {
                        arr_104 [i_29] [i_21] [i_25] [i_31] = ((/* implicit */_Bool) var_3);
                        var_63 += ((/* implicit */short) ((((/* implicit */_Bool) -4048596978527083621LL)) ? (((/* implicit */int) arr_18 [i_21] [i_25] [i_29])) : (((/* implicit */int) (unsigned char)245))));
                    }
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) /* same iter space */
                    {
                        var_64 = ((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_51 [i_2] [i_21] [i_25] [(short)0] [i_32])))) ? ((+(((/* implicit */int) (unsigned char)5)))) : (((/* implicit */int) (unsigned char)153))));
                        var_65 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_88 [i_25] [i_25] [i_21] [i_25])) ? (968809057) : (((/* implicit */int) (unsigned char)30))));
                        var_66 = ((/* implicit */long long int) 4127632922U);
                        var_67 = ((/* implicit */unsigned char) 1048575U);
                        arr_107 [i_29] = ((/* implicit */signed char) (+(arr_72 [i_2] [i_2])));
                    }
                }
                for (signed char i_33 = 2; i_33 < 20; i_33 += 1) 
                {
                    var_68 += ((/* implicit */unsigned char) ((long long int) arr_51 [i_2] [i_2] [i_2] [i_2] [i_2]));
                    var_69 = ((/* implicit */int) min((var_69), (((/* implicit */int) (unsigned char)226))));
                    var_70 = ((/* implicit */long long int) ((_Bool) var_3));
                    var_71 += ((/* implicit */unsigned short) ((_Bool) (-9223372036854775807LL - 1LL)));
                }
                for (_Bool i_34 = 1; i_34 < 1; i_34 += 1) 
                {
                    var_72 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_53 [i_2] [i_34 - 1] [i_34 - 1] [i_34] [i_21] [i_2]))));
                    var_73 = ((/* implicit */signed char) max((var_73), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)96)))))));
                }
                for (unsigned char i_35 = 0; i_35 < 23; i_35 += 2) 
                {
                    var_74 = ((/* implicit */short) (-(((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_36 = 0; i_36 < 23; i_36 += 2) 
                    {
                        arr_117 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)46988)) ? (((/* implicit */int) arr_108 [i_2] [i_25] [i_35] [i_36])) : (((/* implicit */int) arr_108 [i_36] [i_2] [i_2] [i_2]))));
                        var_75 = ((((/* implicit */int) (unsigned short)18547)) | (((/* implicit */int) (unsigned char)227)));
                        var_76 = ((/* implicit */short) (((_Bool)1) ? (arr_20 [i_25] [i_35] [i_21]) : (((/* implicit */long long int) arr_10 [i_21] [i_21] [i_21] [i_36]))));
                        var_77 = ((/* implicit */long long int) min((var_77), (((/* implicit */long long int) var_0))));
                    }
                    for (unsigned int i_37 = 3; i_37 < 22; i_37 += 3) 
                    {
                        arr_122 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (3472648184235038727LL) : (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_2] [i_21] [i_35] [i_37 + 1])))))) ? (((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-15LL))) : (((/* implicit */long long int) 1288972941U))));
                        var_78 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_37] [i_37] [i_37] [i_37 - 2] [i_37 - 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -11LL))))) : (((/* implicit */int) var_9))));
                    }
                    arr_123 [i_2] = ((/* implicit */signed char) ((((arr_38 [i_35] [i_21] [i_25] [i_21] [i_2]) && (((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_73 [i_35] [i_25] [i_21])) : (((/* implicit */int) arr_109 [i_2] [i_21] [i_25] [i_35] [i_35])))) : (((((/* implicit */_Bool) (unsigned short)34679)) ? (var_7) : (var_0)))));
                }
                arr_124 [i_2] [i_21] [i_21] [i_25] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_30 [i_2])) ^ (((long long int) var_4))));
            }
        }
        for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
        {
            var_79 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) 2304878805U)) & (arr_83 [i_2] [i_38] [i_38] [i_38] [i_38])))));
            arr_127 [i_2] [i_38] [i_38] = ((/* implicit */_Bool) arr_14 [i_38] [i_38] [i_38] [i_2] [i_38] [(_Bool)1]);
        }
        var_80 ^= var_0;
        var_81 = ((/* implicit */_Bool) min((arr_45 [i_2] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((var_7) + (2147483647))) << (((/* implicit */int) var_9))))), (1990088491U))))));
        var_82 = ((/* implicit */long long int) max(((~(((/* implicit */int) arr_56 [i_2] [i_2] [i_2] [i_2])))), ((~(((/* implicit */int) arr_70 [i_2] [i_2] [i_2]))))));
    }
    for (int i_39 = 0; i_39 < 23; i_39 += 2) /* same iter space */
    {
        var_83 = ((/* implicit */long long int) (unsigned char)0);
        arr_131 [i_39] = (-((~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)10)))))));
        var_84 = ((/* implicit */int) min((var_84), (((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (arr_83 [i_39] [i_39] [i_39] [i_39] [i_39]) : (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32231)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)62677)))))))) ? (var_7) : (((/* implicit */int) ((signed char) arr_70 [i_39] [i_39] [i_39])))))));
    }
}
