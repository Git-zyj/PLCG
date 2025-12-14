/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161901
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) var_6);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) ((var_0) != (var_8)))) < (((/* implicit */int) ((var_3) > (var_8))))))) <= (((/* implicit */int) ((1888273632) >= (((/* implicit */int) (unsigned char)245)))))));
                                arr_15 [(unsigned char)8] [i_2] [i_2] [(unsigned char)13] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) > ((+(((/* implicit */int) ((var_7) <= (((/* implicit */int) var_4)))))))));
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((((/* implicit */_Bool) ((18446744073709551608ULL) + (18446744073709551591ULL)))) ? (((/* implicit */unsigned int) ((int) ((var_9) != (((/* implicit */unsigned int) var_12)))))) : (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) ((int) var_3)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned char) ((((var_7) <= (((/* implicit */int) ((var_12) < (var_2)))))) ? (((((/* implicit */_Bool) ((var_3) % (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((var_7) < (var_10)))))) : (((/* implicit */int) ((((((/* implicit */int) var_4)) != (var_0))) || (((/* implicit */_Bool) var_2)))))));
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */unsigned int) ((var_12) % (var_8)))) / (((((/* implicit */_Bool) max((var_3), (var_8)))) ? (((/* implicit */unsigned int) var_0)) : ((+(var_9))))))))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)152)) >> (((-691251140) + (691251143))))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (min((((/* implicit */unsigned int) var_5)), (var_9))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) <= (var_2))))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) >> (((min((var_7), (((/* implicit */int) var_4)))) - (178)))));
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (var_3)))) ? (((/* implicit */unsigned int) (+(var_3)))) : (((unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_12))))))))));
                        }
                        var_22 = ((var_10) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */int) var_5)))))))));
                        var_23 = ((/* implicit */unsigned long long int) ((min((var_0), (var_2))) - (((/* implicit */int) var_4))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (+(644786851))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
                    {
                        arr_27 [8U] [i_2] [(unsigned char)2] [i_2] [i_2] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((var_10) / (var_0)))));
                        var_25 = var_10;
                        var_26 = ((/* implicit */unsigned long long int) var_1);
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        arr_30 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_10)) : (var_9))), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) max((min((var_9), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_0))))) >= (((/* implicit */int) var_5)))))) : ((~(2746071907U))))))));
                        var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) (~(var_3))))));
                        var_29 += ((/* implicit */unsigned char) ((18446744073709551608ULL) | (((/* implicit */unsigned long long int) 691251118))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_10 = 3; i_10 < 22; i_10 += 2) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        for (int i_14 = 0; i_14 < 24; i_14 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
                                arr_44 [i_12] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7750099033018922403ULL)) || (((/* implicit */_Bool) -691251163))));
                                arr_45 [i_10] [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                    arr_46 [i_10] [i_10 + 1] [i_12] [i_10] = ((/* implicit */int) ((((183121099U) < (((/* implicit */unsigned int) 1038701612)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (var_12)))) ? (var_8) : (((((/* implicit */_Bool) var_10)) ? (var_0) : (var_12)))))) : (((((var_0) <= (var_1))) ? (((/* implicit */unsigned long long int) var_9)) : (((17ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254)))))))));
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_3) : (var_1)))) ? (var_8) : ((+(((/* implicit */int) (unsigned short)28238))))));
                    arr_47 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) > (((((/* implicit */_Bool) 5649011171770381327ULL)) ? (2522664211U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)141)))))));
                }
            } 
        } 
    } 
}
