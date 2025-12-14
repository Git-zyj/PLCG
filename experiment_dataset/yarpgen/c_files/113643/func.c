/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113643
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((((/* implicit */_Bool) (short)21)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_1 [(unsigned char)10]))) / (((/* implicit */unsigned int) (+(var_8)))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (((/* implicit */int) var_6)))))) * (((((/* implicit */int) (unsigned short)1023)) - (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)-16384)))))))));
        arr_5 [i_0] [i_0] |= ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
    }
    for (int i_1 = 3; i_1 < 20; i_1 += 1) 
    {
        arr_8 [i_1 - 3] = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_7 [i_1] [i_1 - 3]) > (arr_7 [18] [i_1 + 1])))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1 + 1])))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    arr_13 [20] [i_3] [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */long long int) var_1)) - (((arr_9 [(short)19] [(short)19]) ? (((/* implicit */long long int) arr_3 [3] [(signed char)5])) : (-8924634662822205755LL)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned char) var_8);
                                arr_19 [19LL] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */signed char) var_14);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) | ((~(((var_14) << (((/* implicit */int) var_6))))))))));
}
