/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150447
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1])))) + (((((/* implicit */int) arr_0 [i_0 - 1])) - (((/* implicit */int) arr_0 [i_0 - 1]))))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */_Bool) 1792ULL)) ? (18446744073709549815ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)60)))))))) ? (((((/* implicit */_Bool) (unsigned char)91)) ? (((1792ULL) >> (((var_13) - (3567808285U))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)228))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0] [i_0 - 1]), (arr_1 [i_0] [i_0 + 1])))))));
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_0] [1] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) max((arr_3 [i_0] [i_0] [i_0 + 1]), (arr_3 [i_0] [i_0 + 1] [i_0 + 1]))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_2] [(_Bool)1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) min((arr_4 [i_0]), (arr_0 [i_0 + 1])))) >= ((-(arr_7 [i_2] [i_2])))));
            var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_0 - 1])), (1820ULL)))) ? (((/* implicit */unsigned long long int) 12582912U)) : (min(((-(18446744073709549815ULL))), (((/* implicit */unsigned long long int) ((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_2]))))))))));
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16993))) : (var_6))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (short)31685)))))) : (((/* implicit */int) ((var_3) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [(unsigned char)1]))))))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_14 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1]))))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_0 - 1] [i_0 - 1]))) : (((/* implicit */int) ((_Bool) arr_1 [i_0 + 1] [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((short) arr_4 [i_0 - 1]))), (((2108696135U) ^ (2312000187U))))))));
                                var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_18 [i_0 + 1] [i_3] [i_0 + 1] [i_5 - 1] [i_4]) * (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (var_12))))))) ? (max((min((var_1), (((/* implicit */int) (signed char)-45)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) : (((((/* implicit */_Bool) arr_3 [i_5] [i_5 + 1] [i_0 - 1])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)29527)))) : (((/* implicit */int) arr_5 [i_0 + 1]))))));
                            }
                        } 
                    } 
                    arr_21 [i_0 + 1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) 0U);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        arr_24 [i_4] [i_7] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (short)0)))) + ((+(((/* implicit */int) (_Bool)1))))));
                        arr_25 [i_3] [i_4] [i_3] [i_3] [i_3] [i_0 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)124)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                }
            } 
        } 
        arr_26 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1])) - (arr_7 [(unsigned short)8] [i_0 - 1])))) ? (((((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_0] [i_0] [(_Bool)1]))))) + (max((((/* implicit */long long int) var_0)), (14LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4744619369071979784LL)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [6LL]))))))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(((3823385306236730575ULL) << (((((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0])) + (20065))))))))));
        arr_27 [i_0] [i_0 - 1] = ((/* implicit */short) (((~(((/* implicit */int) arr_1 [i_0 - 1] [i_0])))) >= (((/* implicit */int) min((arr_1 [i_0 + 1] [i_0]), (arr_1 [i_0 + 1] [i_0 - 1]))))));
    }
    for (unsigned short i_8 = 1; i_8 < 22; i_8 += 4) /* same iter space */
    {
        arr_32 [9U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)33692)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)106))) : (-5277682577955321585LL)));
        arr_33 [i_8] [i_8 + 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_8 + 1])) <= (((/* implicit */int) ((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */int) arr_0 [i_8])) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_8 - 1])) > (((/* implicit */int) arr_5 [i_8 - 1])))))));
    }
    /* vectorizable */
    for (unsigned short i_9 = 1; i_9 < 22; i_9 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_9] [i_9 - 1])) << (((3797351635017459843LL) - (3797351635017459837LL))))))));
        /* LoopSeq 2 */
        for (long long int i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_31 [i_9] [i_9]))));
            /* LoopSeq 1 */
            for (int i_11 = 4; i_11 < 21; i_11 += 1) 
            {
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_9 - 1])) <= (((/* implicit */int) arr_5 [i_9 - 1]))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    for (unsigned short i_13 = 2; i_13 < 21; i_13 += 1) 
                    {
                        {
                            arr_45 [i_9] [i_9] [i_12] [(unsigned short)15] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_41 [(_Bool)1] [i_10] [i_12] [(unsigned char)2])) : (((/* implicit */int) (unsigned short)0)))) <= (255039806)));
                            arr_46 [i_13] [i_13] [i_13 - 2] [i_12] [i_12] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (_Bool)1))))));
                            arr_47 [i_12] [i_10] [i_11] [i_12] [i_13 - 1] = ((/* implicit */signed char) arr_20 [i_9] [i_10] [i_12]);
                            arr_48 [i_9 + 1] [i_12] [i_12] [i_9] [i_9] = ((/* implicit */_Bool) ((short) arr_34 [i_11 - 1] [i_9 + 1]));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) ((unsigned char) arr_22 [i_9] [i_10] [i_11 - 3] [i_10] [i_11 - 4] [i_11]));
                arr_49 [i_9] [i_10] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_9 - 1])) ? (((/* implicit */unsigned int) 1925542732)) : (arr_29 [i_9 - 1])));
            }
        }
        for (short i_14 = 0; i_14 < 23; i_14 += 1) 
        {
            arr_52 [i_9] [i_9] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_23 [i_9 - 1] [i_9] [i_14]))));
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((arr_40 [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_9 + 1] [20LL]))) : (-5651753658499988104LL))))));
        }
    }
    var_27 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
    {
        for (long long int i_16 = 0; i_16 < 16; i_16 += 1) 
        {
            {
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_15 - 1] [i_15 - 1]))))) : ((+(((/* implicit */int) arr_31 [i_15 - 1] [i_15 - 1]))))));
                var_29 |= ((/* implicit */_Bool) max((min((min((((/* implicit */unsigned long long int) (short)17008)), (arr_39 [i_15 - 1] [i_16]))), (min((((/* implicit */unsigned long long int) 16777216)), (var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-8838)) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_50 [i_15 - 1] [i_16])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_17 = 0; i_17 < 11; i_17 += 1) 
    {
        for (unsigned long long int i_18 = 2; i_18 < 10; i_18 += 1) 
        {
            for (short i_19 = 0; i_19 < 11; i_19 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_20 = 0; i_20 < 11; i_20 += 1) 
                    {
                        var_30 = ((/* implicit */signed char) var_11);
                        arr_66 [i_18] [i_19] [i_20] = ((/* implicit */unsigned char) ((short) (~(min((1783ULL), (var_2))))));
                        var_31 = ((arr_56 [i_17] [i_18] [i_20]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_61 [i_17] [i_17] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4)))))) : (var_12));
                        var_32 += ((/* implicit */long long int) ((((/* implicit */int) ((signed char) (unsigned short)38947))) ^ (((/* implicit */int) ((short) (short)-2625)))));
                        var_33 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (signed char)-4)), (15012044492480560951ULL)));
                    }
                    var_34 = ((/* implicit */short) ((signed char) min((arr_12 [i_18 + 1]), (arr_12 [i_18 - 1]))));
                    arr_67 [i_17] [i_17] [i_19] = ((/* implicit */signed char) ((unsigned int) (-(((((((/* implicit */int) (short)-22734)) + (2147483647))) >> (((4956673537070501695ULL) - (4956673537070501685ULL))))))));
                }
            } 
        } 
    } 
}
