/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129844
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))) : (140737488355327ULL)))));
                    var_13 = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (+(((/* implicit */int) (short)32767))))), (34359738367LL))), (((/* implicit */long long int) (unsigned short)47161))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_14 [14] [(unsigned short)10] [(_Bool)1] [(short)1] [6ULL] |= ((/* implicit */unsigned int) (+(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_8))))));
                                var_14 ^= (+(4294967295U));
                                var_15 ^= ((/* implicit */short) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))), (min((var_7), (((/* implicit */unsigned int) var_9))))));
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-111)) ? (max((140737488355327ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)4623))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) min((var_3), (((/* implicit */unsigned short) (short)-20205))))), ((+(((/* implicit */int) var_3))))))))))));
                            }
                        } 
                    } 
                    arr_15 [(short)4] [(_Bool)1] = (((!(((/* implicit */_Bool) var_11)))) ? (max((var_11), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (var_0)))));
                    arr_16 [(signed char)10] [(_Bool)1] [(_Bool)1] [18ULL] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) var_10)))), (((/* implicit */int) (short)(-32767 - 1)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) 0ULL);
                                arr_29 [(short)16] [11U] = ((/* implicit */_Bool) max((((/* implicit */short) (signed char)88)), ((short)21304)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        for (short i_10 = 2; i_10 < 21; i_10 += 4) 
                        {
                            {
                                arr_35 [3] [9LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_0) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)-5732)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_3)))))));
                                var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)41337)) ? ((~(13415333244795145539ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)1248)), (((((/* implicit */_Bool) (short)-6231)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_11))))))));
                                var_19 = ((/* implicit */_Bool) max((max((var_5), (((/* implicit */unsigned long long int) ((var_2) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-24)))))))), (max((((/* implicit */unsigned long long int) var_0)), (max((var_5), (((/* implicit */unsigned long long int) var_4))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 2; i_11 < 23; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 2; i_12 < 21; i_12 += 4) 
                        {
                            {
                                var_20 ^= ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_3))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_13 = 2; i_13 < 22; i_13 += 4) /* same iter space */
                    {
                        arr_44 [(short)3] [(_Bool)0] [12ULL] [(unsigned char)8] [(_Bool)1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4))))));
                        var_22 ^= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (long long int i_14 = 2; i_14 < 22; i_14 += 4) /* same iter space */
                    {
                        arr_48 [8U] [18ULL] [(short)11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_1)) ? (var_0) : (var_7))) : (244616295U)));
                        arr_49 [12] [10] [(unsigned char)8] [8] = ((/* implicit */short) (unsigned short)41587);
                        arr_50 [8ULL] [12ULL] [10] [23] [(unsigned char)4] [(short)12] = ((/* implicit */signed char) (_Bool)1);
                    }
                }
            } 
        } 
        arr_51 [(unsigned char)0] = ((/* implicit */_Bool) (~(-3182585018560583462LL)));
    }
    /* vectorizable */
    for (unsigned int i_15 = 2; i_15 < 21; i_15 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */short) (-(((/* implicit */int) var_2))));
        arr_55 [(_Bool)1] = (~(var_7));
        var_24 ^= ((/* implicit */long long int) 14042301629285808659ULL);
    }
    for (unsigned int i_16 = 2; i_16 < 21; i_16 += 4) /* same iter space */
    {
        var_25 ^= ((/* implicit */long long int) var_7);
        var_26 |= ((/* implicit */unsigned char) 1496512187U);
        arr_58 [(signed char)18] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) var_6)))))));
        arr_59 [7U] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned char)242)), (max((((/* implicit */unsigned long long int) var_6)), ((-(4404442444423742957ULL)))))));
        var_27 = ((/* implicit */short) (~(((/* implicit */int) var_10))));
    }
    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (+(var_0))))));
}
