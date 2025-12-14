/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148504
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_2] [i_4] = ((/* implicit */short) var_15);
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned int) -835410692)), (4294967295U)));
                                var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (short)-19760)) : (((/* implicit */int) (short)1816))))), (((((((/* implicit */_Bool) (short)-1805)) ? (arr_2 [4ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46493))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-19753)) ? (((/* implicit */int) (short)27499)) : (((/* implicit */int) (_Bool)1)))))))));
                                var_21 &= ((/* implicit */short) var_1);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((int) -2801824896965512976LL)))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (long long int i_6 = 1; i_6 < 8; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_2] [i_2 + 2] [(_Bool)0] [(short)9] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_5] [i_2] [i_6])) ? (1274839397) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) -965796342913381577LL)) : ((~(var_19))))), (((/* implicit */unsigned long long int) var_11))));
                                var_23 = ((/* implicit */signed char) (~((+(((var_14) - (var_2)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 2) 
                        {
                            {
                                arr_26 [i_2] [i_1] [i_7] = ((/* implicit */unsigned int) ((unsigned long long int) arr_22 [i_0] [i_0] [i_1] [(unsigned short)9] [(unsigned short)6] [i_8 + 1]));
                                var_24 = ((/* implicit */unsigned int) var_3);
                                arr_27 [i_0] [i_2] [i_2] [i_7] [i_2] = (-((+(((((/* implicit */int) arr_14 [i_8 - 1] [i_2] [i_2] [4ULL] [i_2] [i_0])) - (((/* implicit */int) var_6)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_9 = 0; i_9 < 13; i_9 += 1) 
    {
        var_25 += ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-19771))))) : (min((0U), (4294967295U)))));
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (short)1))));
    }
    for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
    {
        var_27 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_10]))));
        /* LoopSeq 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (short i_12 = 1; i_12 < 21; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    {
                        arr_39 [i_12] [i_10] [i_12] [(short)19] [i_12] = ((/* implicit */int) ((((/* implicit */int) (short)-18186)) > (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) & ((-2147483647 - 1)))) > (((/* implicit */int) ((((/* implicit */int) (short)-6192)) >= (var_16)))))))));
                        arr_40 [i_12] [i_11] [(signed char)23] = ((/* implicit */unsigned long long int) var_16);
                    }
                } 
            } 
            arr_41 [i_10] [i_10] [i_10] = ((/* implicit */short) min((-1), (((/* implicit */int) (unsigned short)31762))));
            var_28 ^= ((/* implicit */int) (-(((var_18) ? (max((((/* implicit */long long int) var_6)), (arr_31 [i_11]))) : (((/* implicit */long long int) ((/* implicit */int) var_18)))))));
            var_29 = ((/* implicit */long long int) ((((arr_34 [i_10]) && (var_18))) ? (((/* implicit */int) arr_38 [i_10] [(short)16] [i_11] [i_11])) : (((/* implicit */int) ((unsigned short) var_18)))));
            arr_42 [9] [(short)19] [i_11] &= ((/* implicit */unsigned long long int) (short)21920);
        }
        for (unsigned short i_14 = 0; i_14 < 24; i_14 += 1) 
        {
            /* LoopNest 3 */
            for (int i_15 = 1; i_15 < 22; i_15 += 4) 
            {
                for (unsigned long long int i_16 = 1; i_16 < 20; i_16 += 1) 
                {
                    for (signed char i_17 = 2; i_17 < 22; i_17 += 1) 
                    {
                        {
                            arr_53 [i_17] [i_14] [i_17] [i_17] [i_17] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)-27092)), (min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)30674)), (var_4))))))));
                            var_30 = ((/* implicit */short) ((_Bool) min((((/* implicit */int) var_9)), (((arr_48 [i_17] [i_16] [i_10] [i_10]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))));
                            var_31 = ((/* implicit */int) var_5);
                        }
                    } 
                } 
            } 
            arr_54 [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)-21920), (((/* implicit */short) (signed char)-12))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_13)))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) min((var_17), (arr_48 [i_10] [i_10] [i_14] [i_14])))))) : (min((((/* implicit */int) (short)18186)), (351668703)))));
        }
        /* vectorizable */
        for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 1) 
        {
            arr_59 [i_18] [i_10] [i_10] = ((/* implicit */unsigned long long int) arr_44 [(short)12] [i_18] [i_10]);
            var_32 = ((/* implicit */signed char) (+(((((/* implicit */int) var_1)) >> (((((/* implicit */int) (unsigned short)44007)) - (43976)))))));
        }
    }
    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) var_18)) - (((/* implicit */int) var_1)))), (var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (min(((~(6561925544023080335ULL))), (((/* implicit */unsigned long long int) (~(-16)))))))))));
}
