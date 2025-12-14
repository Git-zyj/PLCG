/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163247
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [13U] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) == ((~(arr_0 [i_0])))));
        var_20 |= ((/* implicit */unsigned short) arr_0 [(short)11]);
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1097567689)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)127), ((signed char)116))))) : (arr_0 [i_1])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_7 [i_1] [i_2] [i_2]) ^ (arr_1 [i_1] [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (arr_6 [i_2]))))));
            arr_9 [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned int) var_3);
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-29))))))));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    var_24 *= ((unsigned int) (!(((/* implicit */_Bool) arr_6 [i_1]))));
                    var_25 = ((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_1] [i_3]));
                }
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) arr_10 [i_1] [i_2] [i_3]))));
                var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) - (arr_13 [i_1] [i_1] [i_1])));
                var_28 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)127)) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))) ? (((unsigned int) arr_4 [i_2])) : (((/* implicit */unsigned int) ((int) (signed char)116)))));
            }
        }
    }
    for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        var_29 = ((/* implicit */unsigned int) 9564847818994546211ULL);
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_5])) ? ((((+(1612322839223120064ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))) : (var_19)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5])) ? (arr_13 [i_5] [i_5] [i_5]) : (arr_8 [(unsigned char)15]))))));
    }
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6] [i_7] [i_6]))) ^ (min((7548425068468540325ULL), (((/* implicit */unsigned long long int) arr_17 [i_7])))))))));
                            arr_29 [i_6] [i_6] [i_8] [i_9] [i_7] = ((/* implicit */unsigned short) ((short) ((((var_12) % (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6] [i_6]))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_24 [i_9] [i_6] [i_7] [i_6])))))));
                            var_32 -= ((/* implicit */int) (signed char)-29);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        for (long long int i_12 = 3; i_12 < 19; i_12 += 1) 
                        {
                            {
                                var_33 = (~(((unsigned int) (signed char)-117)));
                                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_21 [i_12])))))));
                                var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_6] [i_6] [i_10] [8U] [i_10] [i_10])) && (((/* implicit */_Bool) arr_35 [i_6] [i_6] [i_11] [i_12 + 1] [i_12 - 1] [i_12]))));
                                arr_39 [i_6] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))))), ((+(arr_19 [i_6] [i_7] [i_6])))));
                            }
                        } 
                    } 
                } 
                arr_40 [i_7] |= ((/* implicit */short) ((((/* implicit */_Bool) (+(3777250402U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_6] [i_6] [i_6] [i_7]))) : (((((/* implicit */unsigned int) (+(((/* implicit */int) arr_33 [i_6] [i_6] [i_6] [i_7]))))) + (((((/* implicit */_Bool) 1543487420U)) ? (4294967295U) : (4095248023U)))))));
                /* LoopNest 3 */
                for (signed char i_13 = 0; i_13 < 22; i_13 += 1) 
                {
                    for (unsigned int i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 3; i_15 < 19; i_15 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (max((((/* implicit */unsigned long long int) ((short) (signed char)29))), (arr_41 [i_7] [i_15 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), (arr_38 [i_15 - 1] [i_15] [i_15] [i_15 + 2] [i_15 - 3] [i_15])))))));
                                var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((arr_19 [i_15 - 1] [i_15] [i_15 - 3]) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)22)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
