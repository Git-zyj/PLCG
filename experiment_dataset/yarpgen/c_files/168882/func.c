/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168882
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
    var_11 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((_Bool) arr_0 [(unsigned short)7] [i_0])) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))))) > (min(((+(((/* implicit */int) var_10)))), (((/* implicit */int) arr_1 [i_0]))))));
        var_12 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_13 |= ((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */short) min((var_1), ((_Bool)1)))), (min((((/* implicit */short) (_Bool)1)), (var_3)))))), (max((((/* implicit */unsigned int) ((_Bool) arr_9 [(short)14] [(_Bool)1] [(_Bool)1] [i_0]))), (((((/* implicit */_Bool) 4294967276U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_9)))))));
                        var_14 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_0] [i_1] [i_3 + 1])) ? (((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 2])))), (((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        var_15 = ((/* implicit */unsigned short) var_8);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (short i_4 = 2; i_4 < 23; i_4 += 2) 
            {
                var_16 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1]))) & (var_2))) < (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-29664)))))));
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned short)28946)) ? (((/* implicit */int) arr_11 [(unsigned short)12] [(unsigned short)12] [i_4])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) (short)29483))))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((19U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4 + 1] [i_0] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_0] [i_4] [i_4])) : (((/* implicit */int) (signed char)111)))) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 1] [i_1 + 1]))))));
            }
            for (signed char i_5 = 1; i_5 < 23; i_5 += 2) 
            {
                var_18 ^= (-(((/* implicit */int) ((unsigned short) var_7))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((signed char) var_8))), (arr_6 [15ULL] [i_1 + 1] [i_5 + 1])))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_5]))))))) : (((unsigned int) (short)-16373))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))));
                        var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1 + 1] [i_1] [i_5 - 1]))) : (16621878128827495084ULL)));
                    }
                    var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0])) < (var_6))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)9854)) : (2068520169))) : (((/* implicit */int) var_1))));
                }
            }
            for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    var_23 = ((/* implicit */unsigned short) ((max((var_6), (((/* implicit */int) arr_11 [i_1 + 2] [i_1 + 2] [i_9])))) >= (((var_1) ? (var_8) : (((/* implicit */int) (_Bool)1))))));
                    arr_24 [i_0] [i_0] [i_8] [i_9] = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))), (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))))));
                }
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_31 [i_1] [i_0] [(short)20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_1)), (arr_20 [(_Bool)1] [i_1 + 2] [i_1 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4294967283U)) && (((/* implicit */_Bool) (unsigned short)27131))))) : (((/* implicit */int) ((unsigned short) arr_20 [1U] [i_1 + 2] [i_1 + 2])))));
                            arr_32 [i_0] [i_1] [i_8] [i_8] [i_0] = ((/* implicit */signed char) ((4294967286U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_0] [i_10] [i_1])))));
                            arr_33 [i_10] [i_1] [i_8] [i_0] [i_8] [i_1] = ((/* implicit */signed char) 4294967285U);
                        }
                    } 
                } 
            }
            var_24 = ((/* implicit */int) max((var_24), ((-(((/* implicit */int) (short)-32704))))));
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (short)-32699))) / (4294967295U)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) : (((min((((/* implicit */unsigned long long int) var_3)), (var_5))) / (((/* implicit */unsigned long long int) 4294967283U))))));
        }
        /* LoopNest 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned char i_13 = 3; i_13 < 23; i_13 += 2) 
            {
                for (long long int i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    {
                        arr_43 [7] [i_0] [i_13 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) max((min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (var_2))), (((/* implicit */unsigned int) ((_Bool) (_Bool)1))))), (((/* implicit */unsigned int) var_6))));
                        arr_44 [i_0] [i_0] [(short)20] [(unsigned short)11] [(unsigned short)11] [i_14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((12U) - (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((((/* implicit */_Bool) arr_15 [i_0] [i_12] [i_0] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_7))))))));
                        arr_45 [i_14] [i_13] [i_0] [(signed char)18] [i_0] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) max(((short)-18830), (arr_2 [i_0] [i_12])))), (((((/* implicit */_Bool) var_8)) ? (arr_27 [i_0] [i_13] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) max((((unsigned int) var_5)), (((/* implicit */unsigned int) max(((short)-26612), (((/* implicit */short) (signed char)3))))))))));
                        arr_46 [i_13] [i_12] [i_0] [i_0] [3U] = ((/* implicit */short) ((_Bool) var_3));
                        arr_47 [i_14] [i_13 - 1] [i_0] [i_12] [(unsigned short)18] = ((/* implicit */signed char) (((~(4294967276U))) == (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)18835)) ? (-1023942028) : (((/* implicit */int) var_0)))), ((((_Bool)1) ? (var_6) : (((/* implicit */int) (unsigned short)63663)))))))));
                    }
                } 
            } 
        } 
        arr_48 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((max((-8911716364606685268LL), (((/* implicit */long long int) (_Bool)1)))) < (((/* implicit */long long int) ((((/* implicit */_Bool) 2068958198U)) ? (var_6) : (((/* implicit */int) (_Bool)1)))))))), (min((((/* implicit */unsigned short) ((unsigned char) 8048253442328195594ULL))), (arr_6 [i_0] [i_0] [i_0])))));
    }
    for (unsigned long long int i_15 = 2; i_15 < 9; i_15 += 2) 
    {
        var_26 = min((((unsigned short) arr_34 [i_15] [i_15 - 2])), (((unsigned short) arr_34 [i_15] [i_15])));
        var_27 *= ((/* implicit */long long int) (_Bool)1);
    }
    for (unsigned int i_16 = 0; i_16 < 15; i_16 += 2) 
    {
        arr_55 [i_16] = ((((/* implicit */_Bool) (short)22229)) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((((/* implicit */int) var_0)) + (((/* implicit */int) (_Bool)1))))))));
        var_28 = ((/* implicit */signed char) (-(max((8048253442328195614ULL), (((/* implicit */unsigned long long int) var_6))))));
        arr_56 [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) < (max((((/* implicit */unsigned int) var_6)), (var_7)))))) : ((+(-797303443)))));
    }
    /* vectorizable */
    for (unsigned short i_17 = 0; i_17 < 21; i_17 += 2) 
    {
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_4 [i_17])) & (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) var_9)))))))));
        arr_59 [(unsigned short)16] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)255))))));
        arr_60 [18ULL] [i_17] = ((/* implicit */long long int) var_5);
        /* LoopSeq 2 */
        for (short i_18 = 2; i_18 < 20; i_18 += 2) 
        {
            var_30 = ((/* implicit */_Bool) ((arr_27 [i_17] [i_17] [i_17] [i_18]) / (((/* implicit */unsigned long long int) var_6))));
            /* LoopSeq 2 */
            for (unsigned short i_19 = 0; i_19 < 21; i_19 += 3) 
            {
                arr_67 [(unsigned short)5] [i_18] = ((/* implicit */long long int) var_3);
                /* LoopSeq 3 */
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    arr_71 [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((4294967295U) / (461764859U)))) ? (1917216231U) : (2769322508U)));
                    /* LoopSeq 3 */
                    for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((4294967272U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >> (((((/* implicit */int) (unsigned short)5041)) - (5027))))))));
                        var_32 = arr_39 [i_17] [i_18] [i_18];
                        arr_75 [i_21] [i_20] [i_20] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_73 [19U] [i_18] [i_18 - 2] [(_Bool)1] [i_20 - 1] [i_21 + 1] [i_18])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)0))));
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_42 [i_17] [i_20] [i_19] [i_20]))));
                        arr_80 [(short)2] [i_18] [i_17] [i_18] [i_18 - 1] [i_20] = ((/* implicit */int) var_2);
                        arr_81 [i_20] [i_20] [i_19] [9] [i_18] [i_20] = ((/* implicit */signed char) (((_Bool)1) ? ((~(((/* implicit */int) arr_77 [i_17] [i_20] [i_19] [i_20] [i_20] [i_20] [i_22])))) : (((/* implicit */int) arr_6 [i_17] [i_18 - 1] [i_22]))));
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_34 -= (+(((/* implicit */int) arr_35 [i_18])));
                        var_35 = ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) -797303443)))) & (1917216258U)));
                    }
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_4)))) ? ((+(var_7))) : (((/* implicit */unsigned int) 312220445))));
                }
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (-797303443)));
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_20 [i_17] [i_18] [i_24])) : (((/* implicit */int) arr_21 [i_17] [i_19] [i_24])))) : (((/* implicit */int) arr_2 [i_18] [i_18 - 1]))));
                }
                for (int i_25 = 1; i_25 < 20; i_25 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_26 = 0; i_26 < 21; i_26 += 4) 
                    {
                        arr_92 [i_26] [(signed char)1] [(signed char)1] [i_18] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) arr_40 [22U] [i_18] [i_18] [22U])) ? (((/* implicit */int) arr_40 [i_17] [i_26] [i_19] [i_25])) : (((/* implicit */int) arr_40 [i_17] [i_26] [i_19] [(short)10]))));
                        var_39 = ((/* implicit */int) (-(((unsigned int) var_5))));
                    }
                    arr_93 [i_25] [i_19] [i_18] [i_18] [17U] [i_17] = ((/* implicit */_Bool) ((var_10) ? (2377751071U) : (((/* implicit */unsigned int) (~(var_6))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_27 = 0; i_27 < 21; i_27 += 3) 
                    {
                        arr_96 [i_27] = ((/* implicit */short) var_9);
                        arr_97 [i_27] [i_18 - 1] [(short)1] [i_18] [i_18] [(short)7] = ((/* implicit */unsigned char) ((unsigned int) var_3));
                        var_40 = ((/* implicit */long long int) (((+(((/* implicit */int) (short)32739)))) == (((((/* implicit */_Bool) 312220462)) ? (((/* implicit */int) var_3)) : (var_8)))));
                        var_41 |= ((/* implicit */signed char) (+(865592276)));
                    }
                }
                arr_98 [i_17] [i_17] [1] [i_19] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_17] [i_17] [i_18] [i_18] [i_19]))) * (var_5))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_17] [i_18] [i_19])))));
            }
            for (short i_28 = 1; i_28 < 19; i_28 += 2) 
            {
                arr_101 [i_28] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (unsigned short)65534))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)27411)) ? (((/* implicit */int) (short)-11475)) : (797303442)))) : (((568391485U) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                /* LoopSeq 1 */
                for (short i_29 = 0; i_29 < 21; i_29 += 4) 
                {
                    arr_106 [i_17] [i_18] [i_18] [i_28] [i_28] [(short)0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_63 [i_18 - 2] [i_18 - 2])) ? (((/* implicit */int) arr_104 [i_18 + 1] [i_18 - 1] [i_18 - 1] [i_18 + 1] [i_18 + 1])) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (_Bool i_30 = 0; i_30 < 0; i_30 += 1) 
                    {
                        var_42 = ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)25145)) : (((/* implicit */int) (unsigned short)36710)));
                        arr_109 [(unsigned char)5] [i_30 + 1] [i_29] [(_Bool)1] [i_18] [(_Bool)1] = ((/* implicit */unsigned short) var_1);
                    }
                    for (unsigned short i_31 = 0; i_31 < 21; i_31 += 2) 
                    {
                        var_43 ^= ((/* implicit */unsigned short) (+(arr_79 [i_28 - 1] [i_28 + 1] [i_28 + 2] [i_28 + 2] [i_18])));
                        var_44 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_28 + 2] [i_18] [i_18 - 2]))));
                        arr_113 [i_17] [i_18 + 1] [i_18 - 2] [(short)8] [(_Bool)1] = ((/* implicit */short) (~(arr_25 [i_17] [i_18 - 1] [i_17] [i_31])));
                    }
                    arr_114 [(_Bool)1] [(_Bool)1] [5ULL] [i_29] = ((/* implicit */signed char) arr_25 [i_17] [i_28 + 2] [i_17] [(_Bool)1]);
                }
            }
        }
        for (int i_32 = 0; i_32 < 21; i_32 += 1) 
        {
            arr_119 [i_32] [i_32] [i_17] = (!(((/* implicit */_Bool) 5676119355601140479LL)));
            var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((signed char) -5676119355601140464LL)))));
            arr_120 [i_17] [i_32] = ((/* implicit */signed char) var_5);
            var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) ((var_8) ^ (arr_22 [i_17]))))));
            arr_121 [(short)10] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-59)) ? (var_8) : (((/* implicit */int) var_10))));
        }
    }
}
