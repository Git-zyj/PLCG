/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166496
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
    var_10 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) 2147483647)), (0ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (short)28124)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */long long int) (signed char)103);
                    var_12 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 0))))) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))) == (2158821100716554425LL))))));
                    var_13 = arr_3 [i_0];
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_0);
}
