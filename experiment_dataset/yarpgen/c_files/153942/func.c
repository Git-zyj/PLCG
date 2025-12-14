/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153942
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
    var_12 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)-13580)) && (((/* implicit */_Bool) (short)-26128))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [(_Bool)0] [(short)0] |= ((/* implicit */short) ((unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_5))) << (((((/* implicit */int) min((var_4), (((/* implicit */short) arr_2 [i_1]))))) + (16669))))));
                    arr_10 [i_0 + 1] [i_1] [i_1] = arr_1 [4ULL];
                    var_13 &= ((/* implicit */long long int) (~(((/* implicit */int) ((short) (~(((/* implicit */int) arr_7 [14LL]))))))));
                    arr_11 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_0] [(signed char)3] [(signed char)3])))) | (var_5)));
                    arr_12 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_0 [i_0])))) - ((+(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))))) ? ((-(((/* implicit */int) arr_6 [i_1] [i_0 - 3])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [i_0 - 3] [i_0 + 1] [i_0 + 1])) : ((+(((/* implicit */int) var_8))))))));
                }
            } 
        } 
    } 
    var_14 = min((((/* implicit */short) var_1)), (var_6));
    var_15 |= max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))), (((min((var_5), (((/* implicit */unsigned long long int) var_8)))) - (((/* implicit */unsigned long long int) var_11)))));
}
