/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132770
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((956735078) & (((/* implicit */int) var_11))))), (((-794081520779472444LL) ^ (((/* implicit */long long int) var_2))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))));
    var_14 = ((/* implicit */unsigned long long int) (short)22651);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)113))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))) : (arr_8 [i_0 + 1] [i_1] [(unsigned char)5] [i_3])))) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) / (((/* implicit */int) arr_0 [i_1]))));
                    var_15 = ((/* implicit */_Bool) arr_1 [i_1]);
                    var_16 = ((/* implicit */unsigned char) ((unsigned int) max((((((/* implicit */_Bool) var_4)) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) (_Bool)1)))));
                }
                for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    var_17 = ((/* implicit */short) min((((/* implicit */int) (short)-3514)), ((+(((/* implicit */int) max((arr_12 [i_0 - 1] [(unsigned short)4] [i_4]), (((/* implicit */unsigned short) (_Bool)1)))))))));
                    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_0 + 1]))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) + (-7689435051483251496LL)));
                    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((((/* implicit */_Bool) 13036219841234819176ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)147)))) : (((/* implicit */int) arr_0 [i_0 - 1])))) - (((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0] [(unsigned char)4])) ? (((/* implicit */int) (unsigned char)146)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_4])) : (((/* implicit */int) arr_9 [i_1] [i_4]))))))));
                }
                var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_2 [i_0 - 1]) | (((arr_4 [i_0 - 1] [i_1]) ^ (arr_8 [i_0] [(unsigned char)8] [(unsigned char)8] [(unsigned char)8]))))))));
            }
            var_22 = arr_13 [i_1] [i_1] [i_1] [10ULL];
            var_23 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) (_Bool)1)))), ((-((~(((/* implicit */int) arr_1 [8LL]))))))));
        }
        for (long long int i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_10 [i_0] [i_5 + 1] [i_0]))))) - (((/* implicit */int) ((4150879906U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16320))))))));
            arr_16 [i_5] [i_0] [i_0 + 1] = arr_12 [i_0 + 1] [i_0 + 1] [4U];
            /* LoopNest 2 */
            for (unsigned char i_6 = 1; i_6 < 11; i_6 += 3) 
            {
                for (unsigned short i_7 = 3; i_7 < 11; i_7 += 4) 
                {
                    {
                        arr_22 [i_7 - 2] [i_6] [i_5] [i_0 - 1] = ((/* implicit */_Bool) (~(((/* implicit */int) max(((short)32764), (((/* implicit */short) (signed char)-77)))))));
                        var_25 = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (min((((/* implicit */unsigned long long int) arr_1 [(unsigned short)9])), (arr_21 [i_0 + 1] [i_5] [i_0 + 1])))))));
                        var_26 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_5 + 1])) && (((/* implicit */_Bool) var_6)))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_27 = ((/* implicit */long long int) (unsigned char)17);
        var_28 += ((/* implicit */unsigned short) var_10);
    }
    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
    {
        var_29 += ((/* implicit */unsigned long long int) arr_27 [(short)4]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_10 = 2; i_10 < 20; i_10 += 4) 
        {
            /* LoopSeq 4 */
            for (short i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
            {
                var_30 = ((/* implicit */_Bool) arr_30 [i_9]);
                var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) arr_32 [i_9] [i_10] [i_9] [i_11]))));
            }
            for (short i_12 = 0; i_12 < 23; i_12 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_13 = 1; i_13 < 21; i_13 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        arr_43 [i_9] [i_9] [i_9] [i_13] [i_9] = ((/* implicit */_Bool) (unsigned short)16320);
                        var_32 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8LL)) ? (((/* implicit */int) arr_41 [(unsigned char)0] [i_10 + 1] [i_12] [i_13] [i_14])) : (((/* implicit */int) (unsigned char)152))));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_10 + 1])) ? (((/* implicit */int) (unsigned short)49215)) : (-1858335279)))) ? (((((/* implicit */int) arr_30 [i_9])) << (((arr_27 [i_9]) - (3886098474039789069LL))))) : (((/* implicit */int) var_6))));
                    }
                    var_34 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_9] [i_10 + 3] [i_9])) ^ (((/* implicit */int) arr_38 [i_9] [i_9] [7U] [i_9]))))) + (var_10)));
                    var_35 = ((/* implicit */int) arr_38 [i_10 - 2] [i_10] [i_13 + 2] [i_10]);
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4555718717124219014ULL)) ? (16250578131804674654ULL) : (20ULL)));
                }
                for (unsigned int i_15 = 3; i_15 < 21; i_15 += 1) 
                {
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */int) arr_31 [i_10])) == (((/* implicit */int) arr_31 [i_10])))))));
                    arr_47 [i_9] = ((/* implicit */short) arr_42 [i_9] [i_15 + 1] [i_12] [i_10] [i_12]);
                }
                var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)4))))) <= (var_2)));
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) var_4))));
                            arr_53 [i_16] [i_10 + 3] [i_9] = ((/* implicit */_Bool) var_9);
                            var_40 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_31 [i_9]))));
                            var_41 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) (signed char)67)) & (((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 23; i_18 += 3) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_61 [4U] [i_9] [(short)4] [i_18] [i_18] = (i_9 % 2 == zero) ? (((/* implicit */_Bool) (~(((((/* implicit */int) arr_48 [i_9] [i_9] [i_12] [i_18] [i_9])) << (((/* implicit */int) arr_51 [18] [i_10 - 1] [i_9]))))))) : (((/* implicit */_Bool) (~(((((((/* implicit */int) arr_48 [i_9] [i_9] [i_12] [i_18] [i_9])) + (2147483647))) << (((/* implicit */int) arr_51 [18] [i_10 - 1] [i_9])))))));
                            var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) var_0))));
                        }
                    } 
                } 
            }
            for (short i_20 = 0; i_20 < 23; i_20 += 3) /* same iter space */
            {
                arr_64 [i_9] [i_10] [i_20] [i_20] = ((/* implicit */unsigned char) (signed char)76);
                var_43 = (_Bool)0;
                arr_65 [i_9] [i_9] [(unsigned char)6] [i_9] = (!(((/* implicit */_Bool) (~(1702258236U)))));
            }
            for (short i_21 = 0; i_21 < 23; i_21 += 3) /* same iter space */
            {
                arr_68 [i_10] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_42 [i_9] [i_10 + 3] [i_10 + 3] [i_21] [i_21])) : (((/* implicit */int) arr_49 [i_10 - 1] [i_10 + 1] [i_10 + 1]))));
                var_44 = ((/* implicit */_Bool) max((var_44), ((((-(var_2))) != (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) <= (var_10)))))))));
                var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_34 [i_10] [i_10 + 2] [i_10]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_10]))) : ((~(arr_26 [i_10]))))))));
            }
            arr_69 [i_9] = ((/* implicit */short) (-(1260210708U)));
            var_46 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (_Bool)1))))));
            var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) arr_60 [i_10] [i_10 + 1]))));
        }
        for (short i_22 = 0; i_22 < 23; i_22 += 3) 
        {
            var_48 = ((/* implicit */unsigned int) (~((~(arr_35 [i_9] [i_9] [i_9])))));
            var_49 = ((/* implicit */long long int) ((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [(unsigned char)0] [i_22] [(unsigned char)0])))));
            /* LoopSeq 1 */
            for (unsigned char i_23 = 0; i_23 < 23; i_23 += 3) 
            {
                var_50 = ((/* implicit */unsigned char) (short)-2181);
                var_51 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)-2200)) ? (arr_28 [i_9] [i_22] [i_23]) : (arr_28 [i_9] [i_22] [i_23])))));
            }
        }
    }
    var_52 ^= var_10;
}
