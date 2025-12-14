/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147493
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0] [i_1] [i_0]))) ? (((/* implicit */int) max((arr_2 [i_0] [i_0] [i_1]), (arr_2 [i_0] [i_1] [i_0])))) : (((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) ((short) arr_1 [i_0])))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max(((short)17334), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-1)))))));
                var_20 = ((/* implicit */unsigned long long int) (+((+((-(((/* implicit */int) arr_4 [i_1]))))))));
            }
        } 
    } 
    var_21 = var_8;
    var_22 = ((-1818514369) | (((/* implicit */int) (unsigned short)51638)));
}
