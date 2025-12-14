/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147320
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
    var_16 *= ((/* implicit */_Bool) (+(var_3)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned int) max((arr_3 [(_Bool)1]), ((~(arr_3 [i_0])))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (var_0)))) ? (((var_0) | (((/* implicit */unsigned int) arr_3 [i_1])))) : (((/* implicit */unsigned int) ((int) var_1)))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) min((min((var_5), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))), (((unsigned long long int) (+(((/* implicit */int) (signed char)-52)))))));
                            var_17 = ((/* implicit */unsigned char) (+((-9223372036854775807LL - 1LL))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) - (var_7));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        for (int i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            {
                arr_20 [i_4] = ((/* implicit */signed char) var_10);
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        {
                            arr_25 [i_4] [i_5] [i_5] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775807LL)))) ? (((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4] [i_7]))) : ((-(-9223372036854775807LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5] [i_4])))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (((~(var_10))) == (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_4)) : (9223372036854775807LL))))))) <= (max((-9223372036854775788LL), (((/* implicit */long long int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_2)))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    arr_29 [(unsigned short)1] [i_4] [i_4] = ((/* implicit */unsigned short) arr_24 [i_4] [i_4]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        for (signed char i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            {
                                arr_35 [i_8] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775788LL)) ? (9223372036854775789LL) : (-9223372036854775807LL)));
                                arr_36 [i_4] [i_4] [i_8] [i_4] [i_10] = ((/* implicit */signed char) -9223372036854775790LL);
                                var_19 = ((/* implicit */long long int) ((var_5) <= (((/* implicit */unsigned long long int) (+(arr_27 [i_10] [9] [i_8] [9]))))));
                                arr_37 [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(9223372036854775807LL)));
                                var_20 = (!((!(((/* implicit */_Bool) 9223372036854775807LL)))));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4] [i_5])) ? (arr_15 [i_5] [i_5]) : (arr_15 [i_4] [i_8])));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_42 [i_4] [(unsigned char)14] [i_4] = var_1;
                                arr_43 [i_11] [i_5] [i_8] [i_4] [i_12] [i_8] = ((/* implicit */unsigned int) (+(arr_32 [i_4] [i_5] [i_12])));
                            }
                        } 
                    } 
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775807LL))))))))));
                    arr_46 [i_4] [i_5] [i_5] [i_4] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) != (((/* implicit */unsigned long long int) var_3)))))) ^ (((((((/* implicit */_Bool) var_2)) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_23 [i_13] [i_13] [(unsigned char)6] [i_4])))) ^ (((/* implicit */long long int) var_13))))));
                }
                /* vectorizable */
                for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))));
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 17; i_15 += 1) 
                    {
                        arr_54 [i_4] [i_4] [i_5] [14U] [(signed char)3] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_32 [i_4] [i_14] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_4] [i_4] [i_14] [i_4] [(signed char)0] [i_4] [i_4])))))) ? (((((/* implicit */_Bool) arr_49 [i_15] [0LL] [i_5])) ? (arr_24 [11LL] [i_5]) : (9223372036854775790LL))) : (((((/* implicit */_Bool) var_3)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_39 [i_15] [i_14] [i_5])) : (((/* implicit */int) var_8)))))))));
                    }
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_53 [i_4] [i_4] [i_5] [i_14]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4]))) : (arr_24 [i_4] [i_4])));
                }
                arr_55 [(unsigned short)9] [i_4] [(signed char)0] = ((/* implicit */long long int) max(((~(arr_14 [i_4]))), ((~(arr_14 [i_4])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_16 = 1; i_16 < 7; i_16 += 3) 
    {
        for (short i_17 = 0; i_17 < 10; i_17 += 4) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 4) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775807LL))))));
                    var_27 = ((/* implicit */_Bool) max(((~((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) min((arr_10 [i_17] [i_16 + 1] [i_16 + 2] [i_16 + 1]), (arr_10 [i_18] [i_16 + 2] [i_16 + 1] [i_16 + 2]))))));
                    arr_63 [i_16] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                    /* LoopNest 2 */
                    for (unsigned char i_19 = 0; i_19 < 10; i_19 += 1) 
                    {
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */int) min((var_28), (((int) max(((((-9223372036854775807LL - 1LL)) >= (((/* implicit */long long int) arr_17 [i_16] [i_18] [i_19])))), ((((-9223372036854775807LL - 1LL)) > (((/* implicit */long long int) arr_45 [i_16] [i_16] [(short)3] [i_16 - 1])))))))));
                                arr_68 [i_16 - 1] [i_17] [i_19] [(unsigned char)1] [i_19] [i_19] = ((/* implicit */signed char) (~((-9223372036854775807LL - 1LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 ^= max((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) ((var_7) / (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (9223372036854775807LL))));
}
