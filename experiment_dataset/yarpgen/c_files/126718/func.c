/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126718
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
    var_11 = ((((/* implicit */long long int) ((/* implicit */int) var_10))) + (((long long int) (~(var_6)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    var_12 *= ((/* implicit */unsigned int) min((max((arr_4 [i_2] [i_2 - 1] [i_2]), (arr_4 [i_2] [i_2 - 1] [(short)1]))), (((/* implicit */long long int) arr_6 [i_2 - 2] [i_2 - 1] [i_1]))));
                    arr_10 [i_2 + 1] [i_1] = ((/* implicit */signed char) ((int) var_6));
                    var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max(((-(-1046127675))), ((+(((/* implicit */int) arr_5 [i_0]))))))) ? (max((min((arr_0 [(_Bool)1] [i_1 + 2]), (((/* implicit */int) arr_5 [(signed char)10])))), (((/* implicit */int) max((((/* implicit */signed char) arr_1 [(signed char)2])), (arr_3 [i_2 - 2])))))) : (((/* implicit */int) ((signed char) 1046127674)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) min((1046127674), (((int) 1046127669))));
}
