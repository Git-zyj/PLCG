/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124641
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
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_5)))), (((((/* implicit */int) (short)0)) + (((/* implicit */int) var_6))))))), (((((/* implicit */_Bool) (+(17051362704850520128ULL)))) ? (var_12) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))))));
    var_19 ^= ((/* implicit */short) ((unsigned char) (-(((unsigned int) 11676325074126448117ULL)))));
    var_20 = ((/* implicit */unsigned char) (short)-19921);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_21 |= ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [2LL] [i_1]))));
            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) 1395381368859031488ULL)))));
            arr_6 [i_0] [i_0] = (~((+(arr_1 [i_0]))));
            arr_7 [i_0] [i_1] = ((/* implicit */long long int) (-(arr_2 [i_1] [i_0] [i_0])));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 2; i_3 < 12; i_3 += 1) 
            {
                var_23 = ((/* implicit */int) (~(arr_2 [i_3 + 1] [i_3 - 1] [(unsigned char)8])));
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 1) 
                {
                    arr_16 [i_0] [6] [i_3 - 2] [i_0] [i_3 - 2] = ((/* implicit */unsigned char) var_6);
                    arr_17 [i_4] [2ULL] [i_0] [2ULL] [i_0] |= ((/* implicit */int) (((~(-3303839282274283226LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [(unsigned char)10] [i_3])))));
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 + 2] [4LL] [i_3 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4 - 3] [i_4 - 2] [i_3 - 1]))) : (arr_13 [i_3 - 2] [i_3 - 2] [8ULL] [i_3 + 1]))))));
                }
                for (short i_5 = 1; i_5 < 11; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 2; i_6 < 13; i_6 += 1) 
                    {
                        var_25 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_6 - 1] [(_Bool)0] [i_5 + 3]))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-22)) ? (((/* implicit */int) arr_5 [i_6 - 2] [i_0] [i_3 - 2])) : (((/* implicit */int) arr_5 [i_6 - 2] [i_0] [i_3 - 2]))));
                        arr_23 [i_0] [(_Bool)1] [i_3 - 2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_0] [i_5 + 3] [i_6 + 1] [i_6 - 2]))));
                    }
                    for (unsigned char i_7 = 1; i_7 < 11; i_7 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_4 [i_0]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_24 [i_7] [i_5] [i_5] [i_0] [i_2] [i_0]))))) ? ((-(6770418999583103498ULL))) : (((/* implicit */unsigned long long int) ((arr_15 [i_0] [i_2]) ^ (((/* implicit */int) var_8)))))));
                        var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_11 [i_0] [i_3 + 2] [13LL] [i_7]))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1395381368859031468ULL)))))) % ((~(17051362704850520117ULL)))));
                        arr_26 [i_0] [i_0] [i_3] [i_5 - 1] [(short)13] = ((/* implicit */short) arr_14 [i_5 + 3] [i_7 + 2]);
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3 + 1]))) & (arr_25 [i_3 - 1] [i_3 - 1] [i_5 + 1] [i_5 + 1] [i_7 + 1] [i_7 + 3] [(unsigned char)4]))))));
                    }
                    var_31 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_5 - 1])) ? (1395381368859031488ULL) : (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0]))))));
                    var_32 ^= ((/* implicit */signed char) (~(arr_3 [8U] [i_3 + 2] [i_5 - 1])));
                }
            }
            var_33 = ((/* implicit */unsigned char) 11676325074126448118ULL);
            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_2] [i_0] [i_0])) ? (((/* implicit */int) ((short) 6770418999583103498ULL))) : (((/* implicit */int) arr_8 [i_0])))))));
        }
        for (int i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            var_35 |= ((/* implicit */long long int) (~(var_1)));
            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) arr_1 [8ULL]))));
        }
        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_17) : (17051362704850520136ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : ((-(((/* implicit */int) (_Bool)1))))));
            var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) 17051362704850520128ULL))));
            /* LoopSeq 1 */
            for (signed char i_10 = 4; i_10 < 10; i_10 += 1) 
            {
                var_39 = ((/* implicit */short) ((arr_30 [i_10 - 2] [i_10] [i_10 - 1]) ? (arr_2 [i_10 + 4] [i_10] [i_10 + 1]) : (arr_2 [i_10 + 2] [i_10] [i_10 + 1])));
                var_40 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_18 [i_0] [i_9] [i_10 + 2] [i_10]) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_11 = 1; i_11 < 12; i_11 += 1) 
            {
                arr_37 [i_0] [i_9] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)-31296))))));
                var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) (((((_Bool)1) && (((/* implicit */_Bool) var_2)))) ? (arr_25 [4U] [i_11] [(unsigned char)12] [i_0] [i_11 - 1] [i_0] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                var_42 = ((/* implicit */int) ((unsigned char) ((var_9) ? (6770418999583103498ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0]))))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned char i_12 = 1; i_12 < 12; i_12 += 1) 
        {
            arr_40 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_12 + 2] [i_0] [i_0])))))));
            var_43 |= ((/* implicit */unsigned long long int) arr_38 [i_0]);
            var_44 = ((/* implicit */unsigned long long int) (!(arr_21 [i_12 + 1] [i_12 - 1] [i_0] [i_12 - 1] [i_0] [i_0])));
        }
        /* LoopSeq 3 */
        for (unsigned char i_13 = 2; i_13 < 13; i_13 += 1) 
        {
            arr_43 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
            var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_0])) ? (((/* implicit */int) arr_36 [i_0])) : (arr_33 [(signed char)9] [i_13] [i_13])));
            /* LoopSeq 1 */
            for (signed char i_14 = 0; i_14 < 14; i_14 += 1) 
            {
                var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) ((((/* implicit */_Bool) (-(arr_15 [(short)0] [i_14])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_17))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_15 = 4; i_15 < 12; i_15 += 1) 
                {
                    var_47 = ((/* implicit */unsigned char) (~(((17051362704850520128ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_14])))))));
                    arr_50 [i_0] [i_0] [i_0] [i_14] [i_15 + 2] = ((/* implicit */short) (~(((/* implicit */int) (signed char)5))));
                    var_48 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_49 [i_0] [i_13] [i_15 + 2] [i_13 - 2])) ? (arr_49 [i_0] [i_13] [i_15 - 1] [i_13 - 2]) : (arr_49 [i_0] [i_13 - 1] [i_15 - 3] [i_13 - 1])));
                    var_49 = ((/* implicit */unsigned char) max((var_49), ((unsigned char)234)));
                }
            }
            arr_51 [i_0] [i_0] = ((((/* implicit */_Bool) ((arr_48 [(unsigned short)4] [(unsigned short)4]) * (((/* implicit */unsigned long long int) -5LL))))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (11676325074126448117ULL));
        }
        for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 1) /* same iter space */
        {
            var_50 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_32 [i_0] [i_0]))));
            var_51 = ((/* implicit */signed char) (+(((arr_2 [i_0] [i_0] [i_16]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3)))))));
        }
        for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 1) /* same iter space */
        {
            arr_56 [i_0] [i_0] = ((/* implicit */int) var_17);
            arr_57 [i_0] [i_0] = ((/* implicit */int) ((arr_54 [i_0] [i_17] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) var_9)))));
            /* LoopSeq 1 */
            for (short i_18 = 3; i_18 < 11; i_18 += 1) 
            {
                var_52 = ((/* implicit */short) arr_27 [i_0] [i_18 + 3] [i_17]);
                arr_61 [i_0] [i_0] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) arr_21 [i_18 + 1] [i_17] [i_0] [i_0] [i_17] [i_17])) : (arr_27 [i_18 + 2] [i_18] [(signed char)11])));
                arr_62 [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) arr_10 [i_18 - 1] [i_18 + 2] [i_17]));
                arr_63 [i_0] [i_17] [i_18] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_18 + 3] [i_18 + 3] [i_0] [i_18 - 3]))));
            }
            arr_64 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_8 [i_0]);
        }
        arr_65 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_9)) > ((~(arr_60 [i_0] [i_0] [i_0] [i_0])))));
        var_53 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)82)))))));
    }
    for (int i_19 = 0; i_19 < 15; i_19 += 1) 
    {
        var_54 = ((/* implicit */long long int) ((unsigned char) ((((arr_66 [i_19]) & (arr_66 [i_19]))) <= (((/* implicit */unsigned int) ((int) 17051362704850520136ULL))))));
        var_55 = ((/* implicit */unsigned long long int) min((var_55), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) ((arr_66 [i_19]) / (arr_66 [i_19])))) ? ((+(arr_66 [i_19]))) : (((/* implicit */unsigned int) (+(var_11)))))) : (((/* implicit */unsigned int) max((-664193324), (((/* implicit */int) arr_67 [i_19] [i_19]))))))))));
    }
}
