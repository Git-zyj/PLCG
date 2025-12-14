/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136675
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_9))))))))));
    var_12 &= ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned long long int) var_8))))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))))) : (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (~(arr_0 [i_4]))))))));
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) min((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)2)))), ((-(arr_9 [i_0] [i_1] [i_0] [i_3]))))))));
                                var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_4))))))), (((((/* implicit */_Bool) min((arr_1 [i_4]), (arr_3 [i_0] [i_2] [i_3])))) ? (((/* implicit */unsigned long long int) ((arr_8 [i_2] [1ULL] [1ULL] [(short)23]) / (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : ((+(var_6)))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((arr_7 [i_1] [i_1] [i_1] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) min((arr_11 [(unsigned char)13] [i_0] [(unsigned char)13] [i_1]), (((/* implicit */signed char) arr_5 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (((/* implicit */short) arr_5 [i_0] [i_1])))))) : ((~(arr_10 [24U] [i_1] [i_0] [i_0] [i_1]))))))))));
                arr_14 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_12 [i_0] [i_1])) && (((/* implicit */_Bool) arr_0 [i_0])))) ? (((((/* implicit */_Bool) var_10)) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1]))))) : ((+(16777215ULL)))))) ? ((+(((/* implicit */int) (unsigned short)61212)))) : ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
    {
        var_17 = arr_15 [i_5];
        /* LoopNest 3 */
        for (short i_6 = 1; i_6 < 22; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    {
                        arr_25 [(short)16] [(short)16] [i_8] [(short)16] |= ((/* implicit */unsigned short) arr_23 [i_5] [(unsigned char)20] [i_8]);
                        arr_26 [i_6] [i_7] [i_6] [i_6] [i_6] = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_5 + 1]))))) <= ((-(arr_13 [i_5] [i_7] [i_7] [i_8] [i_8]))))), ((!(((/* implicit */_Bool) arr_4 [i_5] [i_8]))))));
                        var_18 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_4 [i_5] [i_5])) ? (arr_13 [i_5] [i_7] [i_5] [i_5 + 1] [i_5 + 1]) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)20))) ^ (0U))))), (((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_5 [i_8] [i_6])))))))));
                        arr_27 [i_7] [i_8] = ((/* implicit */_Bool) var_10);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
    {
        var_19 -= ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_28 [(signed char)16] [i_9]))))));
        arr_30 [i_9] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_21 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_9] [i_9 + 1] [i_9] [i_9] [i_9 + 1] [i_9 + 1])))))) : (((((/* implicit */long long int) var_9)) - (arr_7 [i_9] [i_9] [i_9] [i_9]))))), (((/* implicit */long long int) var_2))));
        /* LoopNest 2 */
        for (signed char i_10 = 2; i_10 < 21; i_10 += 2) 
        {
            for (unsigned short i_11 = 3; i_11 < 20; i_11 += 1) 
            {
                {
                    arr_36 [i_9] [i_10] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_9] [i_9]))) : (arr_8 [i_9] [i_10] [i_10] [i_10]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2)))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_7))))))) : (((((/* implicit */_Bool) arr_12 [i_10] [i_11])) ? (((((/* implicit */_Bool) 3674109199U)) ? (((/* implicit */int) (short)-20176)) : (((/* implicit */int) (signed char)91)))) : (min((((/* implicit */int) arr_22 [i_9 + 1] [i_10 + 1] [i_10] [i_10] [i_11 - 2] [i_11 - 1])), (arr_9 [i_9] [i_9] [i_10] [i_11])))))));
                    var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_9] [i_9] [i_11] [i_11])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))))), (arr_23 [i_9 + 1] [i_10] [i_9])));
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 4) 
                    {
                        var_21 ^= ((/* implicit */short) arr_4 [i_9 + 1] [i_11]);
                        var_22 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_2)) & (((/* implicit */int) arr_29 [i_10]))))))) * (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_3)), (arr_21 [i_10])))), (((arr_37 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_11] [i_12] [i_12]) ? (var_10) : (arr_34 [i_9] [i_10] [i_11] [i_9])))))));
                        var_23 = ((/* implicit */unsigned int) (+(1770602883)));
                    }
                    for (unsigned char i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        arr_41 [i_9] [i_9] [i_11 + 1] [(signed char)18] = ((/* implicit */unsigned short) (~(min((min((arr_24 [i_9] [i_9] [i_13]), (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-20187)) ? (((/* implicit */int) (short)0)) : (1770602883))))))));
                        arr_42 [i_9] [i_10 + 1] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (var_8)))), (min((arr_10 [i_13] [i_11] [i_11 - 3] [i_10] [i_9 + 1]), (((/* implicit */unsigned long long int) arr_5 [i_10] [i_10])))))) + (min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) var_5)) ? (arr_35 [i_9] [i_10] [i_9] [i_13]) : (var_10)))))));
                    }
                }
            } 
        } 
        arr_43 [14U] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_29 [(short)4])) + (2147483647))) >> (((((/* implicit */int) arr_29 [(unsigned short)4])) + (17)))))) : (((((/* implicit */_Bool) var_10)) ? (arr_24 [(unsigned short)5] [i_9 + 1] [i_9 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_9 + 1] [i_9] [i_9] [i_9 + 1] [i_9] [i_9]))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [12U] [i_9 + 1])))))))))));
    }
    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) /* same iter space */
    {
        arr_46 [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) var_2)), (arr_8 [i_14] [i_14] [i_14] [i_14 + 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_14]))) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_31 [i_14] [i_14 + 1] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_14] [i_14] [i_14]))) : (var_8))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_14] [i_14] [i_14 + 1] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_0 [i_14]))))))));
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((var_5), (arr_10 [i_14] [i_14 + 1] [i_14 + 1] [(unsigned char)4] [i_14]))), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [(unsigned char)18] [(unsigned char)18]))) : ((-((~(var_10))))))))));
    }
    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
    {
        var_25 = arr_3 [i_15] [i_15] [i_15 + 1];
        arr_49 [i_15] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_16 [i_15]), (arr_13 [i_15] [22U] [i_15] [22U] [i_15]))))))) >= (((/* implicit */int) var_4))));
    }
}
