/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15865
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [(unsigned char)12] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_1])) + (((/* implicit */int) arr_6 [i_2] [i_2]))))) ? (max((((/* implicit */int) arr_1 [i_0] [(unsigned char)7])), ((~(arr_8 [9LL] [i_2] [i_1] [i_0]))))) : (((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned char)11] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1])))) & (((/* implicit */int) (!(var_7)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_1] [i_3] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) var_11)))))), (((arr_5 [i_0] [i_1] [i_2]) - (arr_5 [i_1] [0U] [i_1])))));
                                arr_16 [i_3] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_5 [i_0] [i_1] [i_2]))) || (((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_1 [i_0] [i_2])))) + (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (arr_4 [i_0] [i_1])))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_10))))))) ? (((max(((_Bool)1), (var_5))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (arr_13 [i_0])))) : (((0U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                    arr_17 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)137)), (var_3)))) ? (((/* implicit */int) ((var_8) && (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) (_Bool)1))))) ? (min((((var_7) ? (arr_8 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */int) (short)6446)))), (((/* implicit */int) (!((_Bool)0)))))) : (min((((/* implicit */int) ((_Bool) arr_12 [i_2] [i_2] [i_0] [i_0]))), (arr_5 [i_0] [i_1] [(unsigned short)2])))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (var_12)))) ? (var_14) : (((/* implicit */int) var_6))))));
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (-((+(((/* implicit */int) ((_Bool) var_1))))))))));
    var_18 &= ((/* implicit */_Bool) ((((((var_14) / (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13)))))) + (2147483647))) << ((((((_Bool)0) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) max(((unsigned char)63), (var_13)))))) - (253)))));
}
