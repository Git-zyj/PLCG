/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102618
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((signed char) arr_1 [i_0] [i_0]));
        var_15 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_11))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (((-(var_12))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)23)) : (((/* implicit */int) arr_0 [1U] [(unsigned short)14])))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            var_16 -= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (var_6))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 4) /* same iter space */
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((unsigned char) (unsigned char)67)))));
                var_18 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)23))));
                arr_8 [i_0] [i_0] [(_Bool)0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-20)) % (((/* implicit */int) (short)-32))));
                var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_0))));
            }
            for (unsigned char i_3 = 1; i_3 < 18; i_3 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_4 = 1; i_4 < 18; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 3) 
                    {
                        arr_17 [i_5] [i_4] [i_1] [i_1] [i_1] [i_1 - 4] [i_0] &= ((/* implicit */short) ((arr_6 [i_3 + 1] [i_3 + 2]) / (((/* implicit */long long int) ((/* implicit */int) (short)27)))));
                        var_20 *= ((/* implicit */short) (((_Bool)1) ? (-1405400511) : (((/* implicit */int) var_14))));
                        arr_18 [i_3] [i_1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned int) ((var_13) % (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) var_3)))))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) arr_9 [i_1])) | (4095ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188))))))));
                    arr_19 [i_1] |= ((/* implicit */short) ((((/* implicit */int) var_10)) == (((/* implicit */int) arr_16 [i_4] [i_4] [i_4] [13ULL] [i_4 + 3] [i_4]))));
                }
                arr_20 [i_1] |= ((/* implicit */int) ((long long int) arr_12 [i_1 - 3] [i_1 - 3]));
                var_22 = (~(arr_11 [(unsigned char)10] [i_3] [i_3 - 1] [(unsigned short)17]));
            }
        }
        for (int i_6 = 1; i_6 < 20; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) arr_26 [i_6 + 1] [i_6 + 1] [i_6 + 1])) | (((/* implicit */int) arr_7 [i_6 + 1] [i_6 + 1] [i_6 + 1])))))));
                var_24 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_16 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1]))));
                var_25 |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_6 - 1] [i_6 + 1]))));
            }
            for (short i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                var_26 |= ((/* implicit */unsigned int) (+(((var_12) - (6727829645357226127ULL)))));
                var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-19678)) == (((/* implicit */int) (short)-19679))));
            }
            var_28 ^= ((/* implicit */unsigned long long int) ((6727829645357226136ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_10))))))));
            arr_30 [i_0] [i_0] [i_0] |= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)224))));
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) > (((/* implicit */int) (short)31285))));
            var_30 |= ((/* implicit */int) (-(2952681025U)));
        }
        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                arr_35 [7U] [i_9] [i_0] |= ((short) ((((/* implicit */int) (unsigned char)90)) | (((/* implicit */int) (short)-19678))));
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_41 [i_0] [i_0] [(unsigned char)20] [(unsigned char)11] [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) > (((((/* implicit */_Bool) arr_26 [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_3))))));
                        arr_42 [i_0] [i_9] [20ULL] [i_11] [20ULL] = (~(((/* implicit */int) (unsigned short)48113)));
                    }
                    var_31 = ((/* implicit */unsigned char) ((unsigned long long int) arr_11 [i_0] [i_9] [i_10] [i_11]));
                    arr_43 [(unsigned short)7] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_24 [i_11] [i_0])) ^ (((/* implicit */int) (unsigned char)237))))));
                }
                for (int i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    arr_46 [i_10] [i_10] [i_10] [i_10] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) | (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) arr_39 [i_0] [i_0] [(unsigned short)11] [i_10] [i_13] [i_0])))))));
                    arr_47 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_9] = ((/* implicit */int) ((var_1) | (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_9] [i_9])))))));
                    arr_48 [17U] [i_10] [i_10] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)94))));
                    var_32 += ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)36))));
                }
                var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_10] [i_0])) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) arr_39 [i_0] [9ULL] [i_0] [i_0] [i_0] [i_0])))))));
                var_34 = ((/* implicit */long long int) ((short) arr_13 [i_0] [i_9] [i_10] [i_10]));
            }
            arr_49 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)124)) && (((/* implicit */_Bool) var_8))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_9] [i_9])))))));
            var_35 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_32 [15LL] [19])) == (((/* implicit */int) arr_39 [i_0] [i_9] [i_0] [i_9] [11U] [11U])))))) % (var_5)));
        }
        for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_15 = 2; i_15 < 18; i_15 += 2) 
            {
                var_36 -= ((/* implicit */unsigned long long int) ((_Bool) arr_25 [i_0] [i_14] [i_14] [i_15 + 2]));
                /* LoopSeq 4 */
                for (unsigned long long int i_16 = 3; i_16 < 17; i_16 += 3) 
                {
                    var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((var_5) % (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [14] [i_14] [2] [2])) + (((/* implicit */int) arr_21 [i_0]))))))))));
                    var_38 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_38 [i_0] [i_14] [i_15] [i_15] [i_16])) + (((/* implicit */int) var_9)))) + (((978446550) + (((/* implicit */int) (short)20))))));
                    arr_56 [i_0] [i_0] [i_0] [i_0] [i_16] [i_0] = ((/* implicit */long long int) ((arr_44 [i_16] [i_16 - 3] [(unsigned char)14] [i_16 + 1] [i_16 - 3] [i_16 + 4]) % ((-(((/* implicit */int) (_Bool)1))))));
                    var_39 -= ((unsigned char) ((unsigned short) var_2));
                }
                for (unsigned int i_17 = 0; i_17 < 21; i_17 += 3) 
                {
                    var_40 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_15] [i_15 - 1] [(unsigned char)10] [i_15 + 3]))) % (var_6)));
                    arr_59 [i_0] [2] [2] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_53 [(unsigned short)9] [i_14] [i_0]))))));
                }
                for (unsigned char i_18 = 0; i_18 < 21; i_18 += 2) 
                {
                    var_41 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-23891)) - (((/* implicit */int) var_3))));
                    /* LoopSeq 2 */
                    for (unsigned int i_19 = 0; i_19 < 21; i_19 += 1) /* same iter space */
                    {
                        arr_64 [i_14] [i_14] [i_14] [(short)11] [(short)11] [i_14] [1ULL] = ((/* implicit */short) (~(((2952681025U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105)))))));
                        var_42 *= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) 862471567U)) && (((/* implicit */_Bool) var_12))))));
                    }
                    for (unsigned int i_20 = 0; i_20 < 21; i_20 += 1) /* same iter space */
                    {
                        var_43 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_28 [i_15] [i_18]))));
                        var_44 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)-26)) + (((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0]))))) + (((1342286271U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0])))))));
                        var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((var_5) > (var_13))))));
                        var_46 = ((/* implicit */unsigned int) (+(var_12)));
                        arr_68 [i_15] [9] [i_15] [i_15] [i_15] |= ((/* implicit */unsigned int) ((unsigned char) ((6727829645357226127ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36))))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned int i_21 = 2; i_21 < 17; i_21 += 3) 
                    {
                        var_47 += ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_32 [8ULL] [20ULL])) | (((/* implicit */int) (unsigned short)28340))))));
                        arr_72 [i_0] [i_0] [i_0] [(unsigned char)0] = ((/* implicit */short) (((-(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) var_10))));
                    }
                    for (int i_22 = 1; i_22 < 18; i_22 += 2) 
                    {
                        arr_77 [i_18] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_18] [i_0] [i_0]))))) ? ((~(-204351272))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_50 [i_18] [i_14]))))));
                        var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)178)))))));
                        var_49 ^= ((/* implicit */short) (+(var_12)));
                    }
                    for (unsigned long long int i_23 = 0; i_23 < 21; i_23 += 3) 
                    {
                        var_50 = ((/* implicit */unsigned short) ((arr_66 [i_15] [i_15 - 1] [0U]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_15 + 3] [i_15] [i_15 - 2] [i_15] [i_15 + 1] [i_15])))));
                        arr_80 [i_0] [i_0] [19ULL] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 + 3]))) + ((+(3960279956082461469ULL)))));
                    }
                    for (signed char i_24 = 0; i_24 < 21; i_24 += 2) 
                    {
                        arr_84 [i_18] |= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)5191))));
                        arr_85 [i_0] [i_0] [i_0] [i_15 + 3] [i_15 + 3] [i_15 + 3] [15U] = ((/* implicit */int) ((short) (unsigned char)165));
                    }
                    arr_86 [i_18] [(unsigned char)2] [18U] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105))) : (2574613535U)));
                }
                for (unsigned char i_25 = 0; i_25 < 21; i_25 += 2) 
                {
                    var_51 |= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_7 [i_15] [(unsigned short)5] [i_0])))) == (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (unsigned short)36770)))))));
                    var_52 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) (short)7))));
                    var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) ((((/* implicit */int) arr_67 [i_15 + 3] [14U] [i_15] [i_15 - 1] [i_15 + 3])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_75 [(short)8] [i_14] [14U] [i_14] [i_0]))))))))));
                    var_54 = ((/* implicit */unsigned short) (-(arr_70 [i_14] [i_14] [i_14] [i_15 - 2] [i_15] [17] [17])));
                }
            }
            for (unsigned int i_26 = 0; i_26 < 21; i_26 += 2) 
            {
                var_55 &= ((/* implicit */unsigned short) ((unsigned char) -204351272));
                arr_92 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65521)) | (arr_9 [i_0])));
            }
            arr_93 [i_0] [i_0] &= ((/* implicit */unsigned char) ((11718914428352325487ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) & (((/* implicit */int) arr_73 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_14] [i_14])))))));
            var_56 = ((/* implicit */_Bool) max((var_56), (((((/* implicit */unsigned long long int) var_1)) == (var_12)))));
            /* LoopSeq 1 */
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                var_57 ^= ((/* implicit */unsigned int) ((unsigned long long int) (signed char)-86));
                arr_96 [i_0] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (_Bool)1))))));
            }
            arr_97 [i_0] [i_0] [i_0] = ((/* implicit */short) ((arr_11 [i_14] [i_14] [(unsigned short)3] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_83 [i_0] [i_0] [i_0] [i_14] [i_0]))) > (arr_37 [i_14])))))));
        }
        arr_98 [10U] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
    }
    /* LoopSeq 1 */
    for (int i_28 = 3; i_28 < 20; i_28 += 2) 
    {
        arr_102 [(unsigned char)14] &= ((/* implicit */signed char) min(((short)-27202), (((/* implicit */short) (((-(((/* implicit */int) (unsigned short)28340)))) > (((/* implicit */int) (unsigned char)50)))))));
        arr_103 [12U] &= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)242)) | (((/* implicit */int) (_Bool)1))));
        var_58 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_101 [6] [i_28 + 1]))))), (((0ULL) | (((/* implicit */unsigned long long int) var_1))))));
    }
}
