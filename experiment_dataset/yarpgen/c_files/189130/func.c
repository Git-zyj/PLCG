/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189130
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_12 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15597)) ? (arr_2 [i_0]) : (((/* implicit */int) (unsigned short)60588))))) ? (((long long int) (unsigned short)15583)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49935))))) : (((/* implicit */long long int) ((((((/* implicit */int) (short)7309)) >= (((/* implicit */int) (unsigned short)48109)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)49953)) : ((-2147483647 - 1))))) : (1233271099U))))));
        var_13 = ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)59494))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (min((var_1), (((/* implicit */unsigned long long int) (unsigned short)20522))))));
        arr_3 [(_Bool)1] |= ((/* implicit */unsigned char) (~((-(((/* implicit */int) var_10))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)4939)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32223))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) (_Bool)1);
        var_15 ^= var_11;
        arr_8 [i_1] [i_1] = var_4;
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    {
                        var_16 ^= ((/* implicit */int) ((long long int) (unsigned short)49953));
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17435))) : (13886417882613575542ULL)))) && (((/* implicit */_Bool) (unsigned short)65535)))))));
                        var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)235))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) (+(min((((((/* implicit */int) arr_15 [i_5] [i_5] [i_5] [i_5] [i_5])) >> (((((/* implicit */int) (short)-9011)) + (9023))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) (unsigned char)235)))))))));
        /* LoopSeq 2 */
        for (unsigned char i_6 = 1; i_6 < 12; i_6 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (+(max((arr_2 [i_6]), (((((/* implicit */_Bool) var_5)) ? (var_6) : (2147483639))))))))));
            var_21 = ((/* implicit */int) ((((_Bool) (unsigned char)209)) ? (min(((~(arr_22 [i_5]))), (((/* implicit */unsigned long long int) arr_19 [i_6])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(short)4])))));
            arr_23 [i_5] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(105553116266496LL)))) ? (max((((/* implicit */long long int) (unsigned char)198)), (7999634975660724295LL))) : (((/* implicit */long long int) (-(-1317195058)))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_7)))));
        }
        for (int i_7 = 1; i_7 < 14; i_7 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_8 = 2; i_8 < 14; i_8 += 2) 
            {
                for (int i_9 = 1; i_9 < 13; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        {
                            var_22 = ((((/* implicit */_Bool) 13446017407689776332ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (unsigned char)90)));
                            arr_36 [i_10] [i_7] [i_7] [i_7] [i_7] [i_5] = ((/* implicit */signed char) (unsigned char)0);
                            var_23 *= ((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned short)54505)) ? (7069643182295146804ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) 2199792009528636920LL)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16792270581024806775ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)168))))));
                        }
                    } 
                } 
            } 
            arr_37 [i_5] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
        }
    }
    var_24 ^= var_8;
    /* LoopNest 2 */
    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) 
    {
        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 3) 
        {
            {
                arr_43 [i_11] [0LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((3476750299333646660ULL), (((/* implicit */unsigned long long int) ((arr_6 [i_11] [i_11]) ? (((/* implicit */int) arr_16 [i_11])) : (arr_35 [i_11] [i_11] [i_11] [i_12] [i_11] [i_12] [i_12]))))))) ? ((~(((/* implicit */int) (unsigned short)21)))) : ((-((+(((/* implicit */int) (_Bool)1))))))));
                arr_44 [i_11] = ((/* implicit */unsigned long long int) -2904636010038472782LL);
                var_25 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -2147483642)) ? (arr_28 [i_12] [i_12] [i_11]) : (arr_28 [i_12] [i_11] [i_11]))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) (short)3975)) : (((/* implicit */int) (unsigned char)127)))))))));
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1620140840064345447ULL)) ? (((/* implicit */int) (unsigned short)65514)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)92)))) : (11653060312643526547ULL))))))));
            }
        } 
    } 
}
