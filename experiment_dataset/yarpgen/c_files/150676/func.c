/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150676
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
    var_13 = ((/* implicit */_Bool) ((unsigned long long int) min(((+(((/* implicit */int) (unsigned char)204)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_1)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                for (long long int i_3 = 3; i_3 < 17; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_3] [i_0] [i_0 + 1] [i_0] = ((/* implicit */int) var_11);
                            var_14 = ((/* implicit */unsigned short) (~(arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_2 - 2])));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) & (((/* implicit */int) var_11))));
                            arr_14 [i_0] [i_3] [i_1] [i_1] [i_3] [i_3 + 2] [i_4] = ((/* implicit */unsigned short) var_8);
                        }
                        var_16 = ((/* implicit */unsigned int) arr_2 [i_0]);
                        var_17 -= max((((/* implicit */int) (unsigned short)31791)), ((+(((/* implicit */int) (!((_Bool)1)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_5 = 1; i_5 < 15; i_5 += 2) 
        {
            arr_17 [i_0] [i_0] = ((/* implicit */int) max((min((max((((/* implicit */unsigned int) 1246856891)), (var_7))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned int) arr_10 [i_0] [14LL] [i_0] [18ULL]))));
            var_18 = ((/* implicit */int) arr_11 [i_0] [16ULL] [i_0] [i_0]);
        }
    }
    /* vectorizable */
    for (unsigned char i_6 = 1; i_6 < 17; i_6 += 4) /* same iter space */
    {
        arr_20 [i_6] [i_6] = ((/* implicit */_Bool) (~((~(2080446525)))));
        arr_21 [i_6] [i_6] = ((/* implicit */_Bool) (~(arr_0 [i_6 + 1])));
    }
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_7])) : (((/* implicit */int) var_6)))), (((int) 7969542460801566132ULL))))) : (max((2043389350678695484LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_7] [i_7]))) * (3396908169U))))))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            {
                                var_20 |= ((/* implicit */short) ((signed char) min((arr_8 [i_7] [i_7] [i_9] [i_10] [i_11] [i_9]), (arr_8 [i_11] [9] [i_10] [i_9] [17ULL] [i_7]))));
                                var_21 = arr_28 [i_7] [i_7];
                            }
                        } 
                    } 
                    var_22 = min((max((min((arr_4 [i_7] [i_8] [i_8]), (((/* implicit */int) arr_26 [i_7] [i_7] [i_8] [i_9])))), (((/* implicit */int) var_10)))), (((/* implicit */int) (!(arr_3 [i_7] [i_7] [i_7])))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_23 *= (!(((/* implicit */_Bool) min((-1781213245), (((/* implicit */int) (short)24600))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                arr_40 [i_12] = ((/* implicit */int) var_11);
                arr_41 [i_7] [i_12] = ((/* implicit */short) ((var_8) << (((4741910982202846931ULL) - (4741910982202846931ULL)))));
            }
        }
        arr_42 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (5ULL)))) ? (((/* implicit */int) arr_23 [i_7] [i_7])) : (((((/* implicit */_Bool) ((short) -1635976908))) ? (((/* implicit */int) max(((unsigned short)13867), (((/* implicit */unsigned short) var_12))))) : (((/* implicit */int) ((signed char) var_9)))))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 16; i_14 += 1) 
        {
            for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 4) 
            {
                {
                    arr_49 [i_7] [i_7] = ((/* implicit */long long int) var_4);
                    var_24 = (!(((/* implicit */_Bool) ((unsigned int) (+(2119776404U))))));
                    var_25 = ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)141)), (16605582286393355873ULL)))) ? (((/* implicit */int) arr_10 [i_14] [i_15 + 1] [i_14] [i_7])) : (((/* implicit */int) var_6)))), (((/* implicit */int) (!(arr_46 [i_15 + 1] [i_14]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 0; i_16 < 16; i_16 += 1) 
                    {
                        var_26 = -563955277;
                        var_27 += ((((/* implicit */unsigned long long int) max((2147483647), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-10487))) <= (arr_9 [i_7] [i_14] [i_7] [i_15] [i_16]))))))) != (max((((/* implicit */unsigned long long int) arr_0 [i_7])), ((~(0ULL))))));
                    }
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((int) (unsigned short)46248)) : (max((872664280), (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    }
}
