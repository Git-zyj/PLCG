/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156864
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
    var_11 = var_8;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] [i_2] [(signed char)18] = ((/* implicit */int) var_0);
                    arr_8 [(unsigned short)10] [(signed char)20] [i_2] [(unsigned short)8] = ((/* implicit */_Bool) var_7);
                    arr_9 [i_0] = ((/* implicit */long long int) (unsigned char)0);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_5)), (var_6)))))));
}
