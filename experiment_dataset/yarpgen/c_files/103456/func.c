/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103456
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) min((((/* implicit */short) var_12)), (var_11))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)14)) || (((/* implicit */_Bool) var_4))))), (((int) (short)-20954))))) ? ((+(((/* implicit */int) (short)-25281)))) : (((/* implicit */int) ((11531335600196809311ULL) <= (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) var_8)) : (15041954931037491450ULL))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_17 |= (-(((((((/* implicit */_Bool) 3404789142672060152ULL)) ? (6915408473512742312ULL) : (((/* implicit */unsigned long long int) 5625860123907780479LL)))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_4])), (arr_10 [(unsigned short)0] [i_1] [i_1] [(unsigned short)0] [i_1] [(unsigned short)0])))))));
                                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6915408473512742312ULL)) ? (((((/* implicit */_Bool) arr_2 [i_0] [6U])) ? (6018391132989567467LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [3] [i_2]))))) : (max((arr_10 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0]), (((/* implicit */long long int) var_6)))))))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_11)), (arr_4 [(unsigned char)9] [(_Bool)0] [(_Bool)1]))) | (((/* implicit */unsigned int) ((/* implicit */int) min(((short)23872), (((/* implicit */short) (signed char)-56))))))))) ? (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) : (arr_12 [(short)9] [(short)9] [(short)9] [i_4]))) / (arr_12 [i_0] [i_1] [i_3] [i_4]))) : (((/* implicit */unsigned long long int) ((-6018391132989567468LL) + (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (1LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 22; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((var_4) == ((+(var_4)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        var_21 = min(((+(arr_15 [i_5]))), (((/* implicit */long long int) ((_Bool) arr_15 [i_5]))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            arr_28 [i_5] [1ULL] [1ULL] [1ULL] [i_9] = ((/* implicit */long long int) var_2);
                            var_22 = ((/* implicit */unsigned char) (-(arr_27 [i_6 + 2] [i_5] [i_6 + 1] [i_6])));
                            arr_29 [i_5] [i_6] [i_5] [i_8] [i_9] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) -3252158024510713966LL)) ? (810916320U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23862))))));
                        }
                        /* vectorizable */
                        for (signed char i_10 = 4; i_10 < 23; i_10 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (11531335600196809297ULL)))));
                            var_24 = ((/* implicit */unsigned int) arr_25 [i_5] [(_Bool)1] [i_7] [i_5] [i_10 - 1]);
                        }
                        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
                        {
                            var_25 = ((/* implicit */_Bool) 1267688497U);
                            var_26 = ((((/* implicit */unsigned long long int) min((((((/* implicit */int) (short)0)) ^ (((/* implicit */int) arr_26 [i_5] [i_6] [i_5] [i_8] [i_5] [i_6] [i_5])))), (((/* implicit */int) arr_22 [i_5] [i_6] [i_5] [i_8]))))) * ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))) | (18446744073709551615ULL))))));
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (short)7))));
                        }
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 24; i_12 += 2) 
        {
            for (unsigned short i_13 = 0; i_13 < 24; i_13 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        for (short i_15 = 0; i_15 < 24; i_15 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) arr_25 [4U] [4U] [4U] [i_12] [i_15]))))))));
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [i_5] [i_5] [i_13] [i_14] [i_15] [i_12])) | (((/* implicit */int) max((arr_17 [i_5]), ((short)2190))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) (unsigned char)111)) : ((+(((/* implicit */int) min((var_14), (var_14)))))))))));
                    arr_46 [(signed char)23] [(signed char)23] [i_5] [(short)23] = ((((/* implicit */_Bool) 15902268101394979631ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)36214)))))) : (2355029717U));
                    var_31 = ((unsigned long long int) arr_33 [(signed char)12] [i_5] [i_12] [i_12] [(signed char)12] [i_5]);
                    /* LoopSeq 2 */
                    for (long long int i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned short) max(((~(((((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) arr_43 [i_5] [i_5])) : (var_0))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_22 [i_5] [i_12] [i_5] [i_12])), (var_6))))));
                        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) var_12))));
                        arr_49 [i_5] [i_12] [i_13] [i_16] = ((/* implicit */short) min((min((arr_37 [i_5] [i_13]), (arr_37 [i_5] [i_12]))), (((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_5])))))));
                        arr_50 [i_5] [i_5] [i_12] [i_5] [i_13] [i_13] = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) var_10)) ? (44161667229326282ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_5] [i_5]))))))) / (max((((/* implicit */unsigned long long int) -3917907261250232609LL)), (0ULL)))));
                    }
                    /* vectorizable */
                    for (signed char i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((/* implicit */long long int) var_1)) <= ((+(var_15))))))));
                        var_35 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)67))) : (4262282739335478981ULL)))));
                    }
                }
            } 
        } 
        var_36 = ((/* implicit */_Bool) var_11);
    }
    /* vectorizable */
    for (long long int i_18 = 0; i_18 < 15; i_18 += 1) 
    {
        arr_56 [i_18] [i_18] = ((/* implicit */unsigned int) ((int) arr_25 [i_18] [i_18] [2ULL] [(unsigned short)22] [i_18]));
        var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_2))))));
        /* LoopNest 2 */
        for (unsigned short i_19 = 0; i_19 < 15; i_19 += 2) 
        {
            for (short i_20 = 0; i_20 < 15; i_20 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_21 = 0; i_21 < 15; i_21 += 1) 
                    {
                        for (unsigned int i_22 = 0; i_22 < 15; i_22 += 4) 
                        {
                            {
                                var_38 *= ((((/* implicit */_Bool) arr_36 [i_19] [i_19])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_22] [i_19]))));
                                var_39 = ((/* implicit */short) ((int) ((unsigned char) (short)-236)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_23 = 1; i_23 < 11; i_23 += 4) 
                    {
                        for (unsigned int i_24 = 0; i_24 < 15; i_24 += 2) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((signed char) (signed char)-41)))));
                                var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11))))))))));
                                var_42 = ((/* implicit */unsigned long long int) (unsigned short)29323);
                                arr_74 [i_18] [(_Bool)1] [i_20] [i_23] [(_Bool)1] [1ULL] = ((/* implicit */unsigned int) ((_Bool) (+(arr_19 [i_18] [i_19] [i_18]))));
                                var_43 = ((/* implicit */unsigned char) (~(1066262485480079689ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_44 = ((/* implicit */unsigned short) min((((min((((/* implicit */unsigned long long int) var_2)), (var_13))) ^ (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_14))));
    var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) (+(var_4))))));
}
