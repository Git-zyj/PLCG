/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138468
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) min(((_Bool)0), (arr_1 [i_1])))) <= ((~(((/* implicit */int) arr_3 [i_2]))))))) - (((((/* implicit */int) ((_Bool) (short)-6724))) * ((~(((/* implicit */int) var_1))))))));
                    var_12 *= ((/* implicit */signed char) (+(((((/* implicit */int) arr_2 [i_2])) << ((((+(268435455))) - (268435441)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 7; i_5 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) arr_7 [i_3]);
                    var_14 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) min((2581424234U), (4294967295U)))) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) -115335923)))))) : (((((/* implicit */_Bool) 0)) ? (arr_10 [2U] [2U]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    for (signed char i_9 = 3; i_9 < 16; i_9 += 1) 
                    {
                        {
                            arr_25 [10] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_24 [i_9] [i_9 - 3] [i_9 - 3] [i_9 - 1])))) ? (((min((arr_16 [i_9]), (((/* implicit */unsigned long long int) arr_23 [(signed char)19])))) * (((/* implicit */unsigned long long int) (~(951360339566046997LL)))))) : (((/* implicit */unsigned long long int) ((int) (+(-7378609842688742793LL)))))));
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) (_Bool)0))))))));
                            arr_26 [(unsigned char)15] [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */_Bool) arr_22 [i_6] [i_7] [i_8] [i_9])) ? (arr_16 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_9] [(unsigned char)18] [i_9] [i_9 - 2]))))))), (((/* implicit */unsigned long long int) ((arr_17 [i_7] [i_7 - 1]) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(unsigned char)8] [(unsigned char)8]))) / (2581424234U))))))));
                            arr_27 [i_6] [(signed char)17] [i_8] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3506538186U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    for (unsigned int i_11 = 2; i_11 < 18; i_11 += 1) 
                    {
                        {
                            arr_33 [19LL] [i_7 - 1] [i_7] [i_7] = ((/* implicit */signed char) (~((-(1713543082U)))));
                            arr_34 [i_7] [(signed char)16] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2581424234U)));
                            var_16 = ((/* implicit */_Bool) (~((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)47314)) <= (((/* implicit */int) (unsigned char)0)))))))));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) arr_29 [i_6]))), (min((((/* implicit */unsigned short) (signed char)-98)), ((unsigned short)61313))))))) : (((((/* implicit */_Bool) arr_23 [i_7])) ? (arr_17 [i_11 + 2] [i_11 + 2]) : (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_8)))))))))));
                            var_18 *= ((/* implicit */unsigned int) -694996602);
                        }
                    } 
                } 
            }
        } 
    } 
}
