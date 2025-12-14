/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104549
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
    for (long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) -788045176335545428LL))))))));
                    arr_7 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [4LL] [i_0])) ? ((-(arr_5 [i_0] [(short)0] [i_0]))) : (max((1272150391U), (((/* implicit */unsigned int) (unsigned char)125))))))) ^ ((~(arr_4 [i_0])))));
                }
            } 
        } 
    } 
    var_16 &= ((/* implicit */unsigned char) (signed char)109);
}
