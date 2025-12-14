/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101200
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 20; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (signed char i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            var_13 = ((/* implicit */int) 2945268292U);
                            arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(3344434702U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [17U] [i_0 + 1] [i_0 + 1])) || (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_3]))))) : (((/* implicit */int) var_4))));
                            var_14 = ((/* implicit */unsigned short) arr_1 [i_2 - 3]);
                        }
                        for (signed char i_5 = 1; i_5 < 17; i_5 += 4) 
                        {
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_1] [i_5 + 3] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)64)), (-462813825)));
                            arr_16 [i_0] [i_3] [(unsigned short)17] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_3] [11U])) ? (((/* implicit */unsigned long long int) (+(arr_7 [i_3] [i_3] [i_2] [i_2 + 1] [i_2] [i_2])))) : ((+(arr_0 [i_0])))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (-251286599) : (((/* implicit */int) (_Bool)1))));
                            arr_21 [i_0 - 1] [i_1] [i_3] [12ULL] [i_6] = ((/* implicit */int) arr_13 [(signed char)8] [i_2 - 2] [i_2] [i_3] [i_2 - 1]);
                            var_16 -= max((var_7), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2])));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            arr_25 [i_0] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */long long int) (unsigned char)92);
                            var_17 = ((/* implicit */signed char) 251286599);
                        }
                        var_18 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((arr_22 [i_0] [i_0 + 1] [i_2] [i_2]) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) arr_22 [i_3] [i_1] [i_1] [i_0]))))))))));
                        arr_26 [i_3] [i_3] [i_3] [(unsigned short)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) << (((var_2) - (17628707023703728272ULL)))))) ? (max(((~(arr_6 [i_0] [i_0] [i_3] [i_0 - 1]))), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_3])))));
                        /* LoopSeq 3 */
                        for (int i_8 = 2; i_8 < 18; i_8 += 2) 
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_1 [i_1]))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
                        {
                            var_21 = arr_17 [i_0] [i_1] [i_0] [i_3] [i_0 - 1] [i_0];
                            var_22 = ((/* implicit */int) min((max((max((arr_14 [(_Bool)1] [(_Bool)1] [i_2] [(_Bool)1] [6U]), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) arr_1 [i_2])))), (((arr_14 [i_0] [i_1] [i_1] [i_2 - 4] [i_0 + 1]) * (arr_14 [i_0] [i_0] [i_0] [i_2 - 2] [i_0 - 1])))));
                            var_23 ^= ((/* implicit */int) ((((((/* implicit */_Bool) -251286599)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (((((/* implicit */_Bool) 950532593U)) ? (((/* implicit */unsigned long long int) 1514076519)) : (4755666521441973876ULL))))) != (max((arr_30 [12] [i_0] [12] [i_2] [i_2] [12U]), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)61)), (-251286590))))))));
                            var_24 = ((/* implicit */unsigned int) arr_14 [i_9] [i_3] [i_2] [i_1] [i_0]);
                        }
                        for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
                        {
                            arr_33 [4U] [i_3] [i_3] [4U] [11ULL] = ((/* implicit */_Bool) min((max((var_8), (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_13 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_3] [(_Bool)1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) >> (((((((/* implicit */int) arr_23 [i_10])) << (((/* implicit */int) var_5)))) - (32076))))))));
                            var_25 |= ((/* implicit */unsigned long long int) ((((var_1) + (2147483647))) >> (((var_3) - (229898269)))));
                        }
                        var_26 *= ((/* implicit */_Bool) arr_30 [6] [6] [i_2] [i_3] [i_2] [6]);
                    }
                } 
            } 
        } 
        arr_34 [i_0] = ((/* implicit */_Bool) (-(max((min((arr_14 [(unsigned short)2] [i_0] [i_0] [(_Bool)1] [i_0]), (arr_4 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)104)))))))));
        arr_35 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64733)))))));
        arr_36 [i_0 - 1] [i_0 - 1] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1]))) | (arr_17 [i_0 + 1] [(unsigned char)9] [i_0] [i_0] [19ULL] [(unsigned short)6])));
        var_27 -= ((/* implicit */signed char) (-(var_2)));
    }
    for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_12 = 1; i_12 < 16; i_12 += 1) 
        {
            for (int i_13 = 0; i_13 < 19; i_13 += 4) 
            {
                {
                    var_28 = ((/* implicit */int) arr_24 [i_11] [i_11] [i_11] [(signed char)7] [i_13]);
                    arr_45 [i_11] [i_11] [i_12] [i_13] = var_4;
                    arr_46 [i_11] [i_13] [5] [7U] = arr_6 [20ULL] [i_12 - 1] [i_13] [i_13];
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 1) 
        {
            for (unsigned int i_15 = 2; i_15 < 18; i_15 += 2) 
            {
                for (unsigned long long int i_16 = 1; i_16 < 16; i_16 += 3) 
                {
                    {
                        arr_55 [i_11] [i_11] [i_15 + 1] [i_16] [i_16] = ((/* implicit */unsigned short) arr_41 [i_11] [i_11]);
                        var_29 -= ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0))))) > (((((/* implicit */_Bool) (unsigned short)47641)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_14] [i_14] [i_14] [i_14]))) : (767457048U)))))) != (((/* implicit */int) var_12)))))));
                    }
                } 
            } 
        } 
        var_31 = arr_8 [9ULL] [i_11] [i_11];
    }
    for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 2) 
    {
        arr_58 [i_17] [i_17] = ((/* implicit */unsigned long long int) arr_57 [i_17]);
        arr_59 [(signed char)8] [18ULL] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2133883003)), (max((((((/* implicit */_Bool) 2097151)) ? (var_9) : (((/* implicit */long long int) arr_56 [i_17] [i_17])))), (((/* implicit */long long int) arr_57 [i_17]))))));
    }
    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) var_4))));
}
