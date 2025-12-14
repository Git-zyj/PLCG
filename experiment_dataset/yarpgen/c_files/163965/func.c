/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163965
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((long long int) (!(((_Bool) (unsigned char)7))))))));
    var_13 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [(_Bool)1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)7)) || ((!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))));
                    var_14 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_2 [i_2] [i_1])))), ((~(((/* implicit */int) arr_6 [i_0] [4LL] [(unsigned char)6] [i_2]))))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (-(252LL)))))) - (min((min((8189766332167679522LL), (var_7))), (((/* implicit */long long int) ((_Bool) (unsigned char)63)))))));
                }
            } 
        } 
    } 
}
