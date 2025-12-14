/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158294
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) == (var_4)))) : (((arr_4 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_14)))));
                var_17 = ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned char) var_9))), (((unsigned int) arr_2 [i_0] [i_0] [i_0]))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) (unsigned char)9))));
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max(((+(((/* implicit */int) var_10)))), ((-(((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)27)))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 2; i_4 < 11; i_4 += 3) /* same iter space */
            {
                arr_14 [i_2] [i_3 - 1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) : (14269419548212327110ULL)))) ? (((/* implicit */unsigned int) 1031914094)) : (((((/* implicit */_Bool) 825938910U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2131607326U)))));
                var_20 &= ((/* implicit */int) ((long long int) arr_8 [6ULL] [i_3]));
                arr_15 [i_4] [i_2] [i_2] [i_2] = ((((((/* implicit */long long int) arr_6 [i_3])) + (var_8))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_8 [i_2] [i_3 - 1]) : (arr_1 [i_2])))));
            }
            for (unsigned char i_5 = 2; i_5 < 11; i_5 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    for (unsigned int i_7 = 1; i_7 < 10; i_7 += 3) 
                    {
                        {
                            var_21 += ((/* implicit */unsigned long long int) ((var_10) ? ((+(arr_1 [4U]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                            var_22 = var_3;
                            var_23 = ((/* implicit */unsigned char) 3469028361U);
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) + (arr_17 [(unsigned char)2]))))));
                        }
                    } 
                } 
                arr_24 [i_2] [(_Bool)1] [i_5] [9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_3 - 1])) ? (((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_3] [i_5])) ? (1908635545) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_9))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) ((arr_27 [i_2 - 1] [i_3] [i_3] [i_8]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_2] [i_3] [(_Bool)1] [i_8] [i_9]))) : (var_11)));
                            var_26 *= ((/* implicit */unsigned char) var_0);
                            var_27 = (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-26599)) : (((/* implicit */int) var_16)))));
                            arr_31 [i_2] [i_2] [i_9] [i_8] = ((/* implicit */unsigned long long int) 2477406418U);
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned char) -2513799857715752760LL);
            }
            var_29 = ((/* implicit */signed char) ((int) arr_4 [i_2]));
            arr_32 [i_2] [i_2] = ((/* implicit */signed char) (-(arr_2 [i_3 - 1] [i_2] [i_2 + 1])));
        }
        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_27 [i_2 - 1] [i_2] [i_2 + 2] [i_2 + 2])), (arr_21 [i_2] [(signed char)9] [i_2 + 2] [i_2 + 2] [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */int) arr_21 [i_2] [i_2] [i_2 + 2] [i_2 + 2] [i_10]))))) : (min((var_11), (((/* implicit */unsigned long long int) (unsigned char)246))))));
            var_31 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) var_7)) : (9007198717870080LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)228))))) : (((/* implicit */int) ((-7741249775481909050LL) >= (((/* implicit */long long int) var_15))))))), (((/* implicit */int) (unsigned char)252))));
        }
        for (unsigned int i_11 = 3; i_11 < 10; i_11 += 3) 
        {
            var_32 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)233)) ? (-9007198717870080LL) : (((/* implicit */long long int) var_1))))) ? (var_3) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-32761))))))) >= ((~(arr_17 [(unsigned char)4])))));
            /* LoopNest 2 */
            for (unsigned short i_12 = 1; i_12 < 11; i_12 += 4) 
            {
                for (unsigned char i_13 = 1; i_13 < 10; i_13 += 4) 
                {
                    {
                        var_33 -= ((/* implicit */_Bool) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))), (((/* implicit */int) var_10))));
                        /* LoopSeq 1 */
                        for (long long int i_14 = 1; i_14 < 11; i_14 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (arr_17 [i_2]) : (var_11))), (((/* implicit */unsigned long long int) arr_23 [i_12] [i_2] [i_12] [i_12] [i_12]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_2]) == (825938893U))))) == (-736136285799527117LL)))) : (((/* implicit */int) ((_Bool) min((-736136285799527117LL), (((/* implicit */long long int) var_16))))))));
                            var_35 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (((_Bool)0) ? (2049232780) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)58383)) == ((+(((/* implicit */int) (unsigned char)54)))))))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                for (long long int i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    {
                        arr_50 [i_2] = ((/* implicit */unsigned long long int) (unsigned char)18);
                        var_36 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125))) : (arr_9 [i_2 + 1])))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (var_15)))), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_9)) == (((/* implicit */int) (signed char)99)))))))));
                    }
                } 
            } 
            var_37 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) arr_30 [i_2 + 2] [i_2] [i_2 - 1] [i_2 - 1] [i_2])), (arr_35 [i_2 - 1] [(unsigned char)0]))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_7) : (3521091461U))))));
        }
        var_38 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (min((((/* implicit */unsigned long long int) arr_28 [i_2] [(_Bool)1] [i_2 - 1] [i_2])), (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
        arr_51 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_10 [i_2 + 2] [i_2 + 2])))) >= (arr_10 [i_2 + 1] [i_2])));
        var_39 = ((/* implicit */unsigned short) (~(var_15)));
    }
    /* vectorizable */
    for (unsigned char i_17 = 2; i_17 < 14; i_17 += 3) 
    {
        var_40 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) : (var_1)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (3867919539547883681LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [6ULL]))));
        /* LoopNest 2 */
        for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 4) 
        {
            for (signed char i_19 = 3; i_19 < 14; i_19 += 3) 
            {
                {
                    var_41 = 7001287738891572249ULL;
                    var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_53 [i_17])) ? (((/* implicit */int) (_Bool)1)) : (1031914100))))))));
                    arr_58 [i_17] [i_18] [i_18] [i_17] &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)125)) << (((1250379318) - (1250379305))))) << (((/* implicit */int) var_10))));
                    /* LoopSeq 1 */
                    for (unsigned char i_20 = 0; i_20 < 15; i_20 += 3) 
                    {
                        var_43 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_54 [i_19 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_54 [i_19 - 3])) + (136))) - (22)))));
                        var_44 |= ((((/* implicit */_Bool) (unsigned short)39084)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_17 - 2] [i_18]))));
                        var_45 -= ((/* implicit */unsigned long long int) ((var_15) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) >= (var_8)))))));
                        var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_5)) : (arr_57 [i_17 + 1] [i_17 + 1] [i_19] [i_19])))) ? (((/* implicit */int) arr_52 [i_17 - 2])) : (((/* implicit */int) arr_52 [i_17 + 1])))))));
                        var_47 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53300)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)231)))));
                    }
                }
            } 
        } 
    }
    var_48 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_1)) | (var_4)))) != (var_11))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_21 = 0; i_21 < 16; i_21 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            for (unsigned char i_23 = 2; i_23 < 12; i_23 += 4) 
            {
                for (unsigned int i_24 = 0; i_24 < 16; i_24 += 3) 
                {
                    {
                        var_49 = ((/* implicit */short) ((unsigned short) arr_68 [i_22]));
                        var_50 = (_Bool)1;
                        var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [i_23 - 2] [i_22] [i_23])) ? (arr_71 [i_23 + 2] [i_22] [i_23 + 3]) : (arr_71 [i_23 - 1] [i_22] [i_22])));
                    }
                } 
            } 
        } 
        var_52 = ((/* implicit */long long int) ((unsigned int) arr_67 [i_21]));
        /* LoopSeq 3 */
        for (unsigned int i_25 = 1; i_25 < 14; i_25 += 4) 
        {
            arr_78 [(signed char)10] [i_25] [(signed char)10] = (-(4801608093202232420ULL));
            var_53 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_11))))));
        }
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            var_54 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
            var_55 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_69 [i_21] [i_26] [(_Bool)1]))));
        }
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            arr_84 [(_Bool)1] [i_21] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_62 [i_21] [i_27]))));
            var_56 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_69 [i_21] [i_21] [12U])))))));
        }
    }
}
