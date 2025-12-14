/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137916
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */unsigned char) var_6);
                        var_12 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) min((var_9), (((/* implicit */int) (signed char)116))))), (var_1)))));
                        arr_9 [(signed char)4] [i_1] [(signed char)4] [i_1] [i_2] [(signed char)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2038365759)) ? (((/* implicit */int) ((unsigned short) (short)-20273))) : (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_7))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_4 = 1; i_4 < 8; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_5] [i_4 + 2] [i_4 + 1] [i_4 - 1])), (var_2)))) ^ ((-(((/* implicit */int) var_4))))));
                        var_14 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_5])))))) + (min((((/* implicit */unsigned int) var_9)), (var_3))))))));
                    }
                } 
            } 
        }
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            var_15 = ((/* implicit */_Bool) arr_14 [i_0] [i_6]);
            arr_16 [9] = ((/* implicit */short) arr_13 [i_0]);
        }
        var_16 ^= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [(signed char)0])) ? (var_1) : (var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3781372456U)) && (((/* implicit */_Bool) 3781372475U))))) : (min((((/* implicit */int) (short)-16864)), (var_7))))), (var_9));
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (var_1)))) ? (max((3839108727U), (((/* implicit */unsigned int) var_6)))) : (min((((/* implicit */unsigned int) var_2)), (arr_10 [i_0] [i_0] [i_0] [i_0])))));
    }
    for (int i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        var_17 += ((/* implicit */unsigned short) var_1);
        var_18 = ((/* implicit */unsigned short) max((max((((/* implicit */int) arr_19 [i_7] [i_7])), (var_9))), (((((/* implicit */int) (unsigned short)23846)) % (((/* implicit */int) var_0))))));
        arr_20 [i_7] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3781372459U))));
    }
    /* LoopSeq 1 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8] [11] [i_9])) ? (((/* implicit */int) var_4)) : (var_6)))) ? (((/* implicit */int) min(((short)-29360), (((/* implicit */short) (signed char)-27))))) : (803802384))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_11 - 1])))))));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((_Bool) ((((/* implicit */int) (short)(-32767 - 1))) % (((/* implicit */int) arr_28 [i_11 - 1]))))))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) 806597106)) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_0)) + (67)))))))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_10))));
        }
        for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) ((2872030198U) & (((/* implicit */unsigned int) (((_Bool)1) ? (((var_7) << (((var_7) - (457334667))))) : (((/* implicit */int) min(((short)29360), ((short)32758)))))))));
            arr_33 [i_8] [i_12] = ((/* implicit */signed char) min((((/* implicit */unsigned int) max(((signed char)-99), (((/* implicit */signed char) (_Bool)1))))), (4226931240U)));
        }
        for (int i_13 = 3; i_13 < 19; i_13 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_14 = 0; i_14 < 20; i_14 += 1) 
            {
                var_24 = min((4226931240U), ((-(((((/* implicit */_Bool) var_5)) ? (3829396952U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                arr_39 [i_8] [i_8] = ((/* implicit */int) (+(((unsigned int) var_1))));
                var_25 = ((/* implicit */signed char) max((var_3), (((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned long long int) arr_29 [(signed char)14])), (18446744073709551615ULL)))))));
                var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_24 [(unsigned short)8])))))) ? (var_9) : ((+(((/* implicit */int) ((unsigned short) arr_21 [i_8] [i_13])))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_15 = 2; i_15 < 19; i_15 += 3) 
                {
                    arr_42 [13] [i_13] [i_14] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) min((var_2), (var_2))))))) ? (((/* implicit */int) (short)29366)) : (((int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_10)))))));
                    arr_43 [i_15] [i_15] = ((/* implicit */unsigned short) arr_30 [i_15] [i_15]);
                    var_27 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_41 [5U] [(_Bool)1] [5U] [i_15])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_3) : (var_1)))) : (((((/* implicit */_Bool) var_4)) ? (8280639057012026500ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_15])))))))));
                }
            }
            for (unsigned int i_16 = 3; i_16 < 19; i_16 += 1) 
            {
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_13 - 3] [(short)6]))) + (arr_37 [14ULL] [i_16 - 2] [i_16] [i_13 + 1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [12ULL] [i_16]))))) : ((-(((/* implicit */int) (unsigned short)41694)))))))));
                arr_48 [i_8] [i_13] [i_16] = (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65521))) : (min((18U), (((/* implicit */unsigned int) (unsigned char)159)))));
            }
            arr_49 [i_8] [i_13] [i_13] = var_5;
            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) var_10))));
            arr_50 [i_8] = ((/* implicit */unsigned short) ((min((arr_34 [i_13] [i_13 + 1] [i_8]), (var_3))) / (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned int i_17 = 3; i_17 < 19; i_17 += 4) 
        {
            var_30 = ((/* implicit */int) (unsigned short)15);
            var_31 = min(((((_Bool)1) ? (((/* implicit */int) (short)29360)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)23940)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) (signed char)-36)));
            /* LoopSeq 2 */
            for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
            {
                var_32 = ((/* implicit */unsigned char) (_Bool)1);
                /* LoopSeq 2 */
                for (unsigned int i_19 = 4; i_19 < 18; i_19 += 3) 
                {
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_19 + 2]))) - (var_5)))))) : (arr_23 [(_Bool)1] [(_Bool)1])));
                    var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                    var_35 ^= (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)208))))));
                    var_36 &= ((/* implicit */unsigned int) var_8);
                }
                for (unsigned char i_20 = 0; i_20 < 20; i_20 += 2) 
                {
                    var_37 = min((arr_54 [i_8] [(_Bool)1] [i_18 + 1] [16ULL]), (((/* implicit */unsigned long long int) -5709689595104474110LL)));
                    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((-(10166105016697525128ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 3829396952U)) >= (-1LL))))))) ? (817261) : (((/* implicit */int) (short)19820))));
                    arr_62 [i_18] = min(((+(((/* implicit */int) arr_60 [i_17 + 1] [(_Bool)1] [i_18 + 1] [i_18])))), ((~(((/* implicit */int) (_Bool)1)))));
                }
            }
            for (short i_21 = 0; i_21 < 20; i_21 += 1) 
            {
                var_39 = ((/* implicit */_Bool) (signed char)-121);
                /* LoopSeq 3 */
                for (signed char i_22 = 2; i_22 < 18; i_22 += 1) /* same iter space */
                {
                    arr_68 [i_22] [(unsigned short)1] = ((/* implicit */unsigned int) ((_Bool) var_4));
                    arr_69 [i_21] [i_17 - 2] [(_Bool)0] [(_Bool)0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)23)) ? (((/* implicit */int) ((((/* implicit */int) arr_41 [i_22] [i_21] [i_17 - 2] [i_8])) >= (((/* implicit */int) var_4))))) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (signed char)-122))));
                }
                /* vectorizable */
                for (signed char i_23 = 2; i_23 < 18; i_23 += 1) /* same iter space */
                {
                    var_40 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) 68036048U)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_24 = 0; i_24 < 20; i_24 += 4) 
                    {
                        arr_76 [i_8] [i_17 - 1] [i_17] [i_21] [i_23] [i_23] = ((/* implicit */unsigned char) (unsigned short)23953);
                        var_41 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_7)) ? (arr_36 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                        var_42 = ((/* implicit */unsigned int) ((unsigned char) arr_73 [i_24] [14U] [(short)17] [(short)17] [(short)17] [(short)17]));
                        arr_77 [i_24] [i_8] [(short)4] [i_17] [i_8] [i_8] = ((/* implicit */_Bool) var_6);
                    }
                    for (unsigned int i_25 = 0; i_25 < 20; i_25 += 1) 
                    {
                        arr_80 [i_17 - 3] [i_17] [i_21] [i_23 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [11] [(signed char)12] [i_21] [i_25]))) : (arr_52 [1] [i_21] [(_Bool)1])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((_Bool) var_7)))));
                        var_43 *= ((/* implicit */unsigned int) var_8);
                        var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_5)) ? (var_7) : (var_7))))))));
                        var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) ((4294967295U) >= (var_1))))));
                    }
                }
                for (int i_26 = 0; i_26 < 20; i_26 += 1) 
                {
                    var_46 = ((signed char) ((((/* implicit */int) ((unsigned short) var_3))) ^ (((/* implicit */int) var_2))));
                    arr_83 [(unsigned char)2] [i_21] [i_17 - 3] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (205963279801920907LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) > ((~(((/* implicit */int) var_4))))))))));
                    var_47 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (((unsigned int) var_6))))) ? (((/* implicit */int) max((arr_30 [(_Bool)1] [i_17 - 2]), (arr_30 [4U] [i_17 - 2])))) : (((/* implicit */int) (!((_Bool)0))))));
                    var_48 ^= ((/* implicit */unsigned int) (((~(((/* implicit */int) (!(((/* implicit */_Bool) 3562953979451244072ULL))))))) > (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)11))))));
                }
                /* LoopNest 2 */
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    for (long long int i_28 = 2; i_28 < 19; i_28 += 4) 
                    {
                        {
                            var_49 = ((/* implicit */unsigned int) min((var_6), (((/* implicit */int) var_10))));
                            var_50 = ((/* implicit */int) var_10);
                            var_51 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((1722223843U), (1745223774U)))) ? (((((/* implicit */_Bool) 1745223788U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-108))) : (2644152520123462448ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-23629))) != (-3474303275226937321LL)))))));
                            var_52 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((short) (-(arr_78 [i_8] [i_17 - 1] [i_8] [i_8]))))), ((-(((((/* implicit */_Bool) 1993898070)) ? (465570374U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
            }
        }
        var_53 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(var_6)))) != (((unsigned long long int) ((_Bool) (signed char)108)))));
        arr_90 [i_8] [i_8] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (signed char)-102)))), (((/* implicit */int) max((var_8), (((/* implicit */unsigned char) arr_27 [i_8] [i_8] [i_8])))))));
    }
    var_54 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_0)), (((((/* implicit */long long int) ((var_9) ^ (((/* implicit */int) (unsigned short)23935))))) & ((~(-3474303275226937321LL)))))));
}
