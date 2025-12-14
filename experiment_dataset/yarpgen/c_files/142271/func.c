/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142271
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
    var_10 |= ((((/* implicit */_Bool) (~(7491043682233958620LL)))) ? (((/* implicit */long long int) ((unsigned int) (-(13622230553324778457ULL))))) : (((((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */long long int) var_7)))) & (((/* implicit */long long int) ((/* implicit */int) min((var_5), (var_3))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_0 [i_1 - 1])), (var_0))) != (((/* implicit */unsigned long long int) 455310638U)))))) <= (4611686018427387903LL)));
                var_11 = ((/* implicit */long long int) (((-(-1LL))) != (max((1407717680956404446LL), (arr_1 [i_1 + 1])))));
                arr_5 [i_1 - 1] [i_1 - 1] = ((/* implicit */long long int) 1761513533U);
                arr_6 [i_0] [i_1 + 1] |= ((/* implicit */unsigned long long int) 1762371232);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        for (signed char i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 1) 
                    {
                        for (int i_6 = 1; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) 3839656661U);
                                var_13 = (~(-8741493371345366901LL));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */short) min((((/* implicit */long long int) ((arr_14 [i_4] [i_3 + 1] [i_3]) != (arr_14 [i_3] [i_3 + 1] [i_3])))), (arr_14 [i_4] [i_3 + 1] [i_2])));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((short) ((long long int) (+(427487051)))))));
        var_16 |= ((/* implicit */int) ((arr_13 [i_7] [0LL] [0LL] [10ULL]) != ((-((~(var_4)))))));
        /* LoopNest 3 */
        for (long long int i_8 = 4; i_8 < 13; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                for (long long int i_10 = 1; i_10 < 15; i_10 += 1) 
                {
                    {
                        arr_31 [(short)13] [i_8] [i_8] [i_10] [i_10 + 1] = ((/* implicit */int) arr_15 [16LL] [16LL]);
                        var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3839656655U)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_13 [i_8 + 3] [i_8 - 4] [i_8 - 4] [12LL]) <= (arr_9 [i_10 - 1]))))) : (max((arr_13 [i_8 - 3] [i_8 - 4] [i_8 - 4] [(signed char)2]), (((/* implicit */long long int) 668264806))))));
                        arr_32 [i_10] = ((/* implicit */long long int) (((~(var_6))) <= (((((/* implicit */_Bool) ((long long int) (signed char)-107))) ? (((/* implicit */long long int) var_1)) : (max((arr_8 [i_7]), (arr_22 [i_9] [i_9] [i_9])))))));
                        var_18 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_9] [i_8 - 4])) && (((/* implicit */_Bool) -438878409195619640LL)))))));
                        arr_33 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_7] [i_7] [i_7] [i_10] [i_10] [i_7] [i_7])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [9] [15LL] [i_7] [i_7] [i_7] [i_7] [i_7])))))) <= (var_4))) ? (((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_30 [i_7])))))) : (((/* implicit */int) ((min((arr_21 [i_7]), (((/* implicit */unsigned long long int) arr_25 [i_7])))) <= (((/* implicit */unsigned long long int) (-(8513532834374420197LL)))))))));
                    }
                } 
            } 
        } 
        var_19 |= ((/* implicit */long long int) var_3);
    }
    for (long long int i_11 = 1; i_11 < 8; i_11 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) var_8);
        arr_36 [2LL] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_19 [12LL] [i_11] [12LL] [i_11] [i_11])) != (arr_11 [i_11 - 1] [i_11 + 2]))))) & (((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */long long int) 3839656661U)) : (6354600014084083377LL))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 11; i_12 += 1) 
        {
            var_21 |= ((long long int) arr_38 [i_11 - 1] [i_11]);
            var_22 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_11 + 1] [i_11 + 2])) && (((((/* implicit */_Bool) arr_27 [i_12] [i_11] [(signed char)6] [i_11] [i_11] [i_11])) && (((/* implicit */_Bool) var_8))))));
            var_23 = ((/* implicit */unsigned long long int) ((long long int) arr_16 [i_11] [i_11 + 1] [i_11] [i_11 - 1] [i_11 + 2] [i_12]));
        }
        /* vectorizable */
        for (long long int i_13 = 1; i_13 < 8; i_13 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_14 = 1; i_14 < 10; i_14 += 1) 
            {
                for (long long int i_15 = 2; i_15 < 10; i_15 += 3) 
                {
                    for (long long int i_16 = 4; i_16 < 8; i_16 += 3) 
                    {
                        {
                            arr_48 [4LL] [0LL] [i_14 + 1] [i_15] [0LL] |= ((/* implicit */unsigned long long int) arr_24 [i_13 + 2] [i_15] [i_15]);
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */_Bool) 3839656655U)) ? (((((/* implicit */_Bool) 886244763428159869LL)) ? (arr_12 [i_16]) : (((/* implicit */unsigned long long int) 7359028348689455231LL)))) : (((/* implicit */unsigned long long int) 4294967295U))))));
                            arr_49 [i_15] [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 4294967295U)) - (arr_7 [i_16 - 3])));
                        }
                    } 
                } 
            } 
            var_25 -= ((signed char) ((((/* implicit */_Bool) arr_10 [i_11] [i_13] [i_13])) ? (arr_43 [i_11] [3LL] [i_13] [3LL]) : (arr_39 [i_13] [i_11])));
            arr_50 [i_13] = ((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) (signed char)-34))) & (((((/* implicit */_Bool) arr_12 [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-10))) : (8191LL)))));
        }
    }
    var_26 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((1942275661U) & (var_7))))) <= (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))));
}
