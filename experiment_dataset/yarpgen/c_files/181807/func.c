/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181807
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
    var_15 = var_0;
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((arr_2 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [0ULL])))));
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned char) 0);
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)8] [i_2] [i_2] [i_2] [i_3 - 1])) ? (((/* implicit */unsigned int) -1241771367)) : (var_14)))) ? (arr_1 [i_0] [(_Bool)1]) : (((((/* implicit */_Bool) 13310581790191737623ULL)) ? (arr_7 [12LL] [i_1] [11] [i_3] [12LL] [(unsigned short)0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [(_Bool)1] [(_Bool)1] [i_2] [i_2] [i_3])))))));
                        var_19 = ((/* implicit */short) (signed char)65);
                    }
                    for (int i_4 = 1; i_4 < 16; i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [(unsigned short)14] [i_0] [i_0] [i_0] [14] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)40))));
                        var_20 = ((/* implicit */signed char) ((((2918220150U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0]) != (58720256U)))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_5 + 1] [i_0]);
                                var_22 = ((/* implicit */unsigned short) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((arr_7 [i_0] [(unsigned short)1] [i_0] [i_0] [i_0] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22872))))))));
    }
    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
    {
        arr_21 [i_7] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)65))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                {
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (((-(((/* implicit */int) var_4)))) > (((/* implicit */int) ((((/* implicit */int) arr_20 [i_8] [i_7])) >= (((/* implicit */int) var_4))))))))));
                    var_25 -= arr_20 [i_9] [i_7];
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_23 [i_7] [i_7])) + (((/* implicit */int) arr_23 [i_7] [i_7])))), (((/* implicit */int) min((arr_23 [i_7] [(short)16]), (arr_23 [i_7] [(unsigned char)6]))))));
    }
    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            for (unsigned int i_12 = 4; i_12 < 23; i_12 += 3) 
            {
                {
                    var_27 = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_20 [i_10] [i_12 - 4])))) + (((/* implicit */int) ((short) arr_32 [i_10])))));
                    var_28 = ((/* implicit */unsigned char) arr_27 [i_10] [i_10]);
                    arr_36 [i_11] [i_11] [i_12] |= ((/* implicit */unsigned int) arr_31 [i_11] [i_11]);
                    /* LoopNest 2 */
                    for (long long int i_13 = 1; i_13 < 23; i_13 += 4) 
                    {
                        for (unsigned int i_14 = 2; i_14 < 21; i_14 += 2) 
                        {
                            {
                                var_29 = max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_10] [i_10])) ? (arr_41 [i_14] [i_10] [(signed char)22] [9LL] [i_14]) : (((/* implicit */int) arr_23 [(signed char)3] [i_12]))))), (arr_30 [i_10] [i_10] [i_13]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (262112) : (((/* implicit */int) arr_42 [i_10] [i_10] [i_12 + 1] [i_14 - 1] [i_14 + 1]))))));
                                var_30 = (unsigned short)52891;
                                var_31 = ((/* implicit */signed char) ((min((((/* implicit */int) var_9)), (var_7))) + (((((/* implicit */int) (signed char)127)) >> (0)))));
                                arr_44 [i_10] [i_10] [(_Bool)1] [(_Bool)1] [i_10] [i_13 - 1] [(signed char)11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 58720267U)) / (var_6)))) ? (12383111427927560420ULL) : (((/* implicit */unsigned long long int) (-(arr_41 [i_13 + 1] [i_10] [(unsigned char)11] [i_12 - 4] [i_14 - 1]))))));
                                arr_45 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)0))))) ? (((/* implicit */int) arr_42 [i_10] [i_10] [(unsigned short)21] [i_13] [i_10])) : (((((/* implicit */int) ((var_14) < (((/* implicit */unsigned int) var_10))))) | (((/* implicit */int) arr_43 [i_14 - 1] [i_13] [13] [i_11] [(signed char)3]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_15 = 0; i_15 < 24; i_15 += 3) 
        {
            for (unsigned char i_16 = 0; i_16 < 24; i_16 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        for (short i_18 = 0; i_18 < 24; i_18 += 3) 
                        {
                            {
                                arr_54 [i_10] [i_15] [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_32 [i_10]))))), ((-(4186112U)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65528))))) : (((((/* implicit */_Bool) ((signed char) arr_22 [(short)10] [i_10]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((-(arr_46 [i_10] [i_10])))))));
                                var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65530)) * ((-(((/* implicit */int) (unsigned char)145))))))) * (1770121415U)));
                            }
                        } 
                    } 
                    var_33 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 0)) == (15035852153189225086ULL)));
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned int) arr_23 [i_10] [i_10]);
    }
}
