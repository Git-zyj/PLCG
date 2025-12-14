/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132713
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
    var_16 ^= ((/* implicit */unsigned int) var_15);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = 1998723290U;
                    arr_11 [i_0] [i_0] [i_0] [i_2] = (short)-16024;
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */long long int) 1910946209)) : (-9223372036854775799LL)))))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */short) var_14)), (var_4)))), (min((((/* implicit */unsigned long long int) (short)16024)), (var_8)))))));
}
