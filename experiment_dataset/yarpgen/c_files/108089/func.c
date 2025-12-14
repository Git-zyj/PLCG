/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108089
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) ((unsigned char) var_3));
                    var_18 ^= ((arr_1 [i_0]) ? (((((/* implicit */_Bool) min((((/* implicit */short) arr_6 [i_0])), (var_3)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) 12)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)14222))))))) : (((/* implicit */long long int) 4294967295U)));
                    arr_9 [i_0] [i_1] [(unsigned char)6] = ((/* implicit */_Bool) (-(min((((((/* implicit */_Bool) arr_8 [i_0] [14] [14] [i_2])) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_2])) : (((/* implicit */int) var_16)))), (((((/* implicit */_Bool) arr_8 [i_0] [0ULL] [i_2] [i_2])) ? (((/* implicit */int) var_12)) : (arr_5 [i_1])))))));
                    arr_10 [13LL] [i_1] [i_0] = ((/* implicit */long long int) (unsigned short)57811);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) 0ULL);
    var_20 = ((/* implicit */unsigned long long int) var_5);
    var_21 &= ((/* implicit */long long int) var_0);
}
