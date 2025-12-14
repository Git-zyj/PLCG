/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112164
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) min((min(((~(var_9))), (((/* implicit */int) (!(((/* implicit */_Bool) 16408312462322776444ULL))))))), (((/* implicit */int) ((short) ((unsigned long long int) arr_1 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_0 [i_1]))));
            arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 16408312462322776444ULL)))))) : ((~(var_16)))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_3)))) ? (min((((/* implicit */unsigned long long int) arr_2 [i_2])), (16408312462322776438ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    arr_15 [i_2] [8LL] [i_2] [5U] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [(short)9] [i_2] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_17), (((/* implicit */unsigned short) arr_4 [i_0] [i_2] [i_3])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_2] [i_2]))) + (var_7)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (var_6)))));
                        arr_20 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_2))))) : ((~(16408312462322776443ULL)))));
                    }
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                    {
                        arr_24 [i_2] [i_1] [i_2] = ((/* implicit */short) (~(arr_8 [i_2] [i_2] [i_3])));
                        arr_25 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2] [i_2])))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (16408312462322776461ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))))) || (((/* implicit */_Bool) arr_22 [i_5] [i_3] [i_2] [i_0] [i_0]))));
                        arr_26 [i_2] [i_3] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) (!((_Bool)1)))), (min((var_9), (((/* implicit */int) var_2)))))))));
                        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (2038431611386775147ULL))) * (var_16)));
                    }
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) var_14)), (2038431611386775164ULL))), ((~(17062652088125946342ULL)))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_0 [i_1]), (min((((/* implicit */int) var_4)), (796282531)))))) ? (min((16408312462322776444ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_14 [i_3] [i_2] [i_2] [i_0])), (-2643905690996521960LL)))))) : (var_16)));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), ((-(((((/* implicit */_Bool) arr_18 [i_6] [i_3] [(short)8] [(short)8] [i_1] [i_0])) ? (17062652088125946334ULL) : (((/* implicit */unsigned long long int) var_9))))))));
                    }
                    var_25 = ((/* implicit */short) var_8);
                    var_26 = ((/* implicit */unsigned short) min((var_3), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_15), (((/* implicit */short) var_2))))))))));
                    var_27 *= (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 1384091985583605266ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_17)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))))));
                }
                for (long long int i_7 = 1; i_7 < 10; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_8 = 1; i_8 < 9; i_8 += 1) 
                    {
                        arr_34 [i_0] [i_2] [i_2] [i_7] [i_8] = ((/* implicit */short) var_13);
                        arr_35 [i_1] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */short) min((min((((/* implicit */long long int) var_0)), (arr_21 [(unsigned char)4] [i_1] [i_1] [i_7 - 1] [i_7]))), (((((/* implicit */_Bool) 16408312462322776439ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_21 [i_1] [i_7 + 2] [i_7 + 2] [i_7 - 1] [i_8])))));
                    }
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (+((~(((/* implicit */int) var_14)))))))));
                    arr_36 [i_0] [i_2] [i_1] [6ULL] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 1384091985583605273ULL)) ? (arr_21 [i_7 + 2] [i_7 + 2] [i_7 - 1] [i_7] [i_7]) : (((/* implicit */long long int) arr_13 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7] [i_7 + 1])))));
                    var_29 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (1384091985583605286ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((/* implicit */long long int) ((/* implicit */int) (short)-24193))) + (arr_6 [i_7 + 1] [i_7 + 2])))));
                }
                for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    var_30 += ((/* implicit */unsigned char) (!((((!(((/* implicit */_Bool) var_16)))) && (((/* implicit */_Bool) arr_22 [i_9] [i_9] [i_2] [i_1] [i_0]))))));
                    var_31 = ((short) min((((/* implicit */unsigned long long int) max((var_9), (arr_0 [i_0])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_2]))) + (var_16)))));
                    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (!(((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_1 [i_9])))))))));
                }
                for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */long long int) var_5)))), (arr_21 [i_0] [i_1] [i_2] [i_10] [i_10])))) ? (min(((~(var_3))), (16408312462322776439ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    /* LoopSeq 2 */
                    for (short i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        var_34 = ((/* implicit */signed char) min((((/* implicit */int) ((((((/* implicit */unsigned long long int) var_13)) < (1384091985583605281ULL))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-99))))))))), (((((/* implicit */int) (short)-24193)) % (((/* implicit */int) var_17))))));
                        var_35 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_2])) == (((/* implicit */int) arr_42 [i_11] [i_10] [6U] [i_0])))))));
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 10; i_12 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) arr_45 [i_1] [i_2] [i_12 - 1])) < (((/* implicit */int) arr_46 [i_10] [i_12 - 1] [i_12 + 1] [i_12 + 2] [i_12 + 2]))))));
                        var_37 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_38 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 2] [i_12] [i_12 + 2])))))));
                    }
                    var_38 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4828))) != (var_3));
                    arr_50 [i_2] [i_10] [i_2] [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) var_17);
                    var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((_Bool) ((long long int) arr_28 [i_10]))))));
                }
                var_40 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (+(var_13)))) ? (min((var_16), (((/* implicit */unsigned long long int) (short)-29628)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) || (((/* implicit */_Bool) var_12)))))))));
            }
            for (short i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                var_41 -= ((/* implicit */short) ((min((var_11), (arr_14 [i_13] [(unsigned short)2] [(unsigned short)2] [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) var_17)) <= (((/* implicit */int) (short)18405))))) : (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 4 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) min((16408312462322776435ULL), (((((/* implicit */_Bool) max((17062652088125946343ULL), (((/* implicit */unsigned long long int) (short)-922))))) ? (((1384091985583605254ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)199))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) var_14)) - (60915)))))))))))));
                    var_43 -= (short)-18406;
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    var_44 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_17 [i_15] [i_13] [i_1] [i_1] [i_0]))) - (((/* implicit */int) min((((/* implicit */unsigned short) (short)-18382)), (var_17))))));
                    var_45 = ((/* implicit */long long int) 3585540025U);
                    arr_57 [i_1] [i_1] [i_15] = ((/* implicit */unsigned char) max((var_6), (min((max((((/* implicit */unsigned long long int) var_14)), (2038431611386775176ULL))), (((/* implicit */unsigned long long int) arr_40 [i_15] [i_13] [i_1] [i_0]))))));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    var_46 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) min((((/* implicit */signed char) var_10)), (var_4)))) : (((/* implicit */int) max(((short)25546), ((short)-18424))))))) ? (var_7) : ((-(((((/* implicit */_Bool) (unsigned short)16256)) ? (3878886964U) : (((/* implicit */unsigned int) -764159607))))))));
                    var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */int) min((var_11), (var_10)))) < (((((/* implicit */_Bool) arr_56 [i_16] [i_16] [i_13] [i_1] [i_1] [i_0])) ? (((/* implicit */int) (short)921)) : (((/* implicit */int) (signed char)-80))))))) : ((+(((/* implicit */int) var_8))))));
                    arr_60 [i_0] [i_13] [i_16] [i_16] [i_16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_11)), ((signed char)79)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) <= (var_13)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)4095))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_3) + (8444809978158964251ULL)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (var_5)))))))) : (var_13));
                }
                for (unsigned int i_17 = 0; i_17 < 12; i_17 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_18 = 2; i_18 < 11; i_18 += 1) 
                    {
                        var_48 -= ((/* implicit */unsigned int) arr_42 [i_0] [i_1] [i_18] [i_17]);
                        var_49 -= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35431))) & (1658613611U)))) | (((((/* implicit */_Bool) var_0)) ? (15549458329075270830ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (1384091985583605261ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), ((unsigned short)65535)))))))));
                        var_50 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [8] [(_Bool)0])) ? (var_13) : (((/* implicit */long long int) var_5))))) ? (1384091985583605258ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_18] [11] [i_1] [i_0])))));
                        var_51 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_52 -= ((/* implicit */short) min((min((((((/* implicit */_Bool) arr_9 [(short)0] [i_1] [i_17] [i_18])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_14 [i_18 - 1] [6ULL] [6ULL] [i_0])))), (((/* implicit */int) (short)32764)))), (((/* implicit */int) (_Bool)1))));
                    }
                    var_53 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_28 [i_0]))));
                    var_54 += ((/* implicit */signed char) arr_28 [i_0]);
                }
                var_55 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (1384091985583605258ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))), (min((10001934095550587373ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (((/* implicit */unsigned int) (-(((var_10) ? (((/* implicit */int) arr_62 [1U] [i_1] [i_13])) : (((/* implicit */int) var_17))))))) : (((unsigned int) (!(((/* implicit */_Bool) arr_51 [i_0] [i_0] [i_13] [i_13])))))));
                var_56 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2636353685U)) ? (((/* implicit */int) arr_42 [i_0] [i_1] [i_13] [i_13])) : (((/* implicit */int) (short)-11731)))))))), ((-(((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)12531))))))));
            }
        }
        arr_66 [i_0] = ((/* implicit */long long int) min((var_9), ((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [(unsigned short)8] [i_0])) : (((/* implicit */int) var_17))))))));
    }
    var_57 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) * (((((/* implicit */_Bool) (short)-23516)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))))))) : (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */int) min((var_12), (((/* implicit */short) var_0))))) : (((/* implicit */int) var_14))))));
}
