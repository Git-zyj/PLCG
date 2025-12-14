/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139045
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
    var_17 += ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */long long int) var_13);
                        var_19 ^= ((/* implicit */unsigned char) ((_Bool) var_0));
                    }
                } 
            } 
        } 
        var_20 += ((/* implicit */int) var_0);
        var_21 = ((/* implicit */long long int) ((var_11) + (var_16)));
    }
}
