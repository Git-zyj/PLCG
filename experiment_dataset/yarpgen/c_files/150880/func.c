/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150880
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
    var_19 = ((/* implicit */int) min((((unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6)))), (min((((unsigned int) var_16)), (((/* implicit */unsigned int) var_0))))));
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) + (min((min((((/* implicit */unsigned long long int) var_3)), (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min(((~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_13))))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_15)), (var_0)))))))));
                                arr_13 [i_0] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (var_16)))) ? (((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) var_12)), (var_16))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (min((((/* implicit */unsigned short) var_2)), (var_0))))))));
                                arr_14 [(unsigned short)10] [i_1] [i_1 + 1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) != (((/* implicit */int) var_3)))) ? ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (var_16)))))) : (((/* implicit */int) ((var_6) <= (var_16))))));
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) var_14)), (var_16))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) == (var_13)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                arr_22 [i_0] [i_5] [i_2] [(unsigned short)13] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) ((signed char) ((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_1)))))))));
                                arr_23 [i_0] [i_5] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_9))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))))) | (((var_16) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (var_12))) - (79)))))));
                                arr_24 [i_0] [i_5] [i_2] [i_0] [9LL] [i_0] [i_0] = ((/* implicit */long long int) ((((((long long int) var_2)) == (((/* implicit */long long int) ((((/* implicit */int) var_3)) >> (((/* implicit */int) var_4))))))) ? (((/* implicit */int) min((((/* implicit */signed char) ((var_6) != (((/* implicit */long long int) ((/* implicit */int) var_0)))))), (((signed char) var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)30730)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        for (long long int i_8 = 1; i_8 < 23; i_8 += 4) 
        {
            for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        arr_33 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_0))) << (((long long int) var_1))));
                        arr_34 [i_7] [i_7] [i_8] [i_7] [i_10] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_5))) + (((/* implicit */int) ((unsigned short) -3936177141187559386LL)))));
                        arr_35 [i_7] = ((/* implicit */long long int) ((unsigned int) min((((/* implicit */unsigned long long int) var_15)), (var_5))));
                    }
                    for (unsigned short i_11 = 1; i_11 < 21; i_11 += 3) 
                    {
                        arr_38 [i_11] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((min((-3936177141187559418LL), (((/* implicit */long long int) (unsigned short)16695)))) + (((/* implicit */long long int) ((((unsigned int) var_0)) * (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */short) var_15)))))))))));
                        arr_39 [i_7] [(short)13] [i_9] [i_11] = ((/* implicit */unsigned char) min((((((/* implicit */int) var_15)) % (((/* implicit */int) var_15)))), ((-(((/* implicit */int) var_9))))));
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -789332338854358215LL)) && (((/* implicit */_Bool) (short)-1)))))));
                        arr_40 [i_7] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) ((signed char) var_10)))))) : (((((/* implicit */int) var_4)) * (((/* implicit */int) var_17))))));
                    }
                    arr_41 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_15)) % (((/* implicit */int) var_3)))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14))))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_17)))) + (((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_17))))))))));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) min((var_2), (var_17))))))))));
                    arr_42 [i_7] [i_8] = ((/* implicit */short) ((2145949278U) >> (((-1712678717) + (1712678730)))));
                }
            } 
        } 
    } 
}
