/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181159
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) (unsigned char)255)), (arr_0 [i_0]))) & (((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) arr_1 [i_0]))), (min((var_13), (arr_1 [i_0]))))))));
        var_15 = ((/* implicit */_Bool) ((short) max((((/* implicit */long long int) (short)32767)), (((long long int) arr_2 [i_0])))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) arr_3 [i_1]);
        var_16 = ((/* implicit */unsigned char) ((short) ((short) max((((/* implicit */short) arr_4 [i_1])), (arr_3 [i_1])))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) ((_Bool) (-(((/* implicit */int) (signed char)-111)))));
                    var_18 = arr_10 [i_2] [i_3] [(unsigned short)18];
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 18U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (max((((/* implicit */unsigned int) var_12)), ((~(var_3)))))));
}
