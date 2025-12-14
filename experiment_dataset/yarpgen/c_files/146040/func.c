/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146040
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
    var_13 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) (+(-1542343405594684124LL)));
        var_15 = ((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0]));
        var_16 = ((/* implicit */unsigned int) ((1542343405594684133LL) & (1542343405594684140LL)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) 13564056015352073661ULL);
        var_17 = ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14))) : (arr_3 [i_1]));
        var_18 = ((/* implicit */_Bool) 1542343405594684124LL);
    }
    /* LoopSeq 4 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_7 [i_2] [i_2]))), (((/* implicit */unsigned long long int) (unsigned short)2))));
        arr_10 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((+(var_11))) >> (((max((((/* implicit */unsigned int) arr_9 [i_2])), (3122881249U))) - (3122881231U))))))));
    }
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            var_20 = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) 2147483647)) ? (1053038772U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52038))))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_11 [i_3])))))));
            /* LoopSeq 1 */
            for (unsigned int i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_6 = 3; i_6 < 23; i_6 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        arr_23 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_5])) ? (((/* implicit */long long int) var_6)) : (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_3] [i_5 - 1] [i_3] [i_3] [i_6 + 1]))) : (var_2)));
                        var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1757083697791517745ULL)) ? (691646855412369529ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65522)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)115)))));
                    }
                    for (unsigned int i_8 = 1; i_8 < 23; i_8 += 2) 
                    {
                        var_23 |= min((arr_11 [i_3]), (((/* implicit */unsigned short) arr_19 [(unsigned short)2])));
                        arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] = ((unsigned int) (-9223372036854775807LL - 1LL));
                    }
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        arr_29 [i_4] [i_4] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2125327667U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1542343405594684151LL)));
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_17 [i_9])), (5434796808464398694ULL)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_9]))))) : (max((((/* implicit */unsigned int) arr_17 [i_9])), (var_9))))))));
                    }
                    var_25 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1172086054U)) ? (var_7) : (((/* implicit */int) (_Bool)1))))) / (arr_8 [i_3] [i_6]))), (((((/* implicit */_Bool) 5905110568726475750ULL)) ? (16689660375918033889ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44366)))))));
                    arr_30 [i_5] [i_4] [i_5] [i_6] [i_3] [i_6] = ((/* implicit */unsigned short) (-(9223372036854775807LL)));
                    arr_31 [i_3] [i_6] [(unsigned short)23] [4ULL] [i_3] [i_3] = arr_22 [i_3] [i_4] [i_3] [i_4] [i_4];
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 3; i_10 < 23; i_10 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) arr_20 [i_10] [i_10 - 1] [i_10 + 1] [i_10 - 2] [i_10]))));
                        arr_34 [i_3] [i_3] [6ULL] [i_3] [i_10] = ((/* implicit */unsigned long long int) arr_19 [i_3]);
                        var_27 = ((/* implicit */unsigned short) (unsigned char)123);
                        arr_35 [i_3] [i_6] [i_5] [i_4] [i_3] = ((/* implicit */int) max((((/* implicit */long long int) arr_21 [i_6 + 1] [i_3] [i_3] [i_4])), (1988424423777777041LL)));
                    }
                }
                var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)17))));
            }
        }
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) 4886601079187463958LL))));
        var_30 = ((/* implicit */unsigned short) var_8);
    }
    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
    {
        arr_38 [i_11] = ((/* implicit */unsigned long long int) var_7);
        /* LoopSeq 3 */
        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 3) 
        {
            var_31 = ((/* implicit */signed char) arr_21 [i_11] [i_12] [i_11] [4ULL]);
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 24; i_13 += 4) 
            {
                for (unsigned short i_14 = 1; i_14 < 21; i_14 += 4) 
                {
                    {
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_8)))))));
                        var_33 = ((/* implicit */unsigned int) min(((unsigned short)58490), (((/* implicit */unsigned short) (_Bool)1))));
                    }
                } 
            } 
            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_11] [i_11] [i_12] [i_12] [i_12])) ? (max((((/* implicit */unsigned long long int) arr_42 [i_11] [i_11] [i_11])), (5905110568726475750ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_11] [(unsigned short)21] [i_12])))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_1))))) : (-8453526377156733066LL))))));
            arr_48 [i_12] [i_11] [i_11] = ((/* implicit */unsigned long long int) var_4);
            var_35 *= ((/* implicit */int) (!(((/* implicit */_Bool) -1988424423777777041LL))));
        }
        for (unsigned int i_15 = 1; i_15 < 21; i_15 += 3) 
        {
            var_36 -= ((/* implicit */unsigned short) var_8);
            /* LoopSeq 2 */
            for (unsigned short i_16 = 4; i_16 < 22; i_16 += 2) 
            {
                var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) arr_50 [(unsigned short)0] [i_11]))));
                var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_36 [i_15 + 3] [i_16 - 2])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)33454))))) : (((((/* implicit */_Bool) arr_7 [i_15 - 1] [i_15 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) -1162903383))))))));
            }
            /* vectorizable */
            for (int i_17 = 0; i_17 < 24; i_17 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_18 = 1; i_18 < 22; i_18 += 4) 
                {
                    arr_61 [i_11] [i_11] [i_11] [i_18] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)35))));
                    var_39 = -1LL;
                }
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                {
                    arr_64 [i_11] [i_11] = ((/* implicit */unsigned short) ((arr_25 [i_19 - 1] [i_19 - 1]) != (arr_25 [i_19 - 1] [i_19 - 1])));
                    arr_65 [i_11] [i_15 + 3] [i_15] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_15 + 2] [i_15 + 2])) ? (arr_32 [i_15 + 2] [i_15] [i_15 + 2] [i_11] [i_15]) : (arr_32 [i_15 + 3] [i_15 + 3] [i_15 + 3] [i_11] [20])));
                    var_40 = ((/* implicit */unsigned int) ((unsigned short) 4053326274U));
                }
                for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_21 = 1; i_21 < 22; i_21 += 2) 
                    {
                        var_41 = ((/* implicit */long long int) 916684913312854395ULL);
                        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) arr_69 [i_11] [i_17] [i_17] [i_11] [i_17]))));
                    }
                    arr_71 [i_11] [i_15] = ((/* implicit */unsigned short) ((arr_70 [i_20] [i_15] [(_Bool)1] [i_20] [i_17]) / (((/* implicit */unsigned long long int) arr_28 [(unsigned short)19] [i_11] [i_15] [i_17] [i_20]))));
                }
                var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) arr_21 [i_11] [i_11] [i_17] [i_17]))));
                arr_72 [i_11] = ((/* implicit */unsigned long long int) ((1988424423777777058LL) * (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_15 + 2] [i_15 + 2])))));
                arr_73 [i_11] = ((long long int) arr_43 [i_11] [i_15 + 1] [i_17]);
            }
            arr_74 [i_11] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((~(var_7))))))));
            arr_75 [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) 4246673630784865128ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)));
        }
        /* vectorizable */
        for (unsigned short i_22 = 3; i_22 < 22; i_22 += 2) 
        {
            var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) 2602036016U))));
            var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [10ULL]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_11] [i_22] [i_11] [i_22 - 1] [i_11]))) : (((((/* implicit */_Bool) 2583886006U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_11]))) : (var_11)))));
            var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_57 [8LL] [(_Bool)1] [(unsigned short)20] [i_11])) ? (arr_25 [i_22 - 1] [i_22]) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_63 [14U] [i_22] [14U] [22LL] [12U] [i_22]))))))))));
        }
        /* LoopNest 3 */
        for (unsigned int i_23 = 1; i_23 < 23; i_23 += 3) 
        {
            for (long long int i_24 = 0; i_24 < 24; i_24 += 4) 
            {
                for (unsigned short i_25 = 0; i_25 < 24; i_25 += 3) 
                {
                    {
                        var_47 = ((/* implicit */unsigned long long int) (+((~(max((2539655291U), (((/* implicit */unsigned int) var_1))))))));
                        arr_84 [i_11] [1LL] [i_23] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (!(((/* implicit */_Bool) 8070004761205102846LL)))))));
                        var_48 = ((/* implicit */unsigned short) var_6);
                        var_49 = ((/* implicit */long long int) (((-(min((((/* implicit */unsigned long long int) -9223372036854775793LL)), (arr_44 [i_11] [i_23] [i_24] [i_11] [i_11] [7U]))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (-9223372036854775807LL - 1LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_25])))))));
                    }
                } 
            } 
        } 
        var_50 = ((/* implicit */unsigned short) var_9);
    }
    /* vectorizable */
    for (unsigned short i_26 = 0; i_26 < 24; i_26 += 3) /* same iter space */
    {
        arr_87 [i_26] = ((/* implicit */unsigned long long int) ((unsigned int) var_2));
        var_51 &= var_11;
        arr_88 [i_26] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 21LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)30386))))));
        var_52 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))));
    }
    var_53 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
}
