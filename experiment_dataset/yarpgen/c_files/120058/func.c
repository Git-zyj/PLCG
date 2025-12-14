/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120058
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_0 [i_0])))), ((+(((/* implicit */int) (signed char)-11))))))) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) + (var_4)))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                arr_6 [i_2] [i_2] &= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((((/* implicit */long long int) var_7)) - (var_10))) : (((/* implicit */long long int) ((/* implicit */int) (short)-28300)))))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)28296)) ? (((/* implicit */int) (short)28296)) : (((/* implicit */int) (unsigned char)77))));
                arr_7 [i_0] [i_1] = ((((/* implicit */int) max((min((var_6), (((/* implicit */short) var_12)))), (((/* implicit */short) ((((/* implicit */int) (unsigned char)34)) == (((/* implicit */int) var_14)))))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((int) (short)-28296)))))));
                arr_8 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)234)), (arr_5 [i_1 + 1] [i_1])))), (min((((/* implicit */unsigned int) ((signed char) (short)-28323))), ((~(var_4)))))));
            }
            var_22 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_5 [i_0] [i_0])), (((var_10) / (((/* implicit */long long int) arr_5 [i_1 + 1] [i_1 - 1]))))));
            var_23 = ((/* implicit */short) (unsigned char)3);
            arr_9 [i_0] [i_1] [i_0] = arr_3 [i_0] [i_1] [12];
        }
    }
    /* vectorizable */
    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_16 [i_3] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */int) (short)-28296)) > (((/* implicit */int) arr_13 [i_4] [i_4] [i_3 - 1]))));
            var_24 = ((((/* implicit */_Bool) var_16)) ? (945947824) : (var_11));
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (arr_14 [i_4]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)29)) & (((/* implicit */int) (unsigned char)31)))))));
            arr_17 [i_4] [i_4] [i_4] = ((/* implicit */signed char) var_11);
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) ((short) ((short) (short)28299)));
            arr_22 [i_5] = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_15)))) ^ (950182144)));
        }
        for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            var_27 = ((/* implicit */signed char) ((unsigned char) ((950182168) >= (((/* implicit */int) (unsigned char)37)))));
            arr_25 [i_3 - 2] [i_6] [i_6] = ((/* implicit */int) (~(arr_12 [i_3 + 1])));
        }
        /* LoopSeq 4 */
        for (short i_7 = 3; i_7 < 16; i_7 += 2) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_21 [i_7])) + (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7]))) : (var_3)))));
            var_29 = ((/* implicit */signed char) var_13);
            var_30 ^= ((((/* implicit */int) (unsigned char)211)) >= (((/* implicit */int) (unsigned char)221)));
        }
        for (short i_8 = 3; i_8 < 16; i_8 += 2) /* same iter space */
        {
            arr_31 [(_Bool)1] [i_8] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (short)28274)))));
            arr_32 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_13 [i_3] [i_3] [i_3])) : (((/* implicit */int) (unsigned char)220))));
        }
        for (short i_9 = 3; i_9 < 16; i_9 += 2) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) == (((/* implicit */int) (unsigned char)121))));
            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) var_3))));
        }
        for (short i_10 = 0; i_10 < 18; i_10 += 2) 
        {
            var_33 = ((/* implicit */signed char) 3985713295410893765LL);
            arr_39 [i_3] = ((/* implicit */short) ((int) arr_34 [i_3 - 1]));
        }
    }
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 16; i_11 += 2) 
    {
        arr_43 [(signed char)5] = ((/* implicit */unsigned char) (~(arr_36 [i_11])));
        var_34 ^= arr_11 [i_11];
        arr_44 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)222)) & (((/* implicit */int) var_2))));
        var_35 = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) -950182144)))));
        arr_45 [i_11] = var_2;
    }
    for (signed char i_12 = 0; i_12 < 16; i_12 += 2) 
    {
        var_36 = ((/* implicit */_Bool) ((long long int) var_19));
        arr_49 [i_12] = ((/* implicit */unsigned char) ((_Bool) var_12));
        /* LoopSeq 3 */
        for (signed char i_13 = 0; i_13 < 16; i_13 += 2) 
        {
            arr_52 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) min((((/* implicit */int) ((signed char) arr_28 [i_13] [i_12]))), (var_11)));
            var_37 = ((/* implicit */unsigned char) var_17);
        }
        for (int i_14 = 0; i_14 < 16; i_14 += 2) 
        {
            var_38 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((arr_12 [9U]), (((/* implicit */long long int) arr_13 [i_14] [i_14] [i_12]))))) ? (((((/* implicit */int) arr_37 [i_12])) * (((/* implicit */int) var_16)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) > (max((var_9), (((/* implicit */long long int) arr_29 [i_12])))))))));
            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) max((arr_41 [i_12]), (var_17))))));
        }
        /* vectorizable */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_40 = ((((/* implicit */_Bool) arr_21 [i_15])) ? (arr_21 [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))));
            arr_58 [i_15] = ((/* implicit */signed char) arr_24 [i_12]);
        }
        var_41 ^= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_23 [i_12] [i_12] [i_12])) ? (arr_23 [i_12] [i_12] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28327))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_16 = 3; i_16 < 17; i_16 += 2) 
    {
        arr_61 [2] &= ((/* implicit */signed char) ((int) arr_60 [i_16]));
        var_42 |= arr_60 [i_16];
    }
    for (unsigned long long int i_17 = 4; i_17 < 20; i_17 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_18 = 0; i_18 < 22; i_18 += 2) 
        {
            arr_66 [i_17] [i_18] [i_17] &= ((/* implicit */long long int) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_65 [i_18] [(short)16] [i_18]))))) && (((/* implicit */_Bool) var_10)))), ((!(((/* implicit */_Bool) arr_63 [i_17 - 3] [i_17 + 2]))))));
            /* LoopSeq 1 */
            for (short i_19 = 1; i_19 < 21; i_19 += 2) 
            {
                var_43 = ((/* implicit */unsigned char) -950182148);
                var_44 -= ((unsigned char) arr_65 [i_17] [i_17] [i_17]);
                arr_69 [i_17] [i_18] [i_19] = ((/* implicit */short) arr_67 [i_19] [(signed char)11] [i_17] [i_17]);
                arr_70 [i_17] [i_18] = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) 6228786134557434662LL))), (((int) arr_62 [i_19 + 1] [i_17 - 3]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_20 = 2; i_20 < 21; i_20 += 2) 
                {
                    var_45 = ((((/* implicit */int) arr_63 [i_17] [i_17 + 2])) ^ ((~(((/* implicit */int) var_17)))));
                    var_46 ^= ((/* implicit */unsigned long long int) var_9);
                    arr_73 [i_19] [i_19] [i_19] [i_19] [i_19] = var_2;
                    var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) ((_Bool) ((unsigned long long int) (signed char)-48))))));
                }
                for (unsigned char i_21 = 0; i_21 < 22; i_21 += 2) 
                {
                    var_48 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-28299)) || (((/* implicit */_Bool) (unsigned char)56)))) && (((/* implicit */_Bool) ((-950182144) & (156610637))))));
                    arr_77 [i_21] [i_19] [i_19] [(unsigned char)0] [i_17] [i_17] = ((/* implicit */int) ((var_9) >= (((((/* implicit */_Bool) (signed char)-55)) ? (max((((/* implicit */long long int) var_19)), (var_9))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_68 [i_17])))))))));
                }
            }
        }
        for (signed char i_22 = 0; i_22 < 22; i_22 += 2) 
        {
            arr_80 [(unsigned char)21] [i_17] [(unsigned char)21] = ((/* implicit */short) (unsigned char)189);
            var_49 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_72 [i_17 - 4] [i_17 - 4] [i_17] [i_17 + 1] [i_17] [i_22])), (max((max((arr_62 [i_17] [i_17]), (((/* implicit */unsigned long long int) arr_68 [i_22])))), (((/* implicit */unsigned long long int) arr_78 [i_17 - 2]))))));
        }
        arr_81 [i_17] = ((/* implicit */short) ((signed char) ((950182144) != (((/* implicit */int) (_Bool)1)))));
        var_50 -= ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (short)32747)) * (((/* implicit */int) (unsigned char)221))))));
        var_51 = ((/* implicit */short) ((int) (unsigned char)34));
    }
    for (unsigned char i_23 = 3; i_23 < 19; i_23 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            var_52 ^= ((/* implicit */short) ((((((/* implicit */int) arr_84 [i_23 - 3] [i_23 - 2] [i_23 - 2])) + (2147483647))) >> (((arr_83 [(unsigned char)12]) - (1465719273U)))));
            var_53 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_84 [i_23 - 1] [i_23 + 3] [i_23])) : (((/* implicit */int) (_Bool)1))));
        }
        /* LoopSeq 1 */
        for (int i_25 = 2; i_25 < 20; i_25 += 2) 
        {
            var_54 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((arr_83 [i_23]) ^ (((/* implicit */unsigned int) -950182147)))) | (((/* implicit */unsigned int) arr_82 [i_23 - 2]))))), (((((((/* implicit */_Bool) arr_82 [(short)17])) ? (var_3) : (((/* implicit */unsigned long long int) arr_89 [i_23 - 1])))) + (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)133)) : (513974596))))))));
            var_55 -= ((/* implicit */short) var_7);
        }
        var_56 = ((/* implicit */signed char) (short)15374);
        arr_90 [i_23] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)132))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) : (4294967295U)))));
    }
    var_57 &= ((/* implicit */int) min((var_12), (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)225)), (var_9)))) && (((/* implicit */_Bool) var_6))))));
}
