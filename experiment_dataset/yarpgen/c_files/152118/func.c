/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152118
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_13))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    var_17 &= (((+(((/* implicit */int) (!(var_0)))))) != (((/* implicit */int) (((-(((/* implicit */int) var_13)))) < (((/* implicit */int) (!(var_6))))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            {
                                arr_19 [i_2] [i_4] [i_3] [i_2] [i_1] [i_2] = ((((/* implicit */long long int) max((((/* implicit */int) min((var_2), (var_4)))), (((((/* implicit */int) var_8)) & (var_1)))))) - (((((/* implicit */long long int) ((/* implicit */int) var_4))) | (((((/* implicit */_Bool) (signed char)72)) ? (-7404506007067122553LL) : (-7404506007067122553LL))))));
                                arr_20 [i_3] [i_2] [i_3] [i_3] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((/* implicit */int) var_8)) - (222)))))) ? ((~(((/* implicit */int) var_10)))) : (max((((/* implicit */int) var_4)), (var_9)))));
                                arr_21 [i_2] [i_4] [i_3] [i_2] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((/* implicit */int) min((var_11), (((/* implicit */unsigned char) var_6))))) : (((/* implicit */int) ((_Bool) var_16))))), (((/* implicit */int) var_7))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((var_6) ? (((/* implicit */int) var_15)) : (var_16))) : (min((var_3), (var_3)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_22 [i_1] = ((/* implicit */unsigned short) min((((-7404506007067122553LL) / (-7404506007067122553LL))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)102)) >> (((7404506007067122552LL) - (7404506007067122544LL))))))));
        /* LoopNest 2 */
        for (long long int i_6 = 1; i_6 < 8; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) (((!(var_0))) ? (((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (_Bool)0)))))) : ((~(max((var_9), (var_16)))))));
                        arr_29 [i_1] [i_6 + 2] [i_8] [i_1] [i_6 - 1] [i_6 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned int) var_6))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) var_6)))) - (var_3)));
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_33 [i_1] [i_6 + 1] [i_6 + 1] [i_7] [i_9] = ((/* implicit */int) ((((/* implicit */int) var_11)) != (((((/* implicit */_Bool) (unsigned short)1536)) ? (((/* implicit */int) (unsigned short)1536)) : (((/* implicit */int) (_Bool)0))))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_12)) ? (var_3) : (var_1))) : (((var_14) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))))));
                        var_21 = ((/* implicit */signed char) ((unsigned short) var_3));
                        arr_34 [i_1] [i_6 + 1] [i_7] [i_9] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */int) var_15)))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_0))));
                    }
                    arr_35 [i_1] [i_6 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) ? (((((/* implicit */_Bool) var_16)) ? (var_3) : (((/* implicit */int) var_15)))) : (((((/* implicit */int) var_0)) * (((/* implicit */int) var_8))))))) ? ((((~(((/* implicit */int) (unsigned short)37973)))) - (var_16))) : (((((((/* implicit */int) var_13)) + (((/* implicit */int) var_7)))) - (((/* implicit */int) var_5))))));
                }
            } 
        } 
        arr_36 [i_1] = ((/* implicit */int) ((var_6) ? ((-(-7404506007067122553LL))) : (((/* implicit */long long int) (((~(((/* implicit */int) var_4)))) ^ (((/* implicit */int) ((unsigned char) var_1))))))));
        /* LoopSeq 1 */
        for (unsigned char i_10 = 2; i_10 < 9; i_10 += 1) 
        {
            arr_40 [i_10] = ((/* implicit */long long int) (((~(((/* implicit */int) var_14)))) - (((/* implicit */int) ((_Bool) (-(((/* implicit */int) (unsigned short)63999))))))));
            arr_41 [i_10] = ((/* implicit */int) ((_Bool) ((((_Bool) var_8)) ? ((~(((/* implicit */int) var_6)))) : (((((/* implicit */int) var_4)) / (((/* implicit */int) var_13)))))));
        }
    }
    var_23 = ((/* implicit */unsigned char) ((int) var_9));
}
