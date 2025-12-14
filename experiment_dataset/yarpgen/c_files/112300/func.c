/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112300
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((unsigned char) var_10)))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)204)) ? (((((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) | (((/* implicit */unsigned long long int) (~(4036236708257883812LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 51589796)) ? (((((/* implicit */int) var_2)) & (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) var_2)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_13 = ((/* implicit */signed char) ((_Bool) ((-4036236708257883825LL) != (var_3))));
            var_14 = ((/* implicit */int) arr_2 [i_0]);
        }
        var_15 = ((/* implicit */unsigned char) ((int) ((unsigned char) var_2)));
        /* LoopNest 3 */
        for (unsigned char i_2 = 3; i_2 < 12; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (unsigned char i_4 = 1; i_4 < 12; i_4 += 2) 
                {
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) << (((((/* implicit */int) ((short) (unsigned char)231))) - (207)))))) <= (((unsigned int) ((((/* implicit */_Bool) -4036236708257883825LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (var_4))))));
                        arr_13 [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((short) (short)21453));
                        arr_14 [i_0 + 1] [5] [12] [i_0] [i_4] = ((/* implicit */int) ((((arr_8 [i_0]) + (9223372036854775807LL))) << (((4036236708257883824LL) - (4036236708257883824LL)))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0]))) < (((/* implicit */int) (unsigned char)255))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_0))) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) >= (var_7)))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 2; i_8 < 14; i_8 += 4) 
                    {
                        var_18 *= ((/* implicit */unsigned int) var_3);
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) (signed char)-2)) : (arr_23 [i_8 + 1] [i_8 - 1] [i_8 + 2]))))));
                        var_20 |= arr_20 [i_8 - 2] [(short)10] [i_5];
                    }
                    arr_27 [i_5] [i_5] [i_7] [(unsigned short)7] = ((/* implicit */unsigned char) arr_16 [i_5]);
                    arr_28 [i_5] [(signed char)15] [i_6] [i_6] = ((/* implicit */int) ((unsigned char) ((short) arr_24 [i_5] [i_5] [i_7])));
                }
            } 
        } 
        arr_29 [14] [14] &= arr_24 [(unsigned short)2] [i_5] [(_Bool)1];
        /* LoopNest 2 */
        for (signed char i_9 = 2; i_9 < 14; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 1; i_11 < 14; i_11 += 1) 
                    {
                        for (int i_12 = 0; i_12 < 17; i_12 += 1) 
                        {
                            {
                                arr_41 [i_5] [i_9] [i_9 + 1] [1] [i_11] [i_12] [i_12] = ((/* implicit */int) (_Bool)0);
                                arr_42 [i_12] [i_10] [i_5] [i_11] [i_11] [i_9] = ((/* implicit */unsigned int) ((unsigned char) var_3));
                            }
                        } 
                    } 
                    arr_43 [i_5] [i_9] [i_5] = ((/* implicit */unsigned int) arr_40 [i_5] [i_5] [i_10] [i_9] [i_10] [i_5]);
                }
            } 
        } 
    }
    for (unsigned int i_13 = 0; i_13 < 23; i_13 += 4) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)25)) * (((/* implicit */int) (signed char)71))))) ? ((-(4036236708257883816LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_13])) || (var_10)))))))) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (unsigned char)18))));
        arr_46 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)36)) ? (var_8) : (((/* implicit */unsigned long long int) var_7))));
        arr_47 [i_13] [(unsigned char)13] = ((/* implicit */short) 4036236708257883838LL);
        var_22 = ((/* implicit */unsigned int) min((var_22), (((unsigned int) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */int) ((signed char) 4294967295U))) : (((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) (unsigned char)24)) : (var_5))))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 2) 
    {
        for (signed char i_15 = 4; i_15 < 15; i_15 += 1) 
        {
            for (unsigned char i_16 = 0; i_16 < 18; i_16 += 1) 
            {
                {
                    var_23 = ((/* implicit */short) arr_52 [i_15 - 1] [i_16]);
                    arr_55 [i_14] [i_16] [i_16] = arr_53 [i_16] [i_16];
                }
            } 
        } 
    } 
}
