/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141339
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
    var_14 = ((/* implicit */int) var_8);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_15 = ((unsigned short) (-(arr_1 [i_0 + 1])));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            var_16 &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1])) * (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 + 2]) : (((/* implicit */unsigned int) 833103158))))));
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((int) ((((/* implicit */_Bool) max((((/* implicit */short) var_4)), (arr_2 [i_1])))) ? (var_1) : (min((var_0), (((/* implicit */int) arr_2 [(short)8]))))))))));
        }
        arr_6 [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0])))) % (((/* implicit */int) min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 1]))))));
    }
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        /* LoopSeq 4 */
        for (signed char i_3 = 3; i_3 < 17; i_3 += 2) 
        {
            arr_12 [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((max((arr_8 [i_3 + 1] [i_3 + 4]), (arr_8 [i_3 - 3] [i_3 - 3]))) < (((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3 - 3])) ? (arr_8 [i_3 - 1] [i_3 + 3]) : (arr_8 [i_3 + 4] [i_3 + 1])))));
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((arr_13 [(signed char)6] [i_3] [i_3 - 1]) >> ((((-(((/* implicit */int) var_2)))) + (22))))))));
                var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-122)))))));
            }
            for (int i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                var_20 = ((/* implicit */unsigned long long int) ((int) var_13));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    for (unsigned char i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (~(arr_16 [i_3 - 1] [i_5] [i_6] [i_7])))) && (((/* implicit */_Bool) (-(12548193828050500331ULL)))))));
                            var_22 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_16 [i_2] [(signed char)17] [i_5] [i_6])) ? (arr_16 [i_2] [(short)8] [(short)19] [(signed char)0]) : (arr_16 [i_2] [i_3 - 3] [i_5] [1U]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [(unsigned char)6] [i_2] [i_7 + 1])) ? (((/* implicit */int) arr_17 [i_2] [i_2] [i_7 + 1])) : (((/* implicit */int) var_3)))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) (-((~(((((/* implicit */_Bool) (short)-1647)) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) (unsigned char)64))))))));
            }
            arr_23 [i_2] [i_2] [i_2] = ((/* implicit */signed char) min((((unsigned short) ((((/* implicit */int) var_2)) & (var_9)))), (((/* implicit */unsigned short) (((-(((/* implicit */int) var_4)))) < (((/* implicit */int) arr_19 [i_3] [i_3 + 4] [i_2] [i_3] [i_3] [i_3 + 2])))))));
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                for (signed char i_9 = 4; i_9 < 20; i_9 += 2) 
                {
                    {
                        arr_28 [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-72)) ? ((+(((/* implicit */int) var_13)))) : ((~(((/* implicit */int) arr_20 [i_2] [i_3])))))) * (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) + (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2]))))) ? (((/* implicit */int) arr_20 [i_2] [i_2])) : (max((((/* implicit */int) (signed char)13)), (var_0)))))));
                        arr_29 [i_2] [i_3 + 1] [i_8] [i_9] [8U] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)71))) == (8452873390521822745ULL)));
                    }
                } 
            } 
        }
        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
        {
            var_24 &= ((/* implicit */_Bool) (signed char)118);
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) arr_15 [i_2]))));
            /* LoopNest 3 */
            for (unsigned int i_11 = 3; i_11 < 17; i_11 += 2) 
            {
                for (unsigned long long int i_12 = 4; i_12 < 20; i_12 += 4) 
                {
                    for (unsigned char i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) var_3);
                            var_27 = ((/* implicit */signed char) var_13);
                            arr_40 [i_2] [i_2] [i_2] [14] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-72))))) >= (((unsigned long long int) arr_9 [i_2]))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                        }
                    } 
                } 
            } 
            arr_41 [i_2] = ((/* implicit */int) var_10);
        }
        for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 2) 
        {
            arr_45 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) & (((unsigned long long int) arr_16 [i_2] [i_2] [i_2] [i_14]))));
            arr_46 [i_2] = ((/* implicit */unsigned char) var_0);
            var_29 = ((arr_8 [i_14] [i_14]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_43 [(short)17] [(short)17] [i_2])))));
        }
        /* vectorizable */
        for (unsigned char i_15 = 0; i_15 < 21; i_15 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_16 = 2; i_16 < 19; i_16 += 3) 
            {
                for (unsigned short i_17 = 0; i_17 < 21; i_17 += 1) 
                {
                    {
                        arr_54 [i_2] [i_2] [15] [i_16] [15] = ((signed char) 9993870683187728870ULL);
                        var_30 &= ((/* implicit */unsigned long long int) ((_Bool) arr_42 [i_16 + 1] [8ULL] [i_16]));
                        arr_55 [i_17] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (~((+(var_9)))));
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned short) arr_51 [i_2] [i_2] [i_2]);
        }
        var_32 = ((/* implicit */_Bool) ((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (_Bool)1))))) * (((/* implicit */int) var_5))));
        arr_56 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [(unsigned short)14] [i_2] [i_2] [i_2])) ? (6447253709090251570ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_35 [i_2] [i_2] [i_2])), (var_1))))));
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 22; i_18 += 3) 
    {
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            {
                var_33 = (i_18 % 2 == 0) ? (((/* implicit */short) (+(((((arr_57 [i_18]) + (2147483647))) >> (((arr_60 [i_18]) - (2438975989U)))))))) : (((/* implicit */short) (+(((((((arr_57 [i_18]) - (2147483647))) + (2147483647))) >> (((((arr_60 [i_18]) - (2438975989U))) - (1475485792U))))))));
                arr_63 [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18392661955725442278ULL)))) ? ((((_Bool)1) ? ((-(var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))) : (((/* implicit */unsigned long long int) arr_60 [i_18]))));
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) >> (((arr_61 [i_18]) - (1902107615)))))) ? (((((/* implicit */unsigned long long int) -116634061)) & (18392661955725442278ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
            }
        } 
    } 
}
