/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111496
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) (((+((-(((/* implicit */int) var_15)))))) == (((/* implicit */int) var_3))));
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) arr_7 [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) min((((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned char)77))))))), ((-(var_8)))));
}
