/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17079
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
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (13651199704073780804ULL)));
                var_19 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)90)), ((+(((/* implicit */int) (unsigned char)161))))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */short) arr_0 [i_1]);
                var_20 = arr_1 [i_0];
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_13);
}
