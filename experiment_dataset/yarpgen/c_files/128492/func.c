/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128492
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
    for (short i_0 = 4; i_0 < 14; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)116);
                    arr_9 [i_0] = ((/* implicit */unsigned int) (!(var_5)));
                    arr_10 [i_0] = ((((/* implicit */_Bool) 884573903)) || (((/* implicit */_Bool) (unsigned char)20)));
                    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((8217948871458647281LL) / (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (signed char)99))))))))));
                }
            } 
        } 
        arr_11 [i_0 + 1] [i_0] = ((/* implicit */int) ((long long int) -8217948871458647281LL));
        var_12 = ((/* implicit */short) (!((_Bool)1)));
    }
    for (short i_3 = 4; i_3 < 14; i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned char) -884573903);
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                {
                    var_13 = arr_6 [i_3] [i_4] [i_5];
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_14 &= ((/* implicit */unsigned long long int) (+((+((-2147483647 - 1))))));
                        var_15 &= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? ((+(arr_15 [i_3 + 1]))) : (arr_15 [i_3 + 1])));
                        arr_27 [i_3] [i_3] = ((/* implicit */unsigned long long int) max((arr_13 [i_3]), ((!(((/* implicit */_Bool) 14272648077948935280ULL))))));
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_5)), (3347660768U))) % (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_5])) | (((/* implicit */int) var_1))))))))));
                            arr_31 [i_3 - 2] [i_4] [i_3 - 2] [i_3] [i_5] = ((/* implicit */_Bool) (+(var_4)));
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_17 = ((/* implicit */short) (!(var_5)));
                            var_18 = ((/* implicit */short) arr_3 [7ULL] [7ULL] [4LL]);
                        }
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        var_19 = ((/* implicit */_Bool) arr_26 [i_3] [i_4] [i_5] [i_5] [i_5]);
                        arr_36 [i_3] [i_4] [i_5] [(_Bool)1] [i_3] = ((/* implicit */_Bool) (~(4549851819188715986ULL)));
                    }
                    arr_37 [i_3 - 2] [i_3] [i_5] = ((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((((/* implicit */int) var_9)) | (884573925)))));
                    arr_38 [i_3 - 3] [i_3] [i_3] = ((/* implicit */int) ((_Bool) ((unsigned int) arr_17 [i_3] [i_3])));
                }
            } 
        } 
        arr_39 [(signed char)2] &= ((/* implicit */unsigned int) ((unsigned long long int) arr_15 [i_3]));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
    {
        arr_42 [i_10] [i_10] &= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 2129391586U)) : (arr_40 [i_10]))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_10]))) : ((-(var_3))))))));
        arr_43 [i_10] [i_10] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_10])) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((unsigned char) arr_41 [i_10])))));
        /* LoopSeq 3 */
        for (signed char i_11 = 1; i_11 < 19; i_11 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) ((_Bool) arr_44 [i_11 - 1] [i_11 - 1] [i_11]));
            arr_47 [i_11] [i_11] [i_11] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
        }
        for (signed char i_12 = 1; i_12 < 19; i_12 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_13 = 1; i_13 < 18; i_13 += 2) 
            {
                for (unsigned char i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_15 = 0; i_15 < 20; i_15 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) var_10);
                            var_23 = ((/* implicit */signed char) (~(((/* implicit */int) ((var_2) == (var_4))))));
                            arr_57 [i_15] [i_12] [i_13 - 1] [i_12] [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) (short)-9651);
                            var_24 = ((var_6) ^ (((/* implicit */int) (!(var_5)))));
                        }
                        for (int i_16 = 0; i_16 < 20; i_16 += 4) 
                        {
                            var_25 &= ((/* implicit */int) arr_50 [i_12 - 1] [i_13 + 2] [i_12 + 1]);
                            arr_60 [i_10] [i_10] [i_13] [i_12] [i_13] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_50 [i_12 + 1] [i_12] [i_13 + 2]))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (var_2) : (29ULL)));
                            arr_61 [i_16] [i_16] = ((/* implicit */unsigned char) ((unsigned long long int) arr_56 [i_12 + 1] [i_13] [i_13]));
                        }
                        arr_62 [i_12] [i_12] [i_13 + 1] [i_14] = ((/* implicit */long long int) (-(var_6)));
                        arr_63 [i_10] [i_10] [i_13 + 1] [i_14] = ((/* implicit */int) ((((unsigned int) (_Bool)0)) >> ((((+(arr_46 [i_14] [i_13] [i_12]))) - (9009584571704774618ULL)))));
                        var_27 = ((_Bool) var_0);
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned long long int i_17 = 3; i_17 < 18; i_17 += 4) 
            {
                var_28 = ((/* implicit */unsigned long long int) var_1);
                /* LoopSeq 1 */
                for (int i_18 = 0; i_18 < 20; i_18 += 2) 
                {
                    var_29 = ((/* implicit */_Bool) ((((var_4) | (13029878843820134576ULL))) | (arr_46 [i_10] [i_17 + 2] [i_18])));
                    arr_70 [i_18] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_64 [i_12 + 1] [i_10] [i_18] [i_17 + 1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_12 - 1] [i_12] [i_17] [i_17 - 2])))));
                }
                var_30 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_59 [i_17 - 1] [i_12] [i_12] [i_12] [i_12] [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_45 [i_12 + 1])));
                var_31 = ((/* implicit */signed char) ((6831737006968852636ULL) - (29ULL)));
            }
            for (int i_19 = 0; i_19 < 20; i_19 += 1) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned int) max((var_32), (((((8217948871458647281LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-89))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_10] [i_12 - 1] [i_19]))) : (arr_68 [i_12 + 1] [i_12 + 1] [i_12 + 1])))));
                var_33 = ((/* implicit */long long int) var_4);
            }
            for (int i_20 = 0; i_20 < 20; i_20 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_21 = 0; i_21 < 20; i_21 += 2) 
                {
                    arr_79 [i_10] [i_12 - 1] [i_21] = ((/* implicit */short) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_8))));
                    var_34 -= ((/* implicit */unsigned char) ((_Bool) -1639323857685011859LL));
                    arr_80 [i_10] [i_12] [i_20] [i_10] [i_21] [i_21] = ((/* implicit */unsigned long long int) var_0);
                }
                arr_81 [i_20] [0LL] [i_12 - 1] [0LL] = ((/* implicit */signed char) ((unsigned long long int) 4174095995760616336ULL));
            }
            for (int i_22 = 0; i_22 < 20; i_22 += 1) /* same iter space */
            {
                var_35 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_10] [i_12] [i_22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_12] [i_22] [i_22]))) : (arr_46 [i_10] [i_12 + 1] [i_12 - 1])));
                var_36 = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
                /* LoopSeq 1 */
                for (int i_23 = 0; i_23 < 20; i_23 += 2) 
                {
                    var_37 = ((/* implicit */_Bool) var_0);
                    var_38 -= ((/* implicit */_Bool) ((unsigned char) var_8));
                    var_39 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)236))));
                    arr_88 [i_22] = arr_75 [i_10] [i_12] [i_10] [i_23];
                }
                var_40 = ((/* implicit */signed char) ((var_4) << (((((/* implicit */int) arr_74 [i_10] [i_12 + 1] [i_12 - 1])) - (119)))));
            }
        }
        for (signed char i_24 = 1; i_24 < 19; i_24 += 2) /* same iter space */
        {
            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) 15819483962533514201ULL)) ? (arr_72 [(signed char)14] [i_24 - 1] [i_24 + 1] [i_24 - 1]) : (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))));
            /* LoopSeq 4 */
            for (unsigned int i_25 = 0; i_25 < 20; i_25 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_26 = 1; i_26 < 19; i_26 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_27 = 4; i_27 < 19; i_27 += 4) /* same iter space */
                    {
                        var_42 |= ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
                        var_43 |= ((/* implicit */unsigned long long int) ((unsigned int) var_4));
                        var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) arr_75 [i_10] [i_10] [i_25] [i_26]))));
                        arr_100 [i_10] [i_26] [i_26] [i_26] [i_27 - 3] [i_26] = ((/* implicit */signed char) ((((/* implicit */_Bool) 14272648077948935280ULL)) ? (((var_5) ? (16477369783780637745ULL) : (arr_67 [i_10] [i_24] [i_25] [i_27]))) : (((/* implicit */unsigned long long int) ((int) var_9)))));
                    }
                    for (int i_28 = 4; i_28 < 19; i_28 += 4) /* same iter space */
                    {
                        arr_103 [i_10] [i_26] [i_25] [i_25] [i_24 - 1] = ((/* implicit */long long int) (-(11641144431355496799ULL)));
                        var_45 ^= ((/* implicit */unsigned char) (-(var_3)));
                    }
                    var_46 = var_8;
                    var_47 = ((((/* implicit */_Bool) arr_97 [i_26 + 1] [2] [i_26 + 1] [i_26] [i_26] [i_26])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_3));
                    var_48 = ((/* implicit */unsigned long long int) arr_102 [i_26] [13ULL] [i_25] [i_26 - 1] [i_24 - 1]);
                }
                for (signed char i_29 = 1; i_29 < 19; i_29 += 2) /* same iter space */
                {
                    var_49 ^= (+(((/* implicit */int) (signed char)60)));
                    arr_107 [i_10] [i_29] [i_25] [(short)0] = (+(((/* implicit */int) arr_50 [i_10] [i_24 + 1] [i_25])));
                }
                var_50 = ((/* implicit */signed char) (~(((/* implicit */int) arr_101 [i_10] [i_10] [i_24 - 1] [i_24] [i_24 + 1] [i_25]))));
                /* LoopSeq 1 */
                for (int i_30 = 0; i_30 < 20; i_30 += 2) 
                {
                    arr_111 [i_10] [i_24] [i_24] [i_25] [i_30] = ((/* implicit */unsigned int) ((unsigned long long int) arr_66 [i_25] [i_30] [i_25] [i_30] [i_30]));
                    var_51 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((long long int) (unsigned char)238)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_31 = 0; i_31 < 20; i_31 += 4) 
                    {
                        var_52 = ((/* implicit */signed char) ((short) 2269390932941970054ULL));
                        arr_116 [i_10] [i_10] [i_31] [i_30] = ((/* implicit */unsigned int) arr_95 [i_10] [i_31] [i_24 + 1]);
                        var_53 = ((/* implicit */short) ((((/* implicit */_Bool) arr_87 [i_24 - 1] [i_30] [i_30] [i_10] [i_24 - 1] [i_24])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236))) : (arr_87 [i_24 + 1] [i_24] [(signed char)3] [i_30] [i_24 + 1] [i_24])));
                    }
                    for (unsigned int i_32 = 4; i_32 < 18; i_32 += 4) 
                    {
                        arr_121 [i_24] [i_24] [i_32] = ((/* implicit */short) (+(((/* implicit */int) arr_84 [i_32 - 4] [i_24 + 1] [i_24 + 1] [i_32 - 4] [i_32 + 2]))));
                        var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_56 [i_32 - 1] [i_24 - 1] [i_30])) || (((/* implicit */_Bool) arr_69 [i_24] [i_25] [i_24]))));
                        arr_122 [i_10] [i_24 - 1] [i_25] [i_30] [i_32] = var_9;
                    }
                }
            }
            for (unsigned int i_33 = 0; i_33 < 20; i_33 += 4) /* same iter space */
            {
                var_55 = ((/* implicit */unsigned char) ((unsigned int) arr_77 [i_24] [i_24 - 1] [i_24 - 1] [i_24 - 1] [i_24 - 1]));
                var_56 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) 4174095995760616356ULL))));
                var_57 = ((/* implicit */_Bool) min((var_57), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_102 [i_10] [i_24] [i_24] [i_33] [i_24]))) : (arr_90 [i_10]))))))));
            }
            for (unsigned long long int i_34 = 4; i_34 < 16; i_34 += 4) 
            {
                var_58 = ((/* implicit */short) arr_69 [i_10] [i_24 + 1] [i_34]);
                var_59 = ((/* implicit */int) max((var_59), (((/* implicit */int) ((unsigned int) arr_59 [i_10] [i_10] [i_10] [i_34 - 3] [i_34 - 2] [i_10] [i_34])))));
            }
            for (unsigned int i_35 = 2; i_35 < 19; i_35 += 2) 
            {
                var_60 |= ((/* implicit */_Bool) (~(((/* implicit */int) arr_64 [i_24 - 1] [i_24 - 1] [i_24 + 1] [i_35 + 1]))));
                var_61 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_44 [i_35 + 1] [i_24] [i_35]))));
                /* LoopSeq 1 */
                for (int i_36 = 2; i_36 < 18; i_36 += 2) 
                {
                    var_62 = ((/* implicit */_Bool) ((arr_125 [i_35 + 1] [i_35 + 1] [(unsigned char)2]) % (((/* implicit */int) var_9))));
                    var_63 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3187030238U)) ? (((/* implicit */int) arr_96 [i_10] [i_35 - 2] [i_36 + 1])) : (((/* implicit */int) arr_96 [i_35] [i_35 - 2] [i_35]))));
                }
                var_64 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_86 [i_24 - 1] [i_35 + 1] [i_35])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_133 [i_35] [7ULL] [i_35 - 2] [7ULL])))));
            }
        }
        var_65 = ((/* implicit */_Bool) 676367217U);
    }
}
