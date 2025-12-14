/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159379
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (+(((/* implicit */int) ((arr_0 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))))));
        var_19 = ((/* implicit */signed char) (+(((unsigned long long int) 2165532069U))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (signed char i_3 = 3; i_3 < 15; i_3 += 3) 
            {
                for (unsigned short i_4 = 1; i_4 < 14; i_4 += 4) 
                {
                    {
                        arr_11 [i_1] = (~(((unsigned long long int) arr_3 [i_3 - 1])));
                        var_20 = ((/* implicit */long long int) arr_5 [i_4] [i_3]);
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)31)) - (((/* implicit */int) var_9))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_5))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                {
                    arr_17 [i_5] [i_1] = ((/* implicit */unsigned int) (~(((long long int) var_17))));
                    arr_18 [i_1] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_5)))) % (((var_14) % (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))))) + (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_1]))))), (arr_8 [i_1 + 3])))));
                    arr_19 [i_1] [i_1] [i_5] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1 + 3] [i_1] [i_1 + 3] [i_1])) ? (((unsigned int) (unsigned char)183)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 3])))))) ? (max(((-(var_14))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_15)), ((unsigned short)127)))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) == (arr_9 [i_1] [i_5] [i_6]))) ? (((((/* implicit */int) var_15)) * (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) var_2))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        arr_23 [i_7] [i_6] [i_6] [i_1] &= ((/* implicit */unsigned long long int) var_11);
                        var_23 = ((/* implicit */unsigned char) ((unsigned short) ((long long int) arr_9 [i_1] [i_1 - 1] [i_1 + 2])));
                    }
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        arr_26 [i_1] [i_1] [i_1] [i_1 + 2] = ((/* implicit */int) arr_8 [i_1 + 3]);
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            arr_29 [i_1] [i_1] [i_6] [i_8] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)21)) || (((/* implicit */_Bool) (signed char)127)))))));
                            arr_30 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_5] [i_1 + 3] [i_1 + 3] [i_8] [i_9])) ? (((/* implicit */int) ((signed char) min((((/* implicit */unsigned short) var_1)), (arr_14 [i_6] [(short)8]))))) : (((((/* implicit */_Bool) arr_21 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_8] [i_9] [i_9])) ? (((/* implicit */int) arr_21 [10LL] [(signed char)4] [i_6] [i_8] [(unsigned short)11] [i_9])) : (((/* implicit */int) arr_21 [i_1] [(unsigned char)4] [i_6] [i_8] [i_9] [i_9]))))));
                        }
                        for (unsigned int i_10 = 1; i_10 < 16; i_10 += 3) 
                        {
                            arr_33 [(short)4] [i_1] [(unsigned char)12] [i_1] [i_1 + 3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
                            arr_34 [i_1] [i_5] [0] [16ULL] = ((/* implicit */unsigned char) var_9);
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 4; i_11 < 16; i_11 += 3) 
                        {
                            arr_38 [i_1] [i_1] = ((/* implicit */unsigned char) ((min(((-(arr_8 [i_1]))), (((/* implicit */unsigned long long int) ((long long int) arr_32 [i_1] [(unsigned char)16] [i_1]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned char) arr_28 [i_1] [i_5] [(unsigned char)0] [i_6] [i_8] [i_5] [i_11])))))));
                            var_24 = ((((/* implicit */_Bool) ((short) var_9))) || (((/* implicit */_Bool) ((unsigned char) var_12))));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((_Bool) ((((var_14) / (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) << (((((/* implicit */int) var_0)) + (104)))))))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) 511569119U)) : (15227808285781053382ULL)));
                        }
                        var_27 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) << (((((((/* implicit */int) arr_5 [i_6] [4U])) ^ (((/* implicit */int) var_6)))) + (28124)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (var_4)))), (var_12)))));
                    }
                    var_28 ^= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_8 [i_1]))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))));
                }
            } 
        } 
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_35 [i_1 + 1] [i_1 - 1] [i_1] [i_1]) % (arr_35 [i_1 + 1] [i_1 + 3] [(unsigned char)4] [(unsigned char)4])))))))));
    }
    var_30 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)6278))));
}
