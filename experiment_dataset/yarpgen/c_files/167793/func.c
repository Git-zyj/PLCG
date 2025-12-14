/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167793
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? ((((-(3229528653U))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))) : (max((((3229528653U) & (1065438666U))), (3229528624U)))));
        arr_4 [i_0] = ((/* implicit */int) 1065438656U);
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) min((arr_7 [i_1 - 2] [i_1 - 2]), (((int) 1065438656U)))))));
            arr_9 [i_2] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_8 [(_Bool)1] [i_2]))))), (((1065438657U) / (min((3229528640U), (1065438656U)))))));
            /* LoopSeq 2 */
            for (long long int i_3 = 4; i_3 < 16; i_3 += 1) /* same iter space */
            {
                arr_12 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((((var_4) ^ (((/* implicit */long long int) 3229528620U)))) != (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2]))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_2] [(short)3])) && (var_0)))), (((((/* implicit */_Bool) 1065438649U)) ? (3229528654U) : (1065438647U))))) : (3229528654U)));
                arr_13 [i_1] [i_3] [i_3 - 1] [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(3229528647U)))) ? (((/* implicit */unsigned int) arr_2 [i_3 - 4])) : (((((/* implicit */_Bool) (unsigned char)6)) ? (1065438635U) : (1065438653U)))))));
            }
            for (long long int i_4 = 4; i_4 < 16; i_4 += 1) /* same iter space */
            {
                arr_18 [i_2] [14] = min((((/* implicit */long long int) 2895845833U)), (var_4));
                var_12 = ((/* implicit */unsigned short) arr_11 [i_1] [i_2] [i_4 - 1] [(unsigned short)8]);
            }
        }
        arr_19 [i_1 + 1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)17904), (((/* implicit */unsigned short) (unsigned char)250)))))) != (((((/* implicit */_Bool) 2895845835U)) ? (3229528630U) : (1065438665U)))));
        arr_20 [i_1] = (~(((/* implicit */int) (_Bool)1)));
        arr_21 [i_1 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)6)) >> (((2895845835U) - (2895845809U)))))) ^ (((((/* implicit */unsigned int) var_6)) % (3229528637U)))))) || (((/* implicit */_Bool) 2895845833U))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            var_13 = ((/* implicit */int) ((short) 6306073340535887179LL));
            /* LoopSeq 4 */
            for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                arr_29 [i_1] [i_5] = ((/* implicit */unsigned char) ((var_2) > (((/* implicit */int) arr_28 [i_1 - 1] [i_5] [i_5] [i_1 + 1]))));
                arr_30 [i_5] [i_5] [i_5] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)127))))) & (((((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_5])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15)))))));
                var_14 += ((/* implicit */unsigned short) (((+(((/* implicit */int) (short)-28446)))) < (((/* implicit */int) (short)28465))));
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    var_15 = var_8;
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_16 ^= ((/* implicit */_Bool) var_1);
                        arr_38 [i_1] [(_Bool)1] [i_1 - 1] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) || (var_0))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3229528646U)))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) ((((3229528664U) >= (((/* implicit */unsigned int) var_6)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)135))));
                        var_18 = ((/* implicit */long long int) (-(((/* implicit */int) (short)28428))));
                        var_19 = ((/* implicit */short) 9223372036854775807LL);
                    }
                    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        arr_44 [i_5] [i_10] [i_7] [(unsigned short)4] [(unsigned short)13] [(unsigned char)14] [i_5] = ((/* implicit */long long int) ((1065438658U) >= (1065438679U)));
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) arr_27 [i_10] [i_7] [(_Bool)1] [i_5])) : (((/* implicit */int) var_3))))) ? (((-9223372036854775807LL) | (((/* implicit */long long int) 3229528619U)))) : (((/* implicit */long long int) (-(var_6))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_11 = 3; i_11 < 16; i_11 += 4) 
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_46 [(_Bool)1] [i_1] [(unsigned char)0] [i_5] [i_1 - 2] [i_11] [i_11 - 2]))));
                        arr_47 [i_5] = ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)774)));
                        arr_48 [i_1] [i_6] [i_5] [i_7] [i_6] = ((/* implicit */long long int) arr_16 [i_1 - 1] [i_6] [i_1]);
                    }
                }
            }
            for (short i_12 = 0; i_12 < 17; i_12 += 3) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
                /* LoopSeq 2 */
                for (short i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_14 = 0; i_14 < 17; i_14 += 3) 
                    {
                        arr_57 [i_1] [(short)8] [i_12] [i_13] [i_14] [(unsigned short)0] [i_13] |= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */int) arr_17 [i_14] [i_5] [i_1 - 1]))));
                        arr_58 [i_1] [i_1] [i_5] [i_1] [i_13] [i_14] [i_14] = ((/* implicit */long long int) var_9);
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) 3229528616U)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
                        var_24 = ((/* implicit */int) (((-(((/* implicit */int) arr_46 [i_12] [i_13] [i_12] [i_5] [(short)12] [i_14] [i_5])))) != ((~(((/* implicit */int) var_7))))));
                        arr_59 [i_5] [i_5] [i_5] = ((/* implicit */short) (+(1065438658U)));
                    }
                    var_25 = (((~(((/* implicit */int) (unsigned char)193)))) != (arr_11 [5LL] [i_5] [i_12] [i_13]));
                }
                for (int i_15 = 1; i_15 < 16; i_15 += 1) 
                {
                    var_26 = ((/* implicit */unsigned char) (+(2101519750)));
                    var_27 = ((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)113)) * (((/* implicit */int) (unsigned char)103))))));
                    var_28 = ((((/* implicit */_Bool) (short)-18503)) || (((/* implicit */_Bool) (short)-790)));
                    /* LoopSeq 2 */
                    for (short i_16 = 2; i_16 < 16; i_16 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned char)1)))))))));
                        arr_66 [i_5] [16] [i_15 + 1] [i_16 - 1] = ((/* implicit */unsigned char) ((1065438658U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16256)))));
                        var_30 = ((/* implicit */_Bool) ((var_0) ? (var_4) : (((/* implicit */long long int) var_9))));
                        var_31 = ((var_4) == (((/* implicit */long long int) (~(((/* implicit */int) var_8))))));
                    }
                    for (int i_17 = 0; i_17 < 17; i_17 += 3) 
                    {
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? ((+(1065438676U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                        var_33 = ((/* implicit */long long int) ((1065438658U) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned char)142)))))));
                        var_34 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_39 [i_5] [i_5] [i_1 - 1] [i_1 - 1] [i_15 + 1] [i_12]))) & (-9223372036854775807LL)));
                    }
                }
            }
            for (short i_18 = 0; i_18 < 17; i_18 += 3) /* same iter space */
            {
                arr_72 [i_1 + 1] [i_5] [i_5] [i_5] = ((/* implicit */int) 3229528637U);
                var_35 |= ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_18])) != (((/* implicit */int) arr_6 [i_1]))));
                /* LoopSeq 2 */
                for (unsigned short i_19 = 0; i_19 < 17; i_19 += 4) 
                {
                    /* LoopSeq 3 */
                    for (int i_20 = 0; i_20 < 17; i_20 += 4) /* same iter space */
                    {
                        arr_79 [i_18] [i_19] [i_5] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_5 [(unsigned char)3])) ? (((/* implicit */int) (_Bool)1)) : (var_9))));
                        arr_80 [i_19] [i_19] &= ((/* implicit */_Bool) ((1065438686U) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775804LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))));
                        arr_81 [i_1] [i_5] [i_19] [i_19] [i_1] = ((/* implicit */unsigned int) var_9);
                    }
                    for (int i_21 = 0; i_21 < 17; i_21 += 4) /* same iter space */
                    {
                        arr_84 [i_5] [i_5] [i_18] [i_19] [i_5] = ((((/* implicit */_Bool) ((arr_64 [i_1] [(_Bool)1] [i_18] [i_19] [i_21]) ? (arr_22 [i_21]) : (((/* implicit */int) var_1))))) ? (var_6) : (((/* implicit */int) (_Bool)1)));
                        var_36 = ((/* implicit */int) (_Bool)0);
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_40 [(unsigned char)15] [i_5] [i_5] [i_18] [i_18] [i_19] [i_5])) ^ (var_2)));
                    }
                    for (int i_22 = 0; i_22 < 17; i_22 += 4) /* same iter space */
                    {
                        var_38 = (i_5 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) arr_76 [i_1] [i_5] [i_5] [(unsigned short)4])) >> (((((/* implicit */int) arr_69 [i_19] [i_5] [i_5])) - (56126)))))) : (((/* implicit */_Bool) ((((/* implicit */int) arr_76 [i_1] [i_5] [i_5] [(unsigned short)4])) >> (((((((/* implicit */int) arr_69 [i_19] [i_5] [i_5])) - (56126))) + (374))))));
                        var_39 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) ((-9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                        arr_87 [(_Bool)1] [(_Bool)1] [i_18] [i_5] [(_Bool)1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_1] [i_1] [i_1] [i_1] [i_18] [i_1] [i_22]))) : (var_4))) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_88 [i_1] [i_5] [i_18] [i_5] [i_22] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (arr_33 [i_22] [i_19] [i_19] [i_18] [i_5] [i_1 + 1]))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))));
                    }
                    var_40 = ((/* implicit */int) var_5);
                }
                for (unsigned char i_23 = 0; i_23 < 17; i_23 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        arr_95 [i_5] = ((/* implicit */short) (-(((/* implicit */int) ((var_9) >= (((/* implicit */int) var_10)))))));
                        arr_96 [i_5] [i_23] [i_18] [i_18] [i_5] [i_5] = ((/* implicit */unsigned int) var_2);
                    }
                    for (unsigned short i_25 = 1; i_25 < 16; i_25 += 4) 
                    {
                        var_41 -= ((/* implicit */unsigned short) (~((+(var_4)))));
                        arr_99 [i_5] [i_1] [(unsigned short)16] [16] [i_5] [12] [i_25] = ((/* implicit */unsigned short) var_6);
                    }
                    for (short i_26 = 0; i_26 < 17; i_26 += 3) 
                    {
                        var_42 += ((/* implicit */signed char) ((((int) var_3)) - ((-(((/* implicit */int) var_0))))));
                        arr_103 [i_1 + 1] [i_5] [i_5] [i_18] [i_23] [i_26] = ((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) arr_14 [i_1 + 2] [(_Bool)1] [i_26])) : (((/* implicit */int) arr_98 [i_23] [i_26]))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (-(((/* implicit */int) var_0)))))));
                        var_44 = ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)51006)));
                        var_45 = ((/* implicit */short) ((((3329346918U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62))))) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_46 = (((_Bool)1) ? (((/* implicit */int) arr_24 [i_5])) : (((/* implicit */int) (_Bool)1)));
                        arr_107 [i_1] [i_5] [i_5] [i_23] [i_27] = ((/* implicit */int) ((arr_41 [i_1 - 2] [i_1 - 2]) < (((/* implicit */int) (_Bool)1))));
                    }
                    for (long long int i_28 = 2; i_28 < 16; i_28 += 1) 
                    {
                        var_47 = ((/* implicit */unsigned char) var_3);
                        arr_111 [5LL] [i_5] [i_18] [(unsigned char)15] [(_Bool)1] = ((/* implicit */int) ((unsigned short) ((long long int) (_Bool)1)));
                        var_48 = ((((/* implicit */int) arr_6 [i_1])) >> (((/* implicit */int) (_Bool)1)));
                        arr_112 [i_1 + 2] [i_1 - 1] [i_1] [i_1 + 1] [i_5] = ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (var_4)))) - (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_1))))));
                        arr_113 [(_Bool)1] [i_23] [i_5] [i_5] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((9223372036854775807LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) < ((~(((/* implicit */int) arr_77 [i_5]))))));
                    }
                }
            }
            for (short i_29 = 0; i_29 < 17; i_29 += 3) /* same iter space */
            {
                var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) (-((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [(unsigned short)4])))))))));
                arr_116 [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) arr_1 [i_5])) : (arr_115 [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1 - 1]));
            }
        }
    }
}
