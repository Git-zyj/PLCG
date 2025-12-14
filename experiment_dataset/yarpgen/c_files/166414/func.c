/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166414
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
    var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) (((_Bool)1) && (((/* implicit */_Bool) 2000075637))));
        var_20 = ((/* implicit */long long int) var_17);
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */int) arr_1 [i_0] [(unsigned char)14]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((long long int) var_6)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
        arr_7 [i_1] = ((/* implicit */unsigned char) (~(var_16)));
    }
    for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 3) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1])))));
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 20; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_23 [i_6] [i_5] [i_4] [i_5] [i_2] |= ((/* implicit */unsigned int) arr_1 [i_4] [i_2]);
                                var_24 = ((/* implicit */long long int) max((2147483631), (((/* implicit */int) arr_1 [i_5] [i_3]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned char) var_14);
                        arr_26 [(unsigned char)18] [i_3 - 1] [(unsigned char)18] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)61044)) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_2] [i_3 + 3] [i_4] [i_3 + 3] [i_2 + 1] [16ULL])) && (((/* implicit */_Bool) var_15)))))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_11 [i_2])) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 8544011510061104521LL)) && (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((((/* implicit */_Bool) 4616466319966641365LL)) && (((/* implicit */_Bool) 8908278658355147483ULL)))))))) < (0U)));
                    }
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            {
                                var_27 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_25 [i_9] [i_2] [i_4] [i_2] [i_2] [i_2]))));
                                var_28 = ((((((var_17) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_9] [i_8] [(signed char)11] [i_3] [i_2] [i_2]))))) > (var_17))) ? (max((var_5), (((/* implicit */unsigned long long int) arr_1 [i_2 - 1] [i_3 + 3])))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_9 [i_3 + 2] [i_2 - 1])), ((+(((/* implicit */int) var_13))))))));
                                var_29 = ((/* implicit */unsigned char) (!(((((/* implicit */int) var_14)) < (((/* implicit */int) arr_11 [i_2]))))));
                                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6536076257052249964ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))) : (8544011510061104531LL)));
                            }
                        } 
                    } 
                    var_31 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) max((arr_25 [i_2] [(_Bool)1] [i_4] [i_3 + 3] [i_2 + 1] [i_2]), (arr_25 [i_2] [i_3] [(signed char)6] [i_3 - 2] [i_2 + 1] [i_4]))))));
                }
            } 
        } 
    }
    var_32 = (((-((((_Bool)1) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (8544011510061104523LL)))));
    var_33 = ((/* implicit */int) max((var_17), (var_17)));
}
