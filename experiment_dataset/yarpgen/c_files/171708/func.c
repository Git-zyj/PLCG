/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171708
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_4 [1ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((var_7) - (13010371274884153278ULL)))))) % (((((/* implicit */_Bool) var_3)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_2 [i_0]))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_1] [(unsigned short)6]))));
        /* LoopSeq 2 */
        for (short i_2 = 2; i_2 < 22; i_2 += 1) 
        {
            var_21 ^= (short)-15170;
            var_22 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_11 [i_2 - 1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 12ULL))))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 2; i_3 < 24; i_3 += 4) 
        {
            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) arr_11 [(unsigned short)16])))));
            arr_14 [(signed char)0] [(unsigned short)4] = ((/* implicit */short) arr_13 [i_1] [i_3] [4ULL]);
        }
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        var_24 = (+(arr_17 [i_4]));
        var_25 = ((/* implicit */signed char) ((arr_17 [i_4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_4] [i_4])))));
        arr_18 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((short) 8755747405322464852ULL))) >> (((((/* implicit */int) arr_3 [(unsigned short)13])) + (62)))));
    }
    for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        var_26 = ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) arr_6 [i_5] [i_5])), (arr_11 [i_5])))));
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 4) 
        {
            arr_24 [i_6] [i_5] = ((/* implicit */short) min((15661837766317440699ULL), (18446744073709551603ULL)));
            /* LoopSeq 2 */
            for (short i_7 = 1; i_7 < 18; i_7 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    arr_31 [i_8] [i_7] [i_6] [i_5] = var_19;
                    arr_32 [i_5] [i_6] [i_7 - 1] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 40ULL))));
                    var_27 = ((/* implicit */short) (+((-(((/* implicit */int) (signed char)124))))));
                }
                for (short i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    arr_35 [i_5] [i_9] [i_6] [i_9] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_10 [i_6 - 1] [i_9]))))), (arr_10 [i_7] [(short)1])));
                    var_28 = ((/* implicit */signed char) var_14);
                }
                /* LoopSeq 1 */
                for (signed char i_10 = 0; i_10 < 19; i_10 += 4) 
                {
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (~((-(((/* implicit */int) arr_29 [i_6 - 2])))))))));
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        arr_41 [i_10] [i_6] [i_5] &= ((/* implicit */signed char) var_11);
                        var_30 = ((/* implicit */short) (((+(var_18))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29353)))));
                        arr_42 [i_11] [i_6] [i_7 + 1] [i_10] [i_11] = ((/* implicit */short) ((unsigned long long int) ((short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [10ULL] [(short)1] [i_7] [i_10] [(short)1]))) : (3118658865349380889ULL)))));
                        arr_43 [i_5] [(short)17] [(signed char)8] [i_10] [i_11] [i_5] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_36 [i_7] [i_5] [i_7 + 1] [(unsigned short)1] [i_6 - 1] [i_10]) | (18446744073709551608ULL)))) ? (min((18446744073709551603ULL), (((/* implicit */unsigned long long int) ((short) arr_28 [i_5] [i_6 + 1] [i_10]))))) : ((+(arr_36 [i_5] [i_5] [2ULL] [i_5] [i_11] [i_7])))));
                    }
                    var_31 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(var_18)))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)15169)) : (((/* implicit */int) var_19)))))));
                }
                arr_44 [i_6] [i_5] [i_5] [i_6] = arr_7 [i_5] [i_5];
                var_32 = ((/* implicit */unsigned long long int) arr_7 [i_5] [i_6]);
                var_33 = ((/* implicit */short) ((((((/* implicit */_Bool) ((9690996668387086738ULL) % (9092735952468989520ULL)))) ? (arr_25 [i_5] [i_6 - 2] [i_7] [i_7 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_6] [i_7]))))) >= (max((8755747405322464852ULL), (8714626089501142086ULL)))));
            }
            for (short i_12 = 1; i_12 < 18; i_12 += 1) 
            {
                var_34 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) & (((/* implicit */int) var_14)))) != (((/* implicit */int) ((unsigned short) (short)-22928)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_13 = 0; i_13 < 19; i_13 += 3) 
                {
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_6 + 1] [i_6 - 2] [i_12 - 1] [i_13])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_21 [i_5]))))) : (((((/* implicit */_Bool) arr_27 [i_5] [i_5])) ? (var_4) : (2784906307392110917ULL)))));
                    var_36 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65507))));
                }
                arr_50 [i_12] [i_6] [i_6] = ((/* implicit */short) arr_19 [i_5]);
                arr_51 [i_12] [i_6] [i_6] = ((/* implicit */signed char) (short)32767);
            }
            var_37 = arr_49 [i_5] [i_5] [i_5] [i_5];
            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_45 [i_5] [i_5] [i_6] [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_26 [i_5] [i_5] [i_6])))), (((/* implicit */int) min(((signed char)-103), (arr_7 [22ULL] [i_6]))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_45 [i_6 - 1] [i_6 + 1] [i_6 + 2] [i_6 - 2]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(short)2] [i_6])))))) & (((15661837766317440699ULL) >> (((((/* implicit */int) var_8)) - (21947)))))))));
            /* LoopSeq 2 */
            for (unsigned short i_14 = 0; i_14 < 19; i_14 += 4) 
            {
                arr_54 [i_14] [i_6] [i_5] = var_8;
                var_39 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_45 [i_6 + 2] [i_6 + 2] [i_6 + 1] [i_6 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_22 [i_14] [i_6] [i_14]), (arr_49 [i_14] [i_14] [i_14] [i_14]))))) : (14956617618755417873ULL))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))));
                var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_27 [i_6 + 2] [i_6 + 1]) : (arr_27 [i_6 - 1] [i_6 + 1])))) ? ((~(arr_46 [i_6 - 2] [i_6 - 1] [i_6 + 1]))) : ((~(arr_46 [i_6 + 2] [i_6 + 1] [i_6 + 2])))));
            }
            for (short i_15 = 0; i_15 < 19; i_15 += 3) 
            {
                var_41 = (signed char)-86;
                arr_57 [i_15] [i_6] [i_6] [i_15] = ((/* implicit */short) ((((/* implicit */int) (signed char)94)) | (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65535))))), (var_6))))));
                var_42 = ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) ? ((~(((unsigned long long int) (signed char)-24)))) : (min((var_12), (((/* implicit */unsigned long long int) arr_49 [i_5] [i_5] [5ULL] [i_5]))))));
                var_43 = arr_9 [(signed char)5];
                arr_58 [(short)16] [i_15] [i_15] [i_5] = var_10;
            }
        }
        for (signed char i_16 = 1; i_16 < 16; i_16 += 1) 
        {
            arr_62 [i_16] [i_5] [i_5] = ((/* implicit */unsigned short) var_1);
            arr_63 [8ULL] = arr_10 [i_16 + 2] [i_16];
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_17 = 0; i_17 < 19; i_17 += 3) 
            {
                arr_66 [i_5] [i_5] [i_17] = ((/* implicit */short) arr_36 [(unsigned short)9] [i_17] [i_16 + 2] [i_5] [i_5] [i_5]);
                var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5]))) * (arr_36 [i_16] [i_16] [i_16 + 1] [i_16 - 1] [i_16] [(short)14]))))));
            }
        }
        for (unsigned short i_18 = 0; i_18 < 19; i_18 += 4) 
        {
            arr_71 [i_18] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)15161))));
            arr_72 [i_5] [i_5] [i_5] = ((/* implicit */short) arr_36 [i_18] [i_18] [i_18] [i_5] [i_5] [i_5]);
        }
        arr_73 [(short)4] = ((/* implicit */signed char) max((min((arr_68 [i_5]), ((~(var_4))))), ((((+(arr_9 [i_5]))) >> (((((/* implicit */int) max((((/* implicit */short) arr_13 [i_5] [17ULL] [(signed char)0])), (arr_70 [i_5])))) - (21986)))))));
        arr_74 [i_5] [i_5] &= ((/* implicit */unsigned short) (-((-(((((/* implicit */int) (signed char)124)) >> (((((/* implicit */int) arr_13 [i_5] [i_5] [i_5])) + (74)))))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_19 = 0; i_19 < 18; i_19 += 2) 
    {
        arr_77 [i_19] = ((/* implicit */short) var_16);
        arr_78 [i_19] = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15139))) % (11343125097608798885ULL))));
        var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((((var_18) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_56 [i_19] [i_19] [i_19]))))))))));
    }
    for (signed char i_20 = 2; i_20 < 19; i_20 += 3) 
    {
        var_46 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) var_19)), (((arr_11 [i_20]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_79 [i_20 + 1] [i_20]))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)124)))))));
        arr_81 [i_20] = ((/* implicit */signed char) (~((((~(((/* implicit */int) arr_13 [(signed char)18] [i_20 + 1] [(signed char)18])))) - (((/* implicit */int) ((short) var_4)))))));
        var_47 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_16)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_20] [i_20])))))) ? (max((arr_80 [i_20 + 1]), (arr_11 [i_20]))) : ((-(arr_9 [i_20 + 1])))));
    }
    /* vectorizable */
    for (short i_21 = 0; i_21 < 25; i_21 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_22 = 0; i_22 < 25; i_22 += 4) /* same iter space */
        {
            var_48 = ((/* implicit */short) var_16);
            arr_86 [i_21] [i_22] [i_22] = ((/* implicit */unsigned long long int) (unsigned short)65535);
            var_49 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_6 [i_21] [i_22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_21] [i_22] [i_21]))) : (arr_11 [i_22])))));
        }
        for (unsigned short i_23 = 0; i_23 < 25; i_23 += 4) /* same iter space */
        {
            var_50 = ((/* implicit */short) arr_13 [i_23] [i_23] [i_21]);
            var_51 -= ((/* implicit */short) var_3);
            var_52 ^= ((/* implicit */unsigned short) arr_12 [i_23] [i_21]);
        }
        arr_89 [i_21] = arr_84 [i_21];
    }
}
