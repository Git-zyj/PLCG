/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115656
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
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 7; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((unsigned int) (((~(((/* implicit */int) (signed char)(-127 - 1))))) == ((-(((/* implicit */int) (signed char)122)))))));
                    var_15 += ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_13))))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        for (short i_4 = 4; i_4 < 22; i_4 += 3) 
        {
            {
                arr_11 [i_4] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) arr_9 [i_4] [i_4 - 4])))));
                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) (~(arr_10 [i_3] [i_3] [i_3])))))));
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 3; i_7 < 20; i_7 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) max((max((413749907U), (((/* implicit */unsigned int) (unsigned short)6)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_4] [i_4 - 3] [i_7 - 2])) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) arr_8 [i_4] [i_4 - 3] [i_7 - 2])))))));
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 3] [i_5])) * (((/* implicit */int) ((unsigned char) (signed char)122)))))) ? (((/* implicit */unsigned long long int) ((long long int) var_12))) : (min((((/* implicit */unsigned long long int) ((unsigned short) var_12))), (18446744073709551593ULL))))))));
                                arr_20 [(short)13] [i_4 + 1] [(short)13] [i_6] [i_4] = ((((((-287379418) - (((/* implicit */int) arr_12 [i_4])))) + (2147483647))) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_7] [i_6] [i_3] [i_4] [i_3])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (unsigned short)19))))))));
                            }
                        } 
                    } 
                    var_20 = var_12;
                }
                /* vectorizable */
                for (short i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
                {
                    arr_23 [i_8] [i_4] [i_4] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_4 + 1]))));
                    var_21 = arr_14 [i_8] [i_4] [(unsigned char)11];
                    var_22 &= ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    arr_31 [i_9] [i_9] [i_10] [i_11] = ((((/* implicit */_Bool) ((arr_30 [i_10] [i_10] [i_10] [i_10]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)16687))) + (arr_26 [i_9] [i_10] [i_11]))) : (((/* implicit */unsigned int) ((int) arr_26 [i_9] [i_10] [i_11]))));
                    arr_32 [i_9] [i_10] [i_11] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_13)), (min((((/* implicit */unsigned long long int) ((unsigned short) var_4))), ((~(arr_24 [(unsigned short)13])))))));
                }
                var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_26 [i_9] [i_9] [i_10]) >> (((((/* implicit */int) var_2)) - (60197)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) var_3))) & (-1LL))), (((/* implicit */long long int) ((unsigned char) arr_29 [i_10] [i_9] [i_10])))))) : (min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) == (var_11))))))));
                var_24 -= ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) arr_27 [i_10])));
                /* LoopNest 3 */
                for (unsigned int i_12 = 1; i_12 < 22; i_12 += 4) 
                {
                    for (unsigned short i_13 = 1; i_13 < 23; i_13 += 3) 
                    {
                        for (int i_14 = 0; i_14 < 24; i_14 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) min((((/* implicit */int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) (short)19))))) ? ((+(((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) (signed char)103))))));
                                arr_40 [i_9] [i_9] [i_12] [i_13] [(unsigned char)2] [i_12] [i_10] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_38 [i_12 + 2] [(signed char)20] [i_12 + 1])) ? (((/* implicit */int) arr_38 [i_12 + 1] [i_12] [i_12 + 2])) : (((/* implicit */int) (unsigned short)65532))))));
                                var_26 = ((/* implicit */unsigned short) min((min(((-(((/* implicit */int) arr_34 [i_10] [i_10])))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-1)))))), (((/* implicit */int) ((unsigned short) arr_34 [21U] [i_12])))));
                                var_27 *= ((/* implicit */unsigned long long int) min((arr_33 [i_14]), (((/* implicit */unsigned int) ((var_12) > (arr_29 [i_12 - 1] [i_12] [i_12 + 2]))))));
                            }
                        } 
                    } 
                } 
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_12))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-4096)))) : (((/* implicit */int) ((unsigned char) -1LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_30 [i_9] [(short)0] [i_10] [i_10]) < (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) >> (((arr_30 [(_Bool)1] [(_Bool)1] [i_10] [i_10]) - (910205357U)))))))))) : (var_12)));
            }
        } 
    } 
}
