/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140461
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
    var_10 = var_4;
    var_11 = ((var_3) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_11 [i_1] [2LL] [i_1] = var_4;
                        var_12 |= ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-1)) + (2147483647))) << (((((((/* implicit */int) (short)-1)) + (9))) - (8)))));
                    }
                    arr_12 [i_1] = ((((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) < (((long long int) var_6))))) << ((((-(((/* implicit */int) (_Bool)1)))) + (25))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_0);
}
