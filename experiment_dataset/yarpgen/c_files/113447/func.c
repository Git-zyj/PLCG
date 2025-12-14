/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113447
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [(signed char)1] [i_1] = ((/* implicit */long long int) ((min(((~(arr_0 [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 21U)) && (((/* implicit */_Bool) arr_0 [i_0]))))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0]))))))))));
                arr_5 [i_0] = ((/* implicit */int) arr_2 [i_0] [i_0] [(unsigned short)10]);
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) | ((+((~(var_6)))))));
    var_11 += (~((~((~(((/* implicit */int) var_4)))))));
}
