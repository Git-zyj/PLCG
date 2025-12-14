/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151979
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_1 [i_0])))) | (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_0 [(short)21])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)21915)) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) min((var_9), (((/* implicit */short) arr_5 [i_0] [i_1])))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)0))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-48)), (var_10)))) : (((/* implicit */int) ((var_1) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_1 - 1] [(unsigned char)10] [i_1 + 1]))))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1])) < (((/* implicit */int) ((unsigned short) var_12)))))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [(signed char)2] [i_1 + 1] [i_1 + 1])) == (((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned short) max((var_7), ((-(min((-3567344081348514331LL), (3567344081348514331LL)))))));
}
