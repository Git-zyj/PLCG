/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169238
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
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_10 &= ((/* implicit */long long int) ((unsigned short) (_Bool)1));
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0]) : (((/* implicit */int) var_7)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) arr_0 [i_1]);
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-20150)) ? (((/* implicit */long long int) 4294967275U)) : (-5152065945747909643LL)));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (short i_4 = 2; i_4 < 16; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    {
                        arr_17 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) var_5)) ? (arr_4 [i_3] [i_4 + 1]) : (((/* implicit */unsigned long long int) arr_0 [i_2])))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)10133)))) ? (-6782337643482331826LL) : ((((_Bool)1) ? (4265779292852172163LL) : (4265779292852172160LL))))))));
                        arr_18 [i_2] [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_8 [i_3])) >> (((((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */unsigned long long int) var_1)) : (var_6))) - (10471406124641745523ULL)))))));
                    }
                } 
            } 
        } 
        var_14 = (~(4294967295U));
        arr_19 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)0)) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)30719))) == (4265779292852172163LL))))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] [i_6] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) arr_8 [i_6]))))));
        arr_25 [i_6] = ((((((/* implicit */long long int) var_4)) ^ (arr_3 [i_6]))) ^ (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)13325))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)41825)) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (short)8373))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
    {
        var_16 = ((arr_22 [i_7]) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((1146270451) < (arr_14 [(unsigned short)9] [i_7] [i_7] [i_7])))))));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 8; i_8 += 3) 
        {
            for (unsigned short i_9 = 1; i_9 < 9; i_9 += 1) 
            {
                {
                    arr_33 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_20 [i_7])) - (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1270078355971099472LL)) ? (((/* implicit */int) arr_15 [i_7] [i_8] [i_7] [i_9])) : (-1575401131)))), (arr_9 [i_8 + 2])))));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_8] [i_8] [i_9 - 1] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7] [i_8]))) : (((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned long long int) 2135476902U)), (var_5))) : (var_6)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 14; i_11 += 4) 
        {
            for (unsigned int i_12 = 4; i_12 < 12; i_12 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (((~(4265779292852172160LL))) / (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)13325)))))))));
                    var_19 = ((/* implicit */unsigned long long int) ((var_4) <= (arr_38 [i_12 - 4] [i_10] [i_10])));
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (long long int i_14 = 0; i_14 < 15; i_14 += 2) 
                        {
                            {
                                arr_47 [(_Bool)1] [i_10] [i_10] [i_12] [i_13] [i_13] = ((/* implicit */long long int) (~(((/* implicit */int) arr_42 [i_10] [i_12] [i_12] [i_10]))));
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) -6067387083681943749LL)) || (((/* implicit */_Bool) (unsigned short)11247))))))))));
                                arr_48 [i_10] [i_10] [i_12] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_11 - 1] [(signed char)0] [i_11 - 1] [i_12 - 3])) ? (arr_40 [i_11 - 1] [i_11] [i_12] [i_12 + 2]) : (arr_40 [i_11 - 1] [i_11 - 1] [i_12] [i_12 - 3])));
                            }
                        } 
                    } 
                    arr_49 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) 4267362189U)) ? (((/* implicit */unsigned long long int) -8644453795156291041LL)) : (937435588534703616ULL)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (unsigned short i_16 = 1; i_16 < 11; i_16 += 1) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-7553)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)63630))))) : (((2305843009146585088LL) ^ (((/* implicit */long long int) 8U))))));
                        /* LoopSeq 1 */
                        for (long long int i_18 = 2; i_18 < 14; i_18 += 3) 
                        {
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_54 [i_16 + 2] [i_16 + 3] [i_18 - 1] [i_18])) ? (1643417967390776290LL) : (arr_54 [i_16 + 4] [i_16 + 3] [i_18 - 2] [i_16 + 3])));
                            arr_61 [i_10] [i_16 + 1] [i_16 + 1] [i_10] [i_10] = ((/* implicit */int) 1917421433U);
                            var_23 = ((/* implicit */_Bool) (-2147483647 - 1));
                        }
                        arr_62 [i_10] [i_15] [(short)9] [i_15] [i_17] [i_10] = ((/* implicit */signed char) ((((arr_54 [i_10] [i_10] [i_10] [i_10]) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) arr_21 [i_10] [i_10])) ? (((/* implicit */int) arr_5 [i_15])) : (((/* implicit */int) var_8)))) - (57142)))));
                        var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_10])) ? (((/* implicit */int) arr_5 [i_16 + 1])) : (((/* implicit */int) arr_43 [i_16 - 1] [i_16] [i_16 - 1] [i_16]))));
                        arr_63 [i_10] = arr_0 [i_10];
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((arr_9 [i_10]) / (arr_9 [i_10]))))));
    }
    for (unsigned int i_19 = 3; i_19 < 22; i_19 += 1) 
    {
        arr_67 [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? ((((-(((/* implicit */int) arr_64 [i_19])))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_65 [i_19])) : (((/* implicit */int) arr_65 [i_19 - 1])))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_64 [i_19])) : (((((/* implicit */int) arr_65 [i_19])) % (((/* implicit */int) (short)14514))))))));
        arr_68 [i_19] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((1951126192), (2147483647)))), (((arr_66 [i_19]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_19])))))));
        /* LoopNest 2 */
        for (long long int i_20 = 0; i_20 < 24; i_20 += 3) 
        {
            for (int i_21 = 1; i_21 < 23; i_21 += 2) 
            {
                {
                    var_26 += ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))));
                    arr_73 [i_19] [i_20] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_71 [i_19] [i_20] [i_21]))))) ? (((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_71 [i_19] [i_21] [i_21]))))) : (arr_66 [i_19])));
                    arr_74 [i_19] = ((/* implicit */long long int) (+(((/* implicit */int) var_3))));
                    /* LoopNest 2 */
                    for (long long int i_22 = 0; i_22 < 24; i_22 += 1) 
                    {
                        for (long long int i_23 = 1; i_23 < 22; i_23 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) max((min(((-(arr_75 [i_22]))), (((/* implicit */long long int) ((int) (_Bool)1))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_77 [i_19 - 3] [i_19 - 3] [i_19])))))));
                                arr_81 [i_23 + 1] [i_19] [i_19] [i_19] = ((/* implicit */long long int) var_2);
                                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_23])) ? (((/* implicit */long long int) arr_78 [i_19] [i_19] [i_21 + 1] [i_23 - 1] [i_21 + 1])) : (((8644453795156291056LL) << (((18177152725944614016ULL) - (18177152725944614016ULL)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((long long int) min((arr_79 [i_19]), (((/* implicit */long long int) -924288990)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
