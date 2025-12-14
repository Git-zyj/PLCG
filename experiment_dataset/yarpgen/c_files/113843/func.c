/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113843
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
    for (signed char i_0 = 3; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_2 [2LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 688374016)) ? (13041929910272024989ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64)))));
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                arr_7 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_5 [i_0] [i_1]);
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (+(max((arr_0 [8] [i_0]), (((((/* implicit */_Bool) var_10)) ? (var_16) : (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_2]))))))));
            }
            for (unsigned short i_3 = 4; i_3 < 12; i_3 += 3) 
            {
                arr_12 [i_0 - 1] [i_1] [i_3] [i_3] = ((/* implicit */short) var_3);
                var_17 = ((/* implicit */long long int) min((((/* implicit */int) var_15)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (arr_4 [i_0] [i_1] [3ULL])))) ? ((+(((/* implicit */int) var_15)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])))))))));
            }
            arr_13 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((-(6356908022961265559ULL))) : (((((/* implicit */_Bool) (~(var_3)))) ? (var_14) : (min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])), (var_2)))))));
            var_18 ^= ((/* implicit */unsigned char) arr_11 [i_0] [10U]);
            arr_14 [i_1] [i_1] [i_1] = ((/* implicit */int) arr_3 [i_0] [i_0] [i_1]);
        }
        for (int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            arr_17 [(signed char)4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_4])) ? (((/* implicit */unsigned long long int) arr_16 [i_0 - 2] [i_0 + 2] [i_0 - 1])) : ((~(min((var_8), (((/* implicit */unsigned long long int) var_12))))))));
            arr_18 [i_0] [i_4] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [(unsigned short)5] [i_0 - 1] [i_0 + 2])))) ? (((/* implicit */long long int) (~(arr_15 [i_0 + 2] [i_0 - 1])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_10 [i_4])), (var_6))))) : (((var_5) ? (((/* implicit */long long int) var_10)) : (var_12)))))));
        }
        for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            arr_21 [i_5] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) != (((long long int) var_5))));
            var_19 = ((short) min((((unsigned long long int) var_16)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_5] [i_0])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_5]))))))));
            arr_22 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((var_14) % (var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5] [i_0]))) : ((+((+(arr_19 [3LL])))))));
            var_20 += min(((!(((/* implicit */_Bool) arr_20 [i_0] [i_0 - 1])))), ((_Bool)0));
        }
        var_21 = var_12;
        arr_23 [i_0 - 1] = ((/* implicit */_Bool) var_4);
    }
    /* vectorizable */
    for (signed char i_6 = 3; i_6 < 11; i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] = ((/* implicit */unsigned char) var_12);
        arr_27 [i_6] = arr_5 [i_6] [i_6 + 2];
        arr_28 [i_6] [10LL] &= (-(arr_3 [i_6 + 1] [i_6 + 1] [i_6 - 3]));
    }
    for (signed char i_7 = 3; i_7 < 11; i_7 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-56))) : (-10LL))))));
        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_7 - 2] [i_7 + 1])) ? (((/* implicit */long long int) var_10)) : (arr_0 [i_7 - 1] [i_7 + 1]))))));
        arr_31 [i_7] [i_7] = ((/* implicit */long long int) arr_4 [i_7] [i_7] [i_7]);
    }
    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_9 = 3; i_9 < 10; i_9 += 3) 
        {
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) 0LL))) ? ((~(((/* implicit */int) arr_35 [i_8] [i_9 - 1])))) : (((/* implicit */int) (!(arr_35 [i_8] [i_9 - 3])))))))));
            var_25 = ((/* implicit */unsigned char) arr_33 [i_8] [i_9 - 3]);
            arr_38 [i_8] [i_9] = ((/* implicit */_Bool) (+(-688374016)));
        }
        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
        {
            arr_41 [4U] = ((/* implicit */_Bool) ((long long int) min((((/* implicit */long long int) var_11)), (min((((/* implicit */long long int) var_6)), (arr_3 [i_8] [i_10] [i_10]))))));
            var_26 ^= ((/* implicit */unsigned int) ((max((var_14), (((/* implicit */unsigned long long int) 940550820113660677LL)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64)))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_11] [i_11 - 1] [i_11 - 1] [i_8])) ? (arr_42 [i_11 - 1] [i_11 - 1] [i_11 - 1] [7LL]) : (var_10))))));
                arr_45 [i_10] = (-(((/* implicit */int) (signed char)64)));
                var_28 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [i_8]))))) ? (var_14) : (((/* implicit */unsigned long long int) var_12)));
                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)64))) : (2LL)))) ? (((/* implicit */int) arr_40 [10LL])) : (((/* implicit */int) var_4))));
                var_30 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_10] [i_11])) ? (((/* implicit */int) arr_9 [i_8] [i_11 - 1])) : (arr_16 [i_8] [i_11] [i_11 - 1])));
            }
            for (unsigned char i_12 = 2; i_12 < 7; i_12 += 4) 
            {
                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */long long int) arr_20 [i_8] [i_8]))))) ? (min((((((/* implicit */_Bool) arr_15 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_8))), (((/* implicit */unsigned long long int) arr_46 [i_12 + 4] [i_12 - 2] [i_12 + 4])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))))))));
                arr_50 [i_10] [i_10] [i_10] [i_12] = ((/* implicit */unsigned long long int) (-(8300442057175114462LL)));
                arr_51 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_12] [i_8]))) : (arr_33 [i_12] [5U])))))));
            }
            for (long long int i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                var_32 += (-((~(((/* implicit */int) min((((/* implicit */short) var_1)), ((short)24938)))))));
                arr_54 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_30 [i_13])))) ? (arr_30 [i_10]) : (min((940550820113660677LL), (((/* implicit */long long int) (short)-24962))))));
                arr_55 [i_13] [i_13] [(short)5] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (min((arr_52 [i_8]), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_8])))));
                var_33 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_11)) : (var_16)))));
            }
        }
        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_15 = 0; i_15 < 11; i_15 += 2) 
            {
                arr_61 [7] [i_14] [i_8] = ((/* implicit */_Bool) var_3);
                var_34 ^= ((/* implicit */int) var_12);
            }
            for (unsigned char i_16 = 0; i_16 < 11; i_16 += 4) /* same iter space */
            {
                arr_64 [i_8] [i_8] [i_16] = ((/* implicit */unsigned char) var_8);
                arr_65 [i_16] [i_14] [i_14] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (-1478382928) : (-1570374246)));
                var_35 = ((/* implicit */unsigned int) arr_59 [i_8]);
                var_36 ^= ((/* implicit */int) ((_Bool) (short)10176));
                var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (min((var_2), ((~(arr_44 [(_Bool)1] [i_14]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
            }
            for (unsigned char i_17 = 0; i_17 < 11; i_17 += 4) /* same iter space */
            {
                arr_68 [i_14] [i_8] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_44 [i_8] [i_17]))))), (var_7)));
                /* LoopSeq 1 */
                for (short i_18 = 2; i_18 < 9; i_18 += 4) 
                {
                    arr_71 [i_18] [i_14] [i_17] [i_18] = ((/* implicit */unsigned short) var_13);
                    arr_72 [i_18] [i_17] [i_14] [i_8] = ((/* implicit */unsigned long long int) arr_57 [i_18 + 1] [i_18] [(_Bool)1]);
                    var_38 = ((/* implicit */unsigned int) arr_24 [i_18]);
                    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_8] [i_14] [i_17] [i_18 - 1])) ? (arr_48 [i_8] [i_14] [i_17] [i_18 - 1]) : (arr_48 [i_8] [i_18 - 2] [i_14] [i_18 + 2])))))))));
                    arr_73 [i_14] [i_14] [i_14] [(_Bool)1] [i_14] [(_Bool)1] = ((/* implicit */long long int) arr_34 [i_18]);
                }
            }
            /* LoopSeq 2 */
            for (long long int i_19 = 0; i_19 < 11; i_19 += 1) 
            {
                arr_76 [i_8] &= ((/* implicit */unsigned char) min((((/* implicit */long long int) (~(((int) 1570374245))))), ((-(var_16)))));
                arr_77 [i_8] = (+((+(var_3))));
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                arr_81 [i_8] [i_14] [i_20] [i_14] = ((/* implicit */unsigned int) (-(677868944)));
                var_40 = min((var_2), (((/* implicit */unsigned long long int) var_11)));
                var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) min((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_74 [i_8] [i_14] [i_20]))))), (var_2))), (((/* implicit */unsigned long long int) arr_1 [i_8] [i_14])))))));
                arr_82 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */long long int) -383519092)) : (8445197319367420108LL)));
            }
            var_42 ^= ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) arr_59 [i_8])) * (arr_43 [i_8] [i_14] [i_8] [i_8]))));
            arr_83 [(_Bool)0] [i_14] = (~(var_7));
            var_43 = ((/* implicit */short) (+(((((_Bool) arr_62 [i_8] [4] [i_8])) ? (((unsigned long long int) (unsigned char)248)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))))));
        }
        for (unsigned long long int i_21 = 1; i_21 < 9; i_21 += 3) 
        {
            arr_86 [i_21] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) : (940550820113660677LL))))));
            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) var_3))));
            arr_87 [i_21] = (!(((/* implicit */_Bool) max(((-(var_8))), (((/* implicit */unsigned long long int) arr_24 [i_8]))))));
        }
        arr_88 [i_8] = var_12;
        arr_89 [2] [i_8] = ((/* implicit */_Bool) (~(var_14)));
        arr_90 [i_8] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */short) var_15)))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (max((var_2), (((/* implicit */unsigned long long int) arr_10 [i_8])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_66 [i_8] [i_8] [i_8])) ? (((/* implicit */int) var_6)) : (var_11))))))));
    }
    var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) (short)21249)) ? (8445197319367420123LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) var_10))));
}
