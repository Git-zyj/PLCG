/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147150
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1] [i_3])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [(signed char)23] [i_3])) : (((/* implicit */int) arr_5 [i_3]))));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) var_9))))))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 2; i_4 < 24; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */int) var_0);
                        var_21 = ((/* implicit */short) arr_0 [i_2]);
                    }
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 21; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_22 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 2]))) : (arr_0 [i_0 - 2])))));
                                var_23 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) arr_2 [i_6 - 1])))));
                            }
                        } 
                    } 
                    arr_15 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_1 - 2]), (((/* implicit */long long int) var_8))))) && (((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (arr_9 [i_0 + 2] [i_1] [0LL] [i_2] [(short)14])))) && (((/* implicit */_Bool) arr_13 [i_0 - 2] [i_0 + 1] [i_0] [i_0 + 3] [i_1 - 1]))))));
                }
            } 
        } 
        var_24 |= ((/* implicit */unsigned short) var_4);
    }
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned int i_8 = 2; i_8 < 20; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_9 = 2; i_9 < 20; i_9 += 2) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((long long int) var_0))))) ? ((~(var_0))) : (((/* implicit */long long int) ((((/* implicit */int) min(((unsigned short)12088), (((/* implicit */unsigned short) var_3))))) + (((/* implicit */int) var_6)))))));
                            var_26 |= ((/* implicit */short) min((((/* implicit */int) (signed char)-51)), (((((((/* implicit */int) (signed char)-112)) + (2147483647))) << (((6923961104277979734LL) - (6923961104277979734LL)))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (_Bool)1)), (max((var_2), (((/* implicit */long long int) var_5))))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 1; i_11 < 19; i_11 += 1) 
                {
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_28 = arr_5 [i_12];
                            arr_32 [i_8] [i_11] = ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2721981845339903130ULL)) || (((/* implicit */_Bool) (signed char)117))))), (var_12))));
                            arr_33 [(unsigned short)18] [i_11] [(short)14] [(short)14] |= ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_17 [(_Bool)1] [i_8])) & (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)44513))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((((/* implicit */short) var_14)), (arr_3 [i_8]))))));
                        }
                    } 
                } 
                var_29 = (i_8 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (arr_26 [(_Bool)1] [i_8] [i_8] [i_7])))), (min((((/* implicit */short) var_6)), (var_7)))))) ? (((/* implicit */long long int) ((var_9) >> (((arr_18 [i_8 - 2] [i_8] [i_8]) + (4639458182853422492LL)))))) : (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_16)))) & (arr_18 [i_7] [i_8] [i_8])))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (arr_26 [(_Bool)1] [i_8] [i_8] [i_7])))), (min((((/* implicit */short) var_6)), (var_7)))))) ? (((/* implicit */long long int) ((var_9) >> (((((arr_18 [i_8 - 2] [i_8] [i_8]) + (4639458182853422492LL))) + (944964073518230558LL)))))) : (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_16)))) & (arr_18 [i_7] [i_8] [i_8]))))));
            }
        } 
    } 
}
