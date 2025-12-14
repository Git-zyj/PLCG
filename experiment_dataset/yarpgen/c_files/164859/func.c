/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164859
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((var_11) == (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (((int) ((_Bool) 4806554784599509619LL)))));
                arr_5 [i_0] [(signed char)15] [i_0] = ((/* implicit */short) ((unsigned long long int) (~(arr_2 [i_0] [i_1] [i_0]))));
                var_13 = (!(var_6));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-54)), (var_12)))) & (((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_2)))))))));
}
