/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140703
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */long long int) var_7);
                var_17 = ((/* implicit */short) min((((/* implicit */long long int) ((_Bool) arr_3 [i_0 + 1]))), (((long long int) arr_2 [i_0 + 1]))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (signed char)1);
    var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? ((((_Bool)1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)-70)))) : (((/* implicit */int) min(((short)26489), (((/* implicit */short) var_14))))))), (((/* implicit */int) var_12))));
}
