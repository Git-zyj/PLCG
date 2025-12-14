/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182094
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
    for (long long int i_0 = 4; i_0 < 8; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 7; i_1 += 1) 
        {
            {
                var_10 += ((/* implicit */signed char) arr_2 [i_0]);
                arr_4 [i_1] [i_1 + 1] = ((/* implicit */long long int) arr_2 [i_1 - 3]);
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0 + 1]))))) ? ((+((+(3642104883U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-19)))))));
                arr_6 [(signed char)4] [i_1] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
            }
        } 
    } 
    var_11 = ((/* implicit */short) var_5);
}
