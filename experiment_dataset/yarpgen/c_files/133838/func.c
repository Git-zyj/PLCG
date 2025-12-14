/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133838
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
    var_13 += ((/* implicit */unsigned long long int) max((var_10), ((~(var_10)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_14 ^= ((/* implicit */short) (!(((((/* implicit */int) arr_10 [i_0] [i_1])) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (var_4))))))));
                        var_15 = ((/* implicit */short) var_12);
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */long long int) arr_10 [i_0] [i_0]);
    }
}
