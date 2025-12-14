/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116711
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [i_1] &= ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
            var_10 += ((/* implicit */unsigned char) ((signed char) (short)(-32767 - 1)));
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        arr_11 [i_2] [i_0] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) (short)32752)))));
                        var_11 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_1] [i_3])) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_0]))) == (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                    }
                } 
            } 
        }
        var_12 = ((/* implicit */int) ((arr_4 [i_0] [i_0]) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0])))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_13 ^= ((/* implicit */unsigned char) ((((arr_1 [i_4]) <= (((/* implicit */unsigned int) (-2147483647 - 1))))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [(unsigned char)12])))))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                {
                    arr_21 [i_4] [8] [i_6] = ((/* implicit */unsigned char) 18013298997854208ULL);
                    arr_22 [i_4] [i_5] = ((/* implicit */unsigned int) max((1ULL), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_14 [i_5])) : (arr_2 [i_6]))))))));
                    arr_23 [(signed char)3] [i_5] [i_4] &= ((/* implicit */unsigned char) arr_13 [i_4]);
                }
            } 
        } 
        var_14 += ((/* implicit */unsigned char) arr_12 [i_4]);
        var_15 &= ((/* implicit */unsigned char) 0ULL);
        arr_24 [i_4] [i_4] = ((/* implicit */int) (unsigned char)63);
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */int) ((unsigned char) (signed char)-1));
        /* LoopSeq 3 */
        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                /* LoopSeq 4 */
                for (short i_10 = 2; i_10 < 22; i_10 += 3) 
                {
                    arr_37 [(unsigned char)1] [i_10] [i_9] [i_10 - 1] = ((/* implicit */unsigned char) arr_30 [i_7]);
                    arr_38 [i_7] [i_10] [i_7] [i_10] [i_7] = ((/* implicit */_Bool) (unsigned char)90);
                    arr_39 [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 288593101)) : (714221269813888657ULL)));
                    arr_40 [i_7] [(unsigned char)22] [4ULL] [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
                }
                for (unsigned int i_11 = 1; i_11 < 23; i_11 += 1) /* same iter space */
                {
                    var_17 -= ((unsigned long long int) arr_9 [i_11] [i_11] [i_11] [i_11 - 1]);
                    var_18 &= ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) arr_19 [i_7] [i_8] [i_9])));
                    var_19 = ((/* implicit */unsigned int) var_3);
                    arr_44 [i_7] [i_7] [i_7] [15U] [i_7] [i_7] = ((/* implicit */unsigned int) var_5);
                }
                for (unsigned int i_12 = 1; i_12 < 23; i_12 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
                    {
                        arr_49 [i_7] [i_8] [i_8] [i_12 + 1] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 6829868676051786476LL))));
                        var_20 = ((/* implicit */short) (((+(var_2))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        var_21 = ((/* implicit */_Bool) ((arr_48 [i_8] [i_8] [14ULL] [i_8] [i_8] [i_8]) * (arr_9 [i_7] [i_8] [i_9] [i_8])));
                        var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
                        arr_50 [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 3) /* same iter space */
                    {
                        arr_55 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_5))) ? (var_3) : (((/* implicit */int) arr_29 [i_8] [i_12 - 1] [i_14]))));
                        arr_56 [i_14] [19U] = ((/* implicit */_Bool) ((unsigned int) var_0));
                    }
                    arr_57 [(unsigned char)23] [i_8] [10ULL] [i_12] = ((/* implicit */unsigned long long int) var_5);
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_12 - 1] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) var_3)) : (var_9))))));
                }
                for (short i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    var_24 = ((((/* implicit */_Bool) arr_5 [i_7] [i_8] [i_9])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_7] [i_8] [i_9])));
                    var_25 = (~(((/* implicit */int) var_4)));
                    arr_60 [i_15] = ((/* implicit */unsigned int) ((((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189))))) ? (5046315050266044047ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) > (1022ULL)))))));
                }
                /* LoopSeq 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_8)) : (13400429023443507568ULL)))) || (((/* implicit */_Bool) ((short) 7875578494185562356ULL)))));
                    arr_65 [i_7] [(_Bool)1] [i_7] [i_7] = ((/* implicit */signed char) ((_Bool) arr_0 [9ULL]));
                    arr_66 [i_9] [i_8] [17] [i_8] = ((/* implicit */unsigned int) ((arr_18 [i_7] [i_9] [i_7]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5)))));
                }
                for (short i_17 = 0; i_17 < 24; i_17 += 4) 
                {
                    arr_71 [i_7] [i_8] [i_9] [i_17] = ((arr_2 [i_7]) - (((/* implicit */int) (unsigned char)24)));
                    var_27 = ((/* implicit */unsigned char) (+(var_8)));
                }
            }
            for (unsigned char i_18 = 0; i_18 < 24; i_18 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_19 = 1; i_19 < 20; i_19 += 1) 
                {
                    for (unsigned int i_20 = 0; i_20 < 24; i_20 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) 6829868676051786476LL)) ? (17732522803895662958ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_29 = ((/* implicit */unsigned long long int) ((unsigned char) (~(288593125))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_2)) / (var_9)))) ? (((/* implicit */unsigned int) var_3)) : (arr_12 [i_7])));
                        }
                    } 
                } 
                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((((/* implicit */_Bool) (short)31408)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_7] [i_8] [i_18]))) : (7385317451886370198ULL))) == (((/* implicit */unsigned long long int) arr_76 [i_7] [i_8] [i_8] [i_18])))))));
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */unsigned int) -288593096)) : (4039325850U)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_25 [9]))))) : (7385317451886370198ULL)));
            }
            arr_81 [i_7] = ((/* implicit */unsigned int) (+(((unsigned long long int) var_4))));
            var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_27 [i_7] [i_7]))));
        }
        for (unsigned char i_21 = 0; i_21 < 24; i_21 += 2) /* same iter space */
        {
            var_34 = ((((/* implicit */_Bool) var_8)) ? ((~(0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
            /* LoopNest 2 */
            for (int i_22 = 3; i_22 < 22; i_22 += 2) 
            {
                for (short i_23 = 0; i_23 < 24; i_23 += 1) 
                {
                    {
                        var_35 = ((/* implicit */short) 18446744073709551615ULL);
                        arr_88 [i_23] [i_21] [i_22 - 3] [(unsigned char)2] = ((/* implicit */unsigned long long int) ((arr_35 [(short)7] [i_21] [i_22 - 2] [i_7] [i_21]) & (arr_35 [i_22] [i_23] [i_22 - 2] [i_23] [i_21])));
                        var_36 = ((/* implicit */short) 13773346411489422287ULL);
                    }
                } 
            } 
        }
        for (unsigned char i_24 = 0; i_24 < 24; i_24 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_25 = 0; i_25 < 24; i_25 += 2) 
            {
                var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (714221269813888652ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (802720754))))));
                var_38 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((unsigned long long int) 0U))));
            }
            arr_94 [i_7] [i_7] = ((/* implicit */long long int) var_9);
            var_39 -= ((/* implicit */short) ((11765849137596913525ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_7] [i_7] [i_7] [i_24])))));
        }
        arr_95 [i_7] = ((arr_75 [(_Bool)1] [(_Bool)1] [(_Bool)1]) ? (((/* implicit */long long int) ((255641440U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [(unsigned char)19] [i_7])))))) : (arr_90 [i_7]));
    }
    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
    {
        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (var_2) : (min((((((/* implicit */int) arr_28 [i_26] [i_26])) & (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_85 [i_26] [i_26] [i_26] [i_26])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)11))))))));
        var_41 *= ((/* implicit */short) (+(9733762013465370620ULL)));
        var_42 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 1066908589U)), (((unsigned long long int) ((((/* implicit */_Bool) 384)) ? (262143) : (((/* implicit */int) (_Bool)1)))))));
    }
    /* LoopSeq 3 */
    for (short i_27 = 0; i_27 < 23; i_27 += 2) /* same iter space */
    {
        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_14 [i_27])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1023))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_53 [i_27] [i_27] [i_27] [i_27] [23] [i_27])) > (var_6))))))) ? (((((/* implicit */_Bool) 2047916264)) ? (min((((/* implicit */unsigned long long int) -384015003)), (15099922513234345653ULL))) : (((/* implicit */unsigned long long int) arr_42 [i_27])))) : (((/* implicit */unsigned long long int) 2139095040))));
        arr_100 [i_27] = ((/* implicit */long long int) (+(arr_19 [(_Bool)0] [(_Bool)0] [(unsigned char)2])));
    }
    /* vectorizable */
    for (short i_28 = 0; i_28 < 23; i_28 += 2) /* same iter space */
    {
        arr_104 [0U] = ((/* implicit */int) var_1);
        arr_105 [i_28] = ((/* implicit */unsigned int) ((_Bool) arr_103 [i_28]));
        arr_106 [i_28] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_67 [i_28] [(_Bool)1] [i_28] [i_28])) ? (((/* implicit */int) arr_59 [i_28] [i_28] [(signed char)0])) : (((((/* implicit */int) (unsigned char)133)) << (((-1201618402) + (1201618404)))))));
    }
    for (signed char i_29 = 0; i_29 < 16; i_29 += 2) 
    {
        var_44 = ((/* implicit */unsigned int) (short)12804);
        arr_109 [i_29] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_29])) ? (((/* implicit */int) arr_16 [i_29] [i_29])) : (((/* implicit */int) arr_25 [i_29]))))) ? (((unsigned int) arr_102 [i_29])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_70 [i_29] [i_29])) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) arr_70 [i_29] [i_29])))))));
        var_45 = ((/* implicit */unsigned char) var_2);
        var_46 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)206))));
    }
    var_47 = ((/* implicit */unsigned char) var_8);
    var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -925615290)) ? (((/* implicit */long long int) 1610612736U)) : (2442663927602697178LL)));
}
