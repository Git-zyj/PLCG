/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120601
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_10 ^= ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_6 [i_2] [i_1] [(short)2])) * (((/* implicit */int) arr_6 [(unsigned short)21] [i_1] [10LL]))))));
                    var_11 ^= ((/* implicit */long long int) var_8);
                    arr_7 [i_0] [(unsigned char)3] [i_2] = ((/* implicit */unsigned char) var_0);
                    var_12 = ((/* implicit */unsigned short) var_5);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((var_6) ^ (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_9)), (var_8)))) ? (var_7) : (max((((/* implicit */long long int) var_4)), (var_3)))))));
}
