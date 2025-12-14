/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138090
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
    var_15 = ((/* implicit */int) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        arr_4 [i_0] [(short)12] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-13))));
        arr_5 [i_0] [(short)1] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -157933094533184006LL)) ? (arr_1 [i_0]) : (arr_3 [i_0]))) | (arr_3 [i_0 - 2])));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_12 [i_2] = ((/* implicit */unsigned int) (short)-10802);
                    arr_13 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2068623492)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_9 [8ULL] [(unsigned char)9])))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_12))))) : (arr_11 [i_0] [i_1 + 1] [i_2] [i_0])));
                    arr_14 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_10 [i_2] [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_2 [i_1 + 2] [i_0]))))) : (var_3)));
                    arr_15 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-17050)) ? (((2147483647) | (((/* implicit */int) (signed char)-1)))) : ((+(((/* implicit */int) (short)-1))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 4) 
    {
        arr_20 [i_3 - 1] = ((/* implicit */_Bool) arr_3 [i_3]);
        arr_21 [i_3] [i_3] = (signed char)-1;
    }
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-10785))))) % (((/* implicit */int) var_2))))), (var_13)));
    var_17 &= var_2;
    var_18 &= ((/* implicit */unsigned long long int) var_13);
}
