/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124335
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_16 |= ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) (unsigned short)29306)) : (((/* implicit */int) (_Bool)1))));
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_1 [i_1]))));
            var_19 &= ((/* implicit */unsigned short) ((_Bool) (short)3));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-3)) / (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 3 */
            for (short i_3 = 2; i_3 < 11; i_3 += 4) 
            {
                var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-27165)) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) arr_9 [i_3 - 1] [i_2] [i_3])) : ((((_Bool)0) ? (((/* implicit */int) (unsigned short)36225)) : (((/* implicit */int) (_Bool)1))))));
                var_22 = var_7;
            }
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                arr_13 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15088)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)29391))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_11))));
                arr_14 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1]))));
            }
            for (short i_5 = 2; i_5 < 10; i_5 += 4) 
            {
                arr_17 [i_5] |= ((/* implicit */_Bool) var_13);
                /* LoopSeq 3 */
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    arr_22 [i_0] [i_2] [i_2] [i_6] [i_2] [(short)8] = arr_0 [i_0];
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_2] [i_2 + 1])) : (((/* implicit */int) (unsigned short)16383)))))));
                    arr_23 [i_0] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)26370)) : (((/* implicit */int) (unsigned short)65535))));
                    var_24 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_2] [i_2 + 1])) : (((/* implicit */int) (short)15085))));
                }
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)15085)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)26698))));
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        var_26 = ((/* implicit */short) ((unsigned short) var_13));
                        arr_28 [i_5] [i_2] = ((/* implicit */_Bool) ((short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)15094)))));
                    }
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_19 [i_7 + 1] [i_2] [i_2] [i_7 + 1] [i_7 + 1] [i_2])) : ((~(((/* implicit */int) (_Bool)1))))));
                    var_28 = ((/* implicit */_Bool) ((unsigned short) (short)-28226));
                    var_29 = ((/* implicit */unsigned short) ((var_5) ? (((/* implicit */int) arr_2 [i_2 + 1] [i_2])) : (((/* implicit */int) arr_2 [i_2 + 1] [i_2]))));
                }
                for (unsigned short i_9 = 3; i_9 < 8; i_9 += 2) 
                {
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) arr_24 [(unsigned short)6] [i_5] [i_0] [i_2] [i_9] [i_5]))));
                    /* LoopSeq 3 */
                    for (short i_10 = 2; i_10 < 9; i_10 += 3) 
                    {
                        arr_34 [i_0] [i_0] [i_5] [i_9] [i_10] [i_0] [i_2] = (short)-5499;
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)32758))))) ? (((/* implicit */int) (short)-4366)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        var_32 += ((/* implicit */short) ((((/* implicit */int) var_0)) >> (((/* implicit */int) var_15))));
                        var_33 *= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)(-32767 - 1)))));
                        var_34 = ((/* implicit */unsigned short) (short)21732);
                        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((_Bool) (_Bool)1)))));
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) arr_32 [i_2 + 1] [i_2] [i_9 + 1] [i_2 + 1])) : (((/* implicit */int) (short)-4366))));
                    }
                    for (unsigned short i_12 = 2; i_12 < 11; i_12 += 1) 
                    {
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32747))))) ? (((/* implicit */int) arr_37 [(unsigned short)0] [(unsigned short)9] [i_5] [i_9] [i_12])) : (((/* implicit */int) arr_0 [i_12 - 1]))));
                        var_38 *= ((/* implicit */short) ((((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) (short)5547))));
                        arr_41 [i_2] [i_2] [i_12] = ((/* implicit */short) arr_29 [i_0] [i_2] [i_5] [i_5 + 2] [i_9] [i_9]);
                    }
                }
            }
        }
        var_39 = ((/* implicit */short) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (short i_13 = 0; i_13 < 12; i_13 += 4) 
    {
        arr_45 [(short)4] [i_13] = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned short)33518)))) | (((/* implicit */int) (unsigned short)65230))));
        var_40 = ((/* implicit */short) ((((/* implicit */int) var_1)) << (((((/* implicit */int) var_12)) - (27010)))));
        arr_46 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        var_41 &= ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_4))));
    }
    /* vectorizable */
    for (short i_14 = 2; i_14 < 11; i_14 += 1) 
    {
        arr_50 [i_14] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21733)) ? (((/* implicit */int) (short)-32747)) : (((/* implicit */int) (short)24920))));
        /* LoopSeq 1 */
        for (unsigned short i_15 = 0; i_15 < 13; i_15 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_16 = 2; i_16 < 12; i_16 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_17 = 1; i_17 < 10; i_17 += 2) 
                {
                    arr_58 [i_17 + 2] [i_14] [i_14] [i_14] = ((/* implicit */_Bool) ((unsigned short) arr_52 [i_17 + 3]));
                    var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21732)) ? (((/* implicit */int) (short)-20807)) : (((/* implicit */int) (_Bool)1)))))));
                }
                arr_59 [i_14] [i_15] [i_14] = ((/* implicit */_Bool) ((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) (unsigned short)14299)) - (14299)))));
            }
            for (short i_18 = 0; i_18 < 13; i_18 += 2) 
            {
                var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65230)) ? (((/* implicit */int) (short)20807)) : (((/* implicit */int) (short)-21732))));
                var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)21737)) : (((/* implicit */int) ((short) (unsigned short)65522)))));
                var_45 = ((/* implicit */_Bool) (short)24645);
                arr_64 [i_14] [i_14] [i_15] = var_13;
            }
            arr_65 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)24123)) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) arr_57 [i_14]))))));
            var_46 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_47 [i_14 - 1] [i_14 + 1]))));
        }
    }
    var_47 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 2 */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            var_48 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) arr_62 [i_19] [i_19] [(unsigned short)0])) < (((/* implicit */int) (unsigned short)65535))))), (var_0)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_19])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) (short)32742)) : (((((/* implicit */_Bool) (unsigned short)19473)) ? (((/* implicit */int) arr_49 [i_19])) : (((/* implicit */int) var_12))))))));
            /* LoopSeq 2 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                var_49 = ((/* implicit */unsigned short) ((_Bool) (short)8943));
                arr_74 [i_21] [i_20] [i_21] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_70 [i_19])) : (((/* implicit */int) arr_51 [i_19]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_70 [i_19]))))) : ((-(((/* implicit */int) (short)-4897))))));
            }
            for (unsigned short i_22 = 0; i_22 < 13; i_22 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                {
                    var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) ((_Bool) (unsigned short)46063)))));
                    arr_82 [i_19] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_80 [i_23 + 1] [i_23 + 1] [i_22] [i_23 + 1])) + (((/* implicit */int) arr_73 [i_19] [i_20] [i_22] [i_23])))) / (((/* implicit */int) var_2))));
                }
                for (unsigned short i_24 = 0; i_24 < 13; i_24 += 3) 
                {
                    var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) max(((unsigned short)28414), ((unsigned short)4)))) : (((/* implicit */int) (_Bool)1)))) : ((+(((arr_63 [i_19] [i_20] [i_19]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)59671)))))))))));
                    arr_86 [i_22] [(unsigned short)10] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (short)21225))))) ? (((/* implicit */int) (short)-29538)) : (((/* implicit */int) (unsigned short)0))));
                }
                var_52 = ((/* implicit */_Bool) min((var_52), ((_Bool)1)));
            }
            var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) min(((~(((/* implicit */int) (short)7487)))), (((((/* implicit */_Bool) arr_80 [(short)0] [i_19] [i_20] [i_20])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))))))));
        }
        for (unsigned short i_25 = 1; i_25 < 10; i_25 += 4) 
        {
            var_54 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (unsigned short)65535))) ^ (((/* implicit */int) ((_Bool) ((_Bool) arr_75 [i_19] [i_25] [i_19]))))));
            var_55 *= ((/* implicit */_Bool) arr_61 [i_25 + 2] [i_25 + 2] [i_25 - 1]);
            var_56 *= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)46063))));
        }
        for (short i_26 = 0; i_26 < 13; i_26 += 1) 
        {
            arr_92 [i_19] [i_19] [i_26] = ((/* implicit */short) ((((/* implicit */int) arr_69 [(short)0] [i_19] [i_26])) - (((((((((/* implicit */_Bool) (unsigned short)19483)) ? (((/* implicit */int) (short)-31233)) : (((/* implicit */int) (short)31351)))) + (2147483647))) << (((((/* implicit */int) max(((short)-1), (((/* implicit */short) (_Bool)1))))) - (1)))))));
            var_57 = max((var_11), (((/* implicit */unsigned short) (_Bool)1)));
        }
        var_58 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_13)))), ((-(((/* implicit */int) arr_89 [i_19] [i_19] [i_19]))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_71 [i_19] [i_19]))));
    }
    for (short i_27 = 2; i_27 < 21; i_27 += 2) 
    {
        arr_95 [i_27] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23935)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (unsigned short)17)) : (((((/* implicit */_Bool) (short)14134)) ? (((/* implicit */int) arr_93 [i_27])) : ((+(((/* implicit */int) (short)8191))))))));
        arr_96 [(_Bool)1] = ((/* implicit */unsigned short) var_7);
        var_59 *= ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_93 [i_27 + 2])) >> (((((/* implicit */int) var_12)) - (27011)))))));
    }
    var_60 = ((/* implicit */short) ((unsigned short) var_7));
    var_61 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))));
}
