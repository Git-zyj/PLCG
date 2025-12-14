/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10835
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_19 += ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1));
                    arr_8 [i_2] = ((/* implicit */unsigned long long int) 2726856371U);
                    var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */unsigned int) var_14)) : (arr_3 [(unsigned short)5] [(unsigned short)5] [i_0 - 1])));
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 19; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 22; i_5 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_3] [(unsigned short)16] = ((/* implicit */unsigned short) var_13);
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_2))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */int) (signed char)54)) ^ (((/* implicit */int) (_Bool)1))));
                        arr_21 [i_0 - 1] [i_0 - 1] [i_0] [i_3] = ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60))) - (905389319U)));
                    }
                    for (unsigned char i_7 = 3; i_7 < 22; i_7 += 3) 
                    {
                        arr_26 [i_3] [(unsigned short)13] [i_3] = ((/* implicit */int) (short)32767);
                        arr_27 [i_3] [i_3] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1])) ? (arr_15 [i_3]) : (arr_15 [19])));
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 1; i_8 < 21; i_8 += 3) 
                        {
                            arr_30 [i_3] [i_1] [i_3] [0ULL] [(short)14] [i_7] [i_8] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) (short)11972)))) + (2147483647))) << (((((((/* implicit */_Bool) var_6)) ? (2096407289U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [(_Bool)1] [(_Bool)1] [i_3]))))) - (2096407289U)))));
                            arr_31 [i_8] [i_3] [(short)13] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_10 [(unsigned short)8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_19 [i_0] [i_0] [i_3] [i_7])))) : (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_3] [13U] [(signed char)11])) ? (arr_0 [i_1]) : (2863277306U)))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)384)) ? (arr_23 [i_8 - 1] [i_3] [i_3] [i_3] [i_0]) : (arr_23 [i_8] [i_3] [i_1] [i_3] [(short)1])));
                        }
                        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            var_24 = ((/* implicit */short) arr_15 [i_0]);
                            arr_35 [i_3] [i_1] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) || (((/* implicit */_Bool) var_8))));
                            var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)120)) ? (2863277306U) : (2255097842U))) <= (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))));
                            arr_36 [(signed char)0] [i_1] [(unsigned short)12] [(signed char)0] [i_9] &= ((/* implicit */unsigned int) ((2198560019U) > (2174484506U)));
                        }
                    }
                    for (short i_10 = 3; i_10 < 21; i_10 += 3) 
                    {
                        arr_40 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-3)) ? (((((/* implicit */_Bool) var_14)) ? (940106049) : (((/* implicit */int) (signed char)83)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)63553)))))));
                        arr_41 [i_1] [i_3] [i_10] = ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) arr_12 [i_10 + 1] [i_10] [i_10] [i_10])));
                    }
                    var_26 = ((/* implicit */unsigned short) (signed char)-84);
                }
                var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2377334696U)))))));
                var_28 = var_3;
                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (-(max((arr_15 [i_0 + 1]), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)12221))) <= (939157621U)))))))))));
                var_30 -= ((/* implicit */short) ((unsigned int) ((unsigned short) 1850116522U)));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-8794))));
    /* LoopSeq 2 */
    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 3) 
    {
        arr_45 [i_11] = ((/* implicit */_Bool) (signed char)-23);
        /* LoopNest 3 */
        for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 3) 
        {
            for (int i_13 = 2; i_13 < 20; i_13 += 3) 
            {
                for (signed char i_14 = 3; i_14 < 20; i_14 += 3) 
                {
                    {
                        var_32 = ((/* implicit */signed char) ((unsigned int) max((((/* implicit */short) arr_24 [i_13 - 2] [i_13 - 1] [i_14 - 2])), ((short)12221))));
                        var_33 += ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned char) arr_43 [i_11] [(signed char)0])), (var_5)))))));
                        var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)8152), (((/* implicit */unsigned short) (unsigned char)139))))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_15 = 1; i_15 < 20; i_15 += 3) 
        {
            arr_57 [i_11] [i_15 + 1] = ((/* implicit */unsigned int) (((((-(var_13))) + (((/* implicit */int) (signed char)-54)))) - (((/* implicit */int) (_Bool)1))));
            var_35 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((4031955065425659425ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)14))))))))) ? (((arr_12 [i_15 - 1] [i_15 - 1] [i_15] [i_15 - 1]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_12 [i_15 - 1] [i_15 - 1] [i_15] [i_15 - 1])))) : (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) arr_9 [i_15] [16] [i_15 - 1]))))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_36 = ((max((((/* implicit */unsigned int) arr_47 [i_16] [7U] [i_11])), (arr_5 [i_11] [i_11] [i_11] [i_11]))) >> (((576114731U) - (576114715U))));
            var_37 = ((/* implicit */short) var_10);
            var_38 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_59 [i_16] [(signed char)16] [(short)14]))) + (((/* implicit */int) (signed char)64))));
        }
        arr_60 [i_11] = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-42)) + (2147483647))) << (((163460020) - (163460020)))))), (arr_3 [(unsigned char)14] [i_11] [i_11]))), (((/* implicit */unsigned int) arr_12 [i_11] [i_11] [(short)14] [i_11]))));
    }
    /* vectorizable */
    for (unsigned int i_17 = 0; i_17 < 17; i_17 += 3) 
    {
        arr_63 [(short)1] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) var_11))))));
        arr_64 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_17])) ? ((~(3530273939U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-55)))))));
        var_39 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_11 [(_Bool)1] [i_17]))));
    }
}
