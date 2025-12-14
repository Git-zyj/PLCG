/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11959
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
    for (int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned char) min((((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) arr_6 [i_0 + 1]))));
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((max((((var_9) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2]))))), (((/* implicit */long long int) ((((/* implicit */int) var_13)) & (var_7)))))) % (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                    }
                    arr_13 [i_1] [i_2] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
    var_17 &= ((/* implicit */unsigned int) var_5);
    var_18 = ((/* implicit */_Bool) var_3);
    var_19 = ((/* implicit */signed char) var_13);
}
