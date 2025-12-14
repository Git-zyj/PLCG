/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156122
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
    var_11 = (!(((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63032)))))) >= (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
    var_12 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_2] [(signed char)14] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_0] [i_0]))))) ? (((((/* implicit */int) (short)-30196)) / (((/* implicit */int) arr_4 [i_0] [i_0] [i_2])))) : (((((/* implicit */int) var_3)) * (((/* implicit */int) var_7))))));
                    var_13 -= ((/* implicit */short) ((int) arr_7 [i_0] [(unsigned char)19]));
                }
            } 
        } 
        var_14 = ((((/* implicit */int) (signed char)-19)) == (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_5 [(signed char)0] [(short)17] [(signed char)12])) : (((/* implicit */int) var_6)))));
    }
}
