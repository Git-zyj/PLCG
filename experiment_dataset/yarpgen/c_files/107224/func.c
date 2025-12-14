/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107224
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) -9170544703994829484LL)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : ((((_Bool)0) ? (arr_1 [i_1] [i_0]) : (((/* implicit */unsigned long long int) arr_3 [i_0]))))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        {
                            arr_15 [i_0] = ((((/* implicit */_Bool) min((arr_6 [11] [i_3] [i_4]), (((/* implicit */long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)52))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) var_7)) * (((/* implicit */int) max((((/* implicit */short) (unsigned char)240)), ((short)2016)))))));
                            var_16 = ((/* implicit */unsigned int) min(((unsigned char)15), ((unsigned char)218)));
                            var_17 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_0] [i_3] [i_0] [i_0])) : (((/* implicit */int) var_10))))), (3047649313U));
                            var_18 = ((/* implicit */_Bool) var_12);
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((18446744073709551591ULL) >> (((((/* implicit */int) (short)-2017)) + (2071))))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_6 = 4; i_6 < 21; i_6 += 1) /* same iter space */
            {
                arr_21 [i_0] [i_5] [i_0] [i_5] = ((/* implicit */unsigned char) ((arr_9 [i_6] [21ULL] [i_6 - 4] [i_6] [(unsigned char)22] [i_6]) == (((/* implicit */int) (unsigned char)11))));
                var_20 = (~(((/* implicit */int) ((signed char) var_3))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6 + 2] [i_6 + 2] [(short)10] [i_6 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))) : (arr_6 [i_6] [i_6] [i_6 + 2]))))));
            }
            for (signed char i_7 = 4; i_7 < 21; i_7 += 1) /* same iter space */
            {
                arr_25 [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_7 - 2] [i_7 - 3] [i_7 + 2])) ? (arr_23 [i_7 - 2] [i_7 - 3] [i_7 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)201)))));
                arr_26 [i_0] [i_0] [i_7 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2704622442420837238LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) : (-7473688371169379129LL))))));
            }
            for (signed char i_8 = 4; i_8 < 21; i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        {
                            var_22 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (1170547579832340357ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) - (((/* implicit */unsigned long long int) arr_32 [i_10] [i_8 - 4] [i_8 - 4] [i_0] [i_10]))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_19 [i_10]))));
                        }
                    } 
                } 
                arr_35 [i_0] [0ULL] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)229))));
                var_24 = ((/* implicit */signed char) arr_6 [i_8] [i_8] [i_8]);
            }
            var_25 = ((/* implicit */signed char) (unsigned char)196);
            var_26 -= ((/* implicit */short) (unsigned char)96);
        }
    }
    for (signed char i_11 = 2; i_11 < 22; i_11 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_12 = 0; i_12 < 24; i_12 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned int) var_6);
            arr_43 [i_11] = ((/* implicit */long long int) (unsigned char)52);
        }
        for (signed char i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
        {
            var_28 -= (unsigned char)248;
            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */int) (signed char)104)) <= (((/* implicit */int) (short)28))))), (var_6)))) ? ((((-(17281341131650356398ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_40 [i_11] [i_13] [i_11]), (((signed char) arr_42 [i_11 + 1] [i_11] [i_13]))))))));
            var_30 = ((/* implicit */unsigned char) var_3);
            /* LoopSeq 3 */
            for (unsigned int i_14 = 0; i_14 < 24; i_14 += 4) 
            {
                var_31 *= ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_36 [i_11 + 2] [i_11 + 1])), (var_5))))));
                var_32 = ((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)0)))), (7473688371169379129LL)));
                arr_49 [i_11] [i_11] = ((/* implicit */unsigned char) min((((unsigned long long int) ((unsigned long long int) var_10))), (((/* implicit */unsigned long long int) var_1))));
            }
            /* vectorizable */
            for (signed char i_15 = 2; i_15 < 22; i_15 += 4) 
            {
                var_33 *= ((/* implicit */unsigned long long int) (unsigned char)11);
                /* LoopNest 2 */
                for (unsigned char i_16 = 2; i_16 < 23; i_16 += 2) 
                {
                    for (unsigned char i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        {
                            arr_57 [i_11 + 1] [i_13] [i_11 + 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) * (18273522439743490970ULL)));
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_37 [i_17]))) ? (-7473688371169379147LL) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_16 + 1] [i_16] [i_16 - 1] [i_16 - 1] [1ULL])))));
                        }
                    } 
                } 
            }
            for (short i_18 = 0; i_18 < 24; i_18 += 2) 
            {
                var_35 = ((/* implicit */unsigned int) (-(arr_58 [2U] [(unsigned char)5] [i_11 - 2])));
                var_36 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_46 [i_11 + 2] [i_11] [i_11 - 2])) && (((/* implicit */_Bool) var_2)))) ? (arr_56 [i_11 - 1]) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (unsigned short)0)))))))) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) var_10))));
                var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_11 + 2])) ? (2530603759U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_11 - 1])))))) && (((/* implicit */_Bool) ((int) 0U)))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_19 = 3; i_19 < 23; i_19 += 2) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        arr_66 [i_11] [i_19] [i_19] = ((/* implicit */signed char) (unsigned char)26);
                        arr_67 [i_19] [i_13] [i_13] [i_13] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 3604279104U)) / (-8906078049954920177LL)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_21 = 0; i_21 < 24; i_21 += 2) 
                        {
                            var_38 = ((/* implicit */_Bool) arr_56 [i_13]);
                            var_39 = ((/* implicit */int) ((unsigned long long int) var_12));
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_63 [i_13] [i_13] [i_19]))));
                        }
                        for (short i_22 = 2; i_22 < 23; i_22 += 4) 
                        {
                            arr_72 [i_11 - 2] [i_13] [i_13] [i_22] [i_19] [i_19] = ((/* implicit */signed char) ((unsigned char) arr_70 [i_19 - 2] [i_13] [i_19 + 1]));
                            var_41 = ((/* implicit */signed char) (unsigned char)239);
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_23 = 0; i_23 < 24; i_23 += 2) /* same iter space */
        {
            arr_75 [i_23] [(_Bool)1] = ((/* implicit */int) var_1);
            arr_76 [i_23] [i_23] = ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
            var_42 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)196))));
            arr_77 [i_11] [i_11] [(unsigned char)7] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)0))));
        }
        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? ((-(arr_56 [i_11 + 1]))) : (((int) (unsigned short)62207))));
    }
    /* vectorizable */
    for (unsigned char i_24 = 2; i_24 < 16; i_24 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_25 = 1; i_25 < 17; i_25 += 2) 
        {
            for (unsigned char i_26 = 2; i_26 < 16; i_26 += 1) 
            {
                {
                    arr_86 [i_26] [i_26 - 2] [(unsigned short)14] [i_26] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_52 [i_24 + 2] [(signed char)3] [i_26]))));
                    arr_87 [i_24] [i_24 - 2] = ((/* implicit */unsigned long long int) ((arr_48 [i_24] [i_25] [i_26] [i_25 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    arr_88 [i_25 - 1] [(unsigned char)8] &= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)40)) + (((/* implicit */int) (unsigned char)72))));
                    var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60))) % (arr_53 [i_25 + 1] [i_25 + 2] [i_25] [(short)12] [i_25]))))));
                }
            } 
        } 
        var_45 *= ((/* implicit */unsigned long long int) ((signed char) var_2));
    }
    var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) max((((signed char) ((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned long long int) 4116463180074054111LL))))), (((signed char) ((((/* implicit */int) var_9)) + (((/* implicit */int) (signed char)6))))))))));
}
