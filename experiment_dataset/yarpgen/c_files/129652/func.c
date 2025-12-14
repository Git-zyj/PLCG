/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129652
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
    var_10 = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */int) var_1)))))) & (((/* implicit */int) ((signed char) var_4)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_11 -= ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned short)4096)) : (((/* implicit */int) var_9)))))), ((-(((((/* implicit */int) var_9)) & (((/* implicit */int) arr_0 [i_0]))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] [i_0] [9LL] = ((/* implicit */unsigned short) max((0U), (((/* implicit */unsigned int) (unsigned short)65534))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_12 ^= ((/* implicit */unsigned char) (unsigned short)9);
                                arr_14 [i_0] [i_1] [9U] [i_4] = ((/* implicit */_Bool) arr_12 [12LL] [i_1] [i_1] [i_2] [i_3] [i_4]);
                                arr_15 [i_0] [(unsigned char)1] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4162758946U)) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) (unsigned char)30))));
                                arr_16 [i_0] [2U] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))));
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_1] = max((8274694641544438119LL), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (arr_10 [6LL] [(signed char)2] [i_2] [3U] [3U] [(short)4])))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_3]))) : (((/* implicit */int) min((var_6), ((unsigned short)35201))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_13 ^= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) var_6)) >> (((((((/* implicit */_Bool) -2175123008024152918LL)) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) (unsigned short)14050)))) - (65513))))));
    }
    var_14 = ((/* implicit */long long int) (unsigned short)45173);
    var_15 = var_7;
}
