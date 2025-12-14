/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154940
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                {
                    var_16 = (~(((((/* implicit */long long int) ((((/* implicit */_Bool) (short)992)) ? (2631003602U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22576)))))) / (max((948232173478602272LL), (((/* implicit */long long int) 1663963721U)))))));
                    arr_8 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-31857))))), ((-(1663963702U)))));
                    var_17 += ((/* implicit */unsigned long long int) max((((((((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1])) + (2147483647))) << (((((/* implicit */int) (unsigned short)32768)) - (32768))))), (((/* implicit */int) (short)31858))));
                }
            } 
        } 
    } 
    var_18 &= ((((/* implicit */long long int) ((((((/* implicit */int) (short)31857)) / (((/* implicit */int) var_11)))) % ((~(((/* implicit */int) var_5))))))) / ((+((-(var_12))))));
}
