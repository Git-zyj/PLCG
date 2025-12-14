/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162352
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
    for (signed char i_0 = 1; i_0 < 6; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_0 + 3])) ? (arr_2 [i_0] [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
            arr_7 [i_1] [i_0] = ((/* implicit */unsigned short) ((var_8) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_6)) ? (-884468887) : (((/* implicit */int) var_6))))));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned char i_3 = 2; i_3 < 7; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        {
                            arr_18 [i_0] [3ULL] [i_2] [(unsigned char)7] [i_0] = ((/* implicit */unsigned char) (((+(6320958895924526759LL))) == (arr_11 [6U] [i_1] [i_2] [i_3])));
                            arr_19 [i_0] [i_1] [i_0] [i_0] [i_2] [(unsigned char)3] [i_2] = ((/* implicit */int) (-(arr_11 [(unsigned char)1] [i_1] [i_2] [i_3])));
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_3] [i_3 + 3] [i_0 + 4] [i_3])) + (((/* implicit */int) arr_14 [i_3] [i_3 + 2] [i_0 + 3] [i_3])))))));
                            arr_20 [i_0] [5U] [8LL] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 - 1]))));
                        }
                    } 
                } 
            } 
        }
        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_15 [i_0] [9LL]))) * (((/* implicit */int) var_9))));
    }
    var_17 = ((/* implicit */_Bool) var_1);
    var_18 *= ((/* implicit */unsigned long long int) var_7);
    var_19 = ((/* implicit */_Bool) var_4);
}
