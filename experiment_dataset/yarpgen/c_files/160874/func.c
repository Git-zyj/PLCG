/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160874
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
    var_20 *= ((/* implicit */int) var_10);
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_10))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (562949953421311LL))) >= (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)47896)))))));
                    arr_8 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((_Bool) arr_3 [i_0] [i_0 - 2]));
                }
            } 
        } 
    } 
}
