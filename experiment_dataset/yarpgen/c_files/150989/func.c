/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150989
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
    var_16 = ((/* implicit */_Bool) (unsigned short)53866);
    var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min(((unsigned short)53866), ((unsigned short)11671)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_14)))))) > ((-((-(((/* implicit */int) var_14))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (unsigned short)53865);
                arr_4 [i_1] = ((/* implicit */int) arr_2 [i_0]);
            }
        } 
    } 
}
