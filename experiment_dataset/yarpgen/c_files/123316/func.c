/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123316
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
    for (int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((((/* implicit */int) (unsigned char)86)) / (((/* implicit */int) arr_0 [0LL])))) : (((/* implicit */int) arr_7 [i_1 - 1] [i_1] [i_3 - 1] [i_0 - 1]))));
                        var_16 = ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)30750)) ^ (((/* implicit */int) (signed char)46))))));
                        arr_10 [i_1] [i_1] [(unsigned char)12] = ((/* implicit */unsigned int) ((arr_4 [i_0 - 1]) - (((/* implicit */long long int) ((/* implicit */int) (short)-19210)))));
                    }
                    var_17 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0] [2LL] [i_2 - 1]))));
                    var_18 = ((/* implicit */unsigned short) (!(((arr_4 [i_1]) != (-4682664607505766473LL)))));
                    arr_11 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */short) arr_3 [i_0] [i_0] [i_0])), (var_10)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_14))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-239065149)))) || ((!(((/* implicit */_Bool) ((unsigned int) var_4)))))));
    var_21 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)47))))), ((~(var_6)))));
}
