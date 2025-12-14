/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132936
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (15063660343933708563ULL) : (15063660343933708563ULL)));
    var_13 -= ((/* implicit */unsigned char) var_3);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_5 [i_2] [i_0]);
                    arr_10 [i_0] [i_0] [i_0] = arr_4 [i_2] [i_0];
                    arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_0])) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (3383083729775843053ULL))) : (((/* implicit */unsigned long long int) var_0))));
                    var_14 += ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))) : (3383083729775843052ULL)))) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])) : (max((((/* implicit */unsigned long long int) (unsigned char)8)), (15063660343933708563ULL))))));
                }
            } 
        } 
    } 
}
