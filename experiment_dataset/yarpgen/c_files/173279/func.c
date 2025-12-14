/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173279
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
    for (int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */long long int) max((var_10), (max((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (arr_6 [0LL] [i_0])))) ? ((-(arr_4 [(signed char)8] [(signed char)8]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)189))))), (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)175))) - (arr_4 [(unsigned short)14] [(unsigned short)14]))), (arr_4 [(unsigned char)8] [(signed char)12])))))));
                arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0 + 2]))))) ? (((((/* implicit */_Bool) (unsigned char)198)) ? (var_3) : (1534952989357627553LL))) : (var_3)));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) var_8);
}
