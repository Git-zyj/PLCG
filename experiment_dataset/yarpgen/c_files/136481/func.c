/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136481
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
    var_12 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) ((arr_2 [i_0]) == (arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((unsigned short) arr_3 [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_1))))) / (arr_0 [i_0] [i_0]))))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 132120576)) ? (((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [(unsigned short)7]))) : ((~(arr_0 [i_0] [i_1]))))) : ((((~(var_8))) & (((var_7) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_1])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((int) arr_2 [i_3 - 2]));
                        var_14 = ((/* implicit */unsigned char) ((int) (short)-1));
                        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_3 + 2]))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 + 1] [16] [i_0])) && (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_11))))));
                        arr_16 [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_0] [i_4])) || (((/* implicit */_Bool) var_6))))));
                        arr_17 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_4] = (~(arr_0 [i_0] [i_0]));
                    }
                    for (unsigned long long int i_5 = 4; i_5 < 17; i_5 += 2) 
                    {
                        arr_20 [i_0 - 1] [i_0] = ((/* implicit */long long int) ((arr_9 [i_5] [(unsigned char)19] [i_5 + 3] [i_5 + 3]) - (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_0 - 1] [(_Bool)1] [i_2] [i_0] [i_0 - 1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (-1929544740))))));
                    }
                    arr_21 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_1 + 1] [i_0] [i_1 - 1] [i_2])) ? (arr_10 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [i_1]) : (arr_10 [i_0] [i_1] [i_0] [i_1 + 1] [(signed char)16])));
                    var_18 = ((/* implicit */unsigned char) (((_Bool)1) ? (arr_9 [i_0 - 1] [i_1] [(unsigned char)3] [i_2]) : (arr_9 [i_2] [i_0 - 1] [i_0] [i_0 - 1])));
                }
                /* vectorizable */
                for (long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                {
                    arr_26 [i_0] = ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_5 [i_0] [i_0])));
                    var_19 = ((/* implicit */short) arr_22 [(signed char)13]);
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 1; i_7 < 18; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            {
                                arr_33 [4ULL] [i_0 + 1] [4ULL] [i_0] [i_7] [(unsigned char)2] = ((/* implicit */int) ((signed char) var_8));
                                arr_34 [4] [i_0] [i_1] [10LL] [i_7] [i_8] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_9) - (((/* implicit */unsigned long long int) arr_31 [i_1 + 1] [i_7 + 1] [i_1 + 1] [i_1 + 1] [i_0 - 1])))))));
                                arr_35 [i_0] [i_1 - 1] [i_6] [i_0] [i_8] = ((/* implicit */signed char) ((short) (unsigned char)215));
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) (_Bool)1)), (min((((/* implicit */long long int) arr_5 [i_0] [i_0])), (arr_2 [i_0])))))));
                arr_36 [i_0] = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) -2523580945629181257LL)) ? (((/* implicit */long long int) ((((/* implicit */int) var_10)) << (((((/* implicit */int) (unsigned short)49394)) - (49385)))))) : (((((/* implicit */long long int) (+(((/* implicit */int) var_1))))) / (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_8)))))));
}
