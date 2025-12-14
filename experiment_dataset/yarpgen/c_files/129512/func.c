/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129512
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((arr_0 [i_0]) <= (arr_0 [i_0])));
        var_16 += ((/* implicit */unsigned int) ((((arr_1 [i_0]) - (((/* implicit */int) arr_2 [3] [i_0])))) <= (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0])))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((arr_3 [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))))))));
            var_18 = ((/* implicit */unsigned char) arr_2 [(unsigned char)0] [(unsigned char)0]);
        }
        for (short i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            arr_8 [i_0] = ((/* implicit */long long int) arr_7 [4U]);
            /* LoopSeq 1 */
            for (unsigned char i_3 = 3; i_3 < 12; i_3 += 4) 
            {
                var_19 = ((/* implicit */unsigned short) arr_6 [i_0]);
                var_20 += ((/* implicit */unsigned int) arr_3 [i_0]);
                var_21 += ((/* implicit */short) arr_9 [i_0] [i_0] [i_0]);
            }
        }
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_2 [i_0] [i_4]))));
            var_23 = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_4]);
        }
        for (short i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            var_24 = ((/* implicit */short) arr_0 [i_5]);
            var_25 = ((/* implicit */unsigned char) ((arr_0 [i_0]) >= (arr_0 [i_0])));
            var_26 = ((/* implicit */unsigned char) ((short) arr_14 [i_0]));
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                var_27 = ((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0]);
                var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_17 [i_6] [i_5] [i_5] [i_0]))));
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */long long int) -980127297)) == ((~(-4457937129009980171LL)))));
            }
            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                arr_24 [i_0] [i_5] [i_7] = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_7]);
                var_30 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                /* LoopSeq 2 */
                for (int i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    var_31 = ((/* implicit */int) (+(arr_26 [i_0] [i_0] [i_8])));
                    var_32 = ((/* implicit */_Bool) arr_25 [12ULL] [(unsigned short)8] [i_7] [i_7] [i_8]);
                    var_33 = ((/* implicit */signed char) ((short) arr_2 [i_0] [i_8]));
                    var_34 = ((/* implicit */unsigned int) ((short) ((unsigned char) 7130500396919446560ULL)));
                }
                for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
                {
                    arr_31 [i_0] [i_5] [i_7] [i_7] [i_7] [(short)4] = ((/* implicit */short) arr_20 [i_0] [i_5]);
                    var_35 = ((/* implicit */signed char) arr_2 [i_0] [i_5]);
                    var_36 *= ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) arr_29 [i_5] [i_9])))));
                }
                arr_32 [i_0] [i_0] [i_7] [1ULL] = ((/* implicit */unsigned char) ((signed char) -980127274));
            }
            for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                arr_36 [i_10] [i_10] [i_10] [i_10] = arr_34 [i_5] [i_10];
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    for (short i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        {
                            var_37 += ((/* implicit */signed char) ((unsigned long long int) arr_2 [i_0] [i_0]));
                            arr_43 [i_5] = ((/* implicit */unsigned char) arr_26 [i_11] [i_11] [i_11]);
                            arr_44 [i_11] [i_5] [i_10] [i_5] [i_0] [i_10] [i_5] = ((/* implicit */int) ((unsigned int) arr_12 [i_0]));
                            var_38 = ((/* implicit */int) arr_25 [i_10] [i_5] [i_10] [i_10] [i_11]);
                        }
                    } 
                } 
                arr_45 [i_0] [i_5] [i_10] = arr_28 [i_0] [i_5] [i_5] [i_10] [i_10];
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 20; i_13 += 2) 
    {
        arr_48 [(short)12] [i_13] = ((/* implicit */unsigned int) arr_46 [i_13]);
        var_39 -= ((/* implicit */signed char) ((((/* implicit */int) arr_46 [i_13])) >= (((/* implicit */int) arr_47 [i_13]))));
        /* LoopSeq 3 */
        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_15 = 2; i_15 < 16; i_15 += 3) 
            {
                var_40 = arr_50 [i_15 + 4] [i_15 + 1] [i_15 + 4];
                /* LoopSeq 1 */
                for (signed char i_16 = 0; i_16 < 20; i_16 += 4) 
                {
                    var_41 = ((/* implicit */unsigned int) ((unsigned short) arr_50 [i_14] [i_14] [i_16]));
                    var_42 -= ((/* implicit */unsigned short) arr_54 [i_13] [i_14] [9U] [i_13]);
                }
                var_43 = ((/* implicit */unsigned long long int) ((unsigned int) arr_46 [i_14]));
            }
            for (short i_17 = 0; i_17 < 20; i_17 += 1) 
            {
                arr_60 [i_13] [i_13] [i_13] |= ((/* implicit */unsigned char) arr_57 [i_17] [i_14] [i_13] [i_13]);
                arr_61 [i_13] = ((/* implicit */int) arr_55 [i_13] [i_14] [i_14]);
                var_44 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_51 [i_13] [i_14] [(unsigned char)12]))));
            }
            var_45 ^= ((/* implicit */unsigned char) arr_54 [i_13] [i_14] [i_13] [i_14]);
        }
        for (unsigned int i_18 = 0; i_18 < 20; i_18 += 4) /* same iter space */
        {
            arr_65 [i_18] = ((/* implicit */_Bool) arr_52 [i_18] [i_18] [i_13]);
            arr_66 [i_13] = ((/* implicit */signed char) arr_46 [i_13]);
        }
        for (unsigned int i_19 = 0; i_19 < 20; i_19 += 4) /* same iter space */
        {
            var_46 -= ((/* implicit */unsigned int) ((signed char) arr_53 [i_13] [i_19]));
            var_47 ^= ((/* implicit */long long int) (+(((/* implicit */int) arr_58 [i_13] [i_13]))));
            var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)7507)))))));
            var_49 = ((/* implicit */unsigned short) arr_47 [i_13]);
        }
    }
    for (short i_20 = 0; i_20 < 12; i_20 += 4) 
    {
        var_50 *= ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_20] [i_20]))) + (min((((/* implicit */long long int) arr_17 [i_20] [i_20] [i_20] [i_20])), (arr_3 [i_20]))))), (((((/* implicit */long long int) ((/* implicit */int) ((short) arr_59 [i_20])))) - (min((arr_19 [i_20] [i_20] [i_20]), (arr_9 [i_20] [i_20] [i_20])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_21 = 0; i_21 < 12; i_21 += 1) 
        {
            arr_78 [i_20] [i_21] = ((/* implicit */unsigned long long int) arr_39 [i_20] [i_20] [i_20] [i_21] [i_20]);
            var_51 = ((/* implicit */unsigned char) arr_57 [i_20] [i_21] [i_20] [i_21]);
        }
        /* vectorizable */
        for (unsigned int i_22 = 2; i_22 < 11; i_22 += 1) 
        {
            var_52 = ((/* implicit */unsigned int) arr_25 [i_20] [i_20] [i_20] [i_20] [i_22]);
            var_53 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_73 [i_20] [i_20])) && (((/* implicit */_Bool) arr_73 [i_20] [i_20]))));
        }
        arr_83 [i_20] = ((/* implicit */long long int) arr_63 [i_20]);
        var_54 = (-(arr_68 [i_20]));
    }
    var_55 = min((var_4), (((/* implicit */unsigned long long int) var_5)));
    var_56 = ((/* implicit */unsigned char) min((var_56), (((/* implicit */unsigned char) var_11))));
    var_57 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_13))) && (((/* implicit */_Bool) var_5))));
}
