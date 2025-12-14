/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162886
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_11 = ((/* implicit */signed char) max((arr_0 [i_0]), (4294967295U)));
        arr_2 [7LL] [7LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (max((5730171492936552294ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))));
    }
    for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 22; i_3 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) var_9);
                    var_13 = ((/* implicit */long long int) arr_9 [i_1] [i_1] [i_3]);
                }
            } 
        } 
        arr_10 [i_1] = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))) : (var_2)))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_14 = ((/* implicit */_Bool) ((signed char) arr_3 [(_Bool)1]));
        var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_4] [i_4] [i_4]))));
    }
    var_16 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_7))));
        arr_16 [i_5] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_6)) ? (arr_8 [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)32766)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)94))) : (arr_4 [i_5]))))))));
    }
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
}
