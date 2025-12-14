/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103302
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_3))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (var_13)));
                                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_9)))))));
                                var_19 |= ((/* implicit */long long int) arr_0 [i_3 - 1]);
                            }
                            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                            {
                                var_20 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) 7688219965252896114LL)))));
                                var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) max((9223372036854775807LL), (((/* implicit */long long int) arr_3 [(unsigned char)4] [(unsigned char)7] [i_3])))))))));
                                arr_20 [i_0] [i_3] = ((/* implicit */unsigned short) (((((-(((/* implicit */int) arr_16 [i_3] [i_0])))) % (arr_0 [i_0]))) != (((/* implicit */int) ((short) arr_19 [i_5] [i_3 + 2] [i_2] [i_1] [10])))));
                            }
                            var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0 - 1] [i_3] [i_3 + 1] [i_3 - 1])) ? (((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_3 + 1] [4] [i_3 + 1])) : (((/* implicit */int) arr_19 [i_0] [i_0 + 2] [i_3] [i_3] [i_3 - 1]))))) + ((+(min((((/* implicit */long long int) var_15)), ((-9223372036854775807LL - 1LL))))))));
                        }
                    } 
                } 
                arr_21 [i_1] = (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) var_6)) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((var_8) != (var_1))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                {
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) max((((((/* implicit */_Bool) arr_27 [i_6] [i_8])) ? (9223372036854775801LL) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_8] [i_7]))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_27 [i_7] [i_8]))))))))));
                    /* LoopSeq 4 */
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        var_24 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_0) : (((/* implicit */long long int) arr_23 [i_9]))))) && (((/* implicit */_Bool) arr_24 [i_6] [i_7])))))));
                        /* LoopSeq 1 */
                        for (int i_10 = 2; i_10 < 15; i_10 += 4) 
                        {
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) -9223372036854775803LL)) ? ((+(arr_32 [i_10 - 2] [i_10 - 2] [i_10 - 2] [i_10] [i_10] [i_10]))) : ((-9223372036854775807LL - 1LL)))))));
                            var_26 = ((/* implicit */short) arr_33 [i_6] [i_9] [i_6] [i_7] [i_6]);
                            var_27 = ((((/* implicit */int) ((((/* implicit */int) arr_30 [i_10 + 1] [i_10 - 2] [i_10 - 2] [i_10 - 1])) != (((/* implicit */int) arr_24 [i_10 - 2] [i_10 - 1]))))) * (((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (1650455102U) : (((/* implicit */unsigned int) 0)))) >= (2644512194U)))));
                        }
                        arr_37 [i_9] [i_8] [i_7] [i_6] |= ((/* implicit */signed char) ((long long int) ((((int) var_1)) > (((int) var_3)))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (min((arr_31 [i_6] [i_7] [i_7] [i_8] [i_8] [i_9]), (9223372036854775806LL)))))) ? (((/* implicit */int) arr_28 [i_6] [i_9] [i_7] [i_9])) : (-1903342279)));
                        arr_38 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) -9223372036854775803LL))) >= (((/* implicit */int) ((0LL) <= (((/* implicit */long long int) ((/* implicit */int) var_3))))))))) >> (((((/* implicit */int) ((unsigned short) ((unsigned long long int) 8917868642048066082LL)))) - (49698)))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        var_29 = ((/* implicit */short) 9223372036854775804LL);
                        var_30 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */int) var_7))))))) ? (max((var_0), (((/* implicit */long long int) arr_27 [i_6] [i_8])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) 10969251745387300863ULL))))))));
                        /* LoopSeq 1 */
                        for (signed char i_12 = 0; i_12 < 16; i_12 += 2) 
                        {
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1138351714926155412LL)) ? ((((_Bool)1) ? (9223372036854775803LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)125))))) : (((/* implicit */long long int) 2644512189U))))) ? (((/* implicit */int) ((unsigned short) arr_35 [i_6]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                            arr_43 [i_12] [i_11] [i_7] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((short) ((unsigned short) 1138351714926155411LL)))) : (((/* implicit */int) arr_28 [i_12] [i_11] [i_7] [i_6]))));
                        }
                    }
                    for (short i_13 = 0; i_13 < 16; i_13 += 4) 
                    {
                        arr_46 [i_6] [i_6] [i_8] = ((/* implicit */int) arr_25 [i_6] [i_7] [i_7]);
                        var_32 = ((((/* implicit */_Bool) arr_41 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((((/* implicit */_Bool) arr_31 [i_6] [(_Bool)1] [i_7] [i_13] [i_8] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) var_8)) ? (arr_36 [i_6] [i_8] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned short) arr_28 [i_13] [(unsigned short)10] [i_7] [i_6]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-3779))))) : (((((/* implicit */_Bool) arr_42 [i_8])) ? (var_13) : (((/* implicit */int) arr_34 [9LL] [i_7] [i_7]))))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_33 -= ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_25 [i_14] [i_8] [i_6]))))));
                        arr_50 [i_6] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-9223372036854775803LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 486784844)) ? (var_0) : (((/* implicit */long long int) arr_36 [i_6] [i_7] [i_14])))))))) != (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((arr_42 [i_8]) % (((/* implicit */int) (short)-26557))))))));
                    }
                }
            } 
        } 
    } 
}
