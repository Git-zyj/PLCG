/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15445
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_10 ^= ((/* implicit */unsigned char) min((max((var_9), (((/* implicit */unsigned int) max(((_Bool)0), (var_3)))))), (((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)0)))) >= (((/* implicit */int) arr_9 [i_2])))))));
                            var_11 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2] [i_3])))) : (((/* implicit */int) (_Bool)1)))));
                            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) (short)0)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */int) arr_10 [i_6] [i_1] [i_1] [i_0]);
                                var_14 += ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_4]))))) ? (min((((/* implicit */long long int) var_5)), (arr_12 [i_1] [i_5]))) : (((/* implicit */long long int) (-(((/* implicit */int) var_1))))))));
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [i_1])) ? (arr_12 [i_0] [i_0]) : (arr_12 [i_1] [i_1])))))));
                                var_16 &= ((/* implicit */unsigned char) (~((-(((((/* implicit */_Bool) arr_4 [i_5] [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [i_0] [(unsigned short)14] [i_4] [i_1] [i_4]))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */int) min(((~(arr_18 [i_0] [i_0] [i_0] [(_Bool)1] [i_0]))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))));
                arr_19 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-15)) : (((/* implicit */int) (short)0))))), (((((/* implicit */_Bool) 17029575231984438055ULL)) ? (((/* implicit */long long int) arr_11 [(unsigned char)23] [i_0] [i_1] [i_1])) : (arr_6 [i_0] [i_1])))))));
                arr_20 [i_0] [i_0] [i_1] |= ((/* implicit */int) ((((((int) (short)-1)) < (((/* implicit */int) ((short) arr_5 [i_0] [2U] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)1)) >= (((/* implicit */int) arr_0 [i_0])))))) : (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])), (((((/* implicit */_Bool) 3038303616114734005ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))) : (1417168841725113560ULL)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (((-(((/* implicit */int) (signed char)24)))) * (((/* implicit */int) (signed char)-1)))))));
        var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (max((((var_4) ? (arr_5 [i_7] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_1 [i_7] [i_7]) : (((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))) : (arr_5 [i_7] [i_7] [i_7])))));
    }
    for (unsigned short i_8 = 2; i_8 < 15; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((unsigned int) ((((((/* implicit */_Bool) 2147483643)) ? (((/* implicit */int) arr_9 [i_10])) : (((/* implicit */int) var_5)))) >= (((/* implicit */int) min(((signed char)127), (((/* implicit */signed char) var_4))))))))));
                    var_21 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (unsigned char)199)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_15 [i_8] [i_9] [i_10] [i_10] [i_10])), (var_9)))) ? (((/* implicit */int) ((-3556770071203835675LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)31)))))) : (((/* implicit */int) (short)0))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_11 = 1; i_11 < 16; i_11 += 4) 
        {
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1744440769U)) ? (arr_22 [(unsigned char)14] [i_11 - 1]) : (arr_22 [i_8 + 1] [i_11 + 1])));
            var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_36 [i_11] [i_11]))));
        }
        arr_37 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)-16902)) : (((/* implicit */int) (signed char)54))));
    }
    var_24 = ((/* implicit */unsigned int) min((var_24), (((((/* implicit */_Bool) ((unsigned char) (short)-1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : ((-(var_8)))))));
    var_25 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-1)) != (((/* implicit */int) (unsigned char)63))))) >> (((((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_8))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)196)) >= (((/* implicit */int) (unsigned char)196))))))))));
}
