/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149608
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) arr_3 [i_0]);
        var_12 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)-24233)) : (((/* implicit */int) (_Bool)0))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_11 [i_2] [i_1] = ((/* implicit */short) var_0);
            var_13 += ((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_2]))));
        }
        var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [13] [i_1] [i_1]))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1])) % (((/* implicit */int) arr_9 [i_1]))));
    }
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        {
                            var_16 += ((/* implicit */signed char) (+(arr_6 [i_5 + 1])));
                            var_17 = ((/* implicit */unsigned int) var_7);
                            var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_5 [(unsigned short)20])))) ? (((/* implicit */int) ((short) (_Bool)0))) : (((/* implicit */int) ((_Bool) var_10)))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (!((_Bool)1))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                arr_28 [i_3] [i_3] [i_3] = arr_9 [5U];
                var_20 = ((((((/* implicit */_Bool) var_6)) ? (2147115322U) : (((/* implicit */unsigned int) 649016932)))) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))));
                var_21 = ((signed char) ((((/* implicit */int) arr_23 [16] [8] [i_4] [i_8] [i_8])) - (arr_5 [i_8])));
            }
            for (short i_9 = 0; i_9 < 25; i_9 += 4) 
            {
                var_22 += ((/* implicit */int) (!(((/* implicit */_Bool) ((701251039) | (((/* implicit */int) (_Bool)1)))))));
                arr_32 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */signed char) -649016933);
                arr_33 [(short)15] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_15 [i_4] [i_9]) : (-649016933)));
                /* LoopSeq 2 */
                for (signed char i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    /* LoopSeq 3 */
                    for (int i_11 = 1; i_11 < 24; i_11 += 3) /* same iter space */
                    {
                        arr_40 [i_3] [16ULL] [14U] [i_10] [i_9] &= ((/* implicit */unsigned int) arr_26 [i_3] [(signed char)9] [i_11 + 1]);
                        arr_41 [i_11] [i_9] [i_3] [i_9] [i_3] &= ((/* implicit */unsigned char) ((long long int) arr_23 [6ULL] [i_11 + 1] [i_11] [i_11] [i_11]));
                        arr_42 [i_3] [i_4] [(signed char)3] [i_10] [i_11] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_31 [i_3] [i_3])) && (((/* implicit */_Bool) var_9)))) && ((!(((/* implicit */_Bool) arr_13 [i_3]))))));
                    }
                    for (int i_12 = 1; i_12 < 24; i_12 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */short) (~(((/* implicit */int) arr_39 [8ULL] [23]))));
                        arr_45 [(unsigned short)9] [(signed char)19] [i_9] [i_3] [i_12 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) ? (16463989295941811568ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1))))));
                        arr_46 [i_3] [i_3] [i_4] [i_9] [(signed char)18] [(unsigned short)3] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_12 + 1]))));
                    }
                    for (int i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        arr_49 [i_3] [i_4] [i_3] [i_10] [i_3] = ((/* implicit */short) var_10);
                        arr_50 [i_3] [i_4] [i_3] [i_9] [i_4] [i_10] [(short)0] &= ((/* implicit */signed char) (~(2483754272987144567LL)));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -649016933)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-18))))) : (((/* implicit */int) (_Bool)1))));
                        arr_51 [i_4] [i_3] [(signed char)9] = ((/* implicit */signed char) (~(arr_7 [i_4])));
                        var_25 = ((/* implicit */unsigned long long int) ((int) arr_15 [i_9] [i_10]));
                    }
                    arr_52 [i_4] [i_4] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_2)))));
                }
                for (short i_14 = 2; i_14 < 21; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_34 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4))));
                        arr_58 [1ULL] [i_4] [i_4] [1ULL] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)14)) ? (((arr_12 [i_9]) * (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_9] [i_9] [i_15]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_4] [i_14 + 4] [i_9])))));
                        arr_59 [21ULL] [i_15] [i_15] [i_15] [i_3] [(short)22] [i_15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_17 [i_14 - 2] [i_14 + 4] [i_14 - 2]))));
                    }
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_54 [i_9] [i_4])))))))));
                    var_28 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) -919750617)) : (((unsigned long long int) (signed char)81))));
                    var_29 = ((/* implicit */short) arr_43 [i_3] [i_3] [i_9] [i_3] [i_14] [i_3]);
                }
                arr_60 [i_3] [i_4] [i_4] [4LL] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_25 [i_3] [i_4] [i_9]))));
            }
            for (short i_16 = 0; i_16 < 25; i_16 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_17 = 2; i_17 < 23; i_17 += 4) 
                {
                    for (unsigned int i_18 = 1; i_18 < 24; i_18 += 1) 
                    {
                        {
                            var_30 ^= ((/* implicit */unsigned int) ((arr_67 [13U] [13U] [i_16] [i_16] [i_18]) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))));
                            arr_69 [i_17] [i_3] [(short)0] [i_17 + 2] [i_17] [12] [i_17] = ((/* implicit */signed char) ((arr_35 [i_17 - 2] [i_17 + 1] [i_17 - 1] [i_17 - 1] [i_18 + 1] [i_18 - 1]) <= (((/* implicit */int) var_8))));
                        }
                    } 
                } 
                arr_70 [i_3] [i_4] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-19)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 25; i_19 += 4) 
                {
                    for (signed char i_20 = 0; i_20 < 25; i_20 += 3) 
                    {
                        {
                            arr_75 [i_20] [i_3] [i_3] = ((/* implicit */long long int) arr_10 [i_4] [i_4] [9]);
                            var_31 += (signed char)-2;
                        }
                    } 
                } 
                arr_76 [i_3] = ((5967748169022359656LL) <= (((/* implicit */long long int) arr_72 [i_3] [i_3] [i_3] [(signed char)2] [i_16])));
            }
            arr_77 [i_3] [i_4] [16] |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_8)) <= (var_3)))) ^ ((-(-26)))));
            arr_78 [7U] [i_3] = ((/* implicit */int) (+(var_0)));
        }
        var_32 = ((/* implicit */_Bool) (-((~((~(9449487525050750328ULL)))))));
    }
    var_33 = ((/* implicit */signed char) max((var_4), (((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (min((((/* implicit */int) (short)26)), (var_3))))))));
    /* LoopSeq 1 */
    for (unsigned int i_21 = 0; i_21 < 11; i_21 += 1) 
    {
        arr_82 [i_21] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_2 [i_21]))))));
        arr_83 [i_21] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(-2483754272987144566LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) * (var_0))))))) ? (((/* implicit */unsigned long long int) 0LL)) : (var_10)));
        arr_84 [i_21] = ((((/* implicit */_Bool) var_10)) ? ((-(arr_61 [i_21] [i_21] [i_21]))) : (((/* implicit */int) ((short) arr_61 [i_21] [i_21] [i_21]))));
    }
    var_34 = ((/* implicit */int) var_2);
    var_35 |= ((/* implicit */signed char) (_Bool)1);
}
