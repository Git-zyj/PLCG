/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156632
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
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [(signed char)8]))))) >= (var_3)))))));
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)7)) > (((/* implicit */int) var_12))))), (max((((/* implicit */unsigned long long int) (signed char)-1)), (14352000074863259246ULL)))))) ? (((/* implicit */int) ((unsigned char) 6917529027641081856LL))) : (((/* implicit */int) arr_1 [i_0]))));
            }
        } 
    } 
    var_16 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) ((var_5) == (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
}
