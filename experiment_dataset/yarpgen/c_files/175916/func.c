/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175916
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
    var_10 = ((/* implicit */long long int) var_0);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) (unsigned short)46497)) != (((/* implicit */int) arr_7 [i_0])))));
                    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2]))));
                }
            } 
        } 
    } 
}
