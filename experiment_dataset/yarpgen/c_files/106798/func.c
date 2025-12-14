/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106798
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
    var_13 = ((/* implicit */_Bool) ((long long int) ((((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) >= (var_12))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_14 = ((/* implicit */_Bool) arr_7 [6ULL]);
                    var_15 &= ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) arr_1 [i_1])))));
                }
                var_16 += var_4;
                var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
                var_18 *= ((/* implicit */signed char) ((((((/* implicit */int) arr_3 [(signed char)2] [i_0] [i_0])) < (arr_2 [i_1] [i_0]))) && (((/* implicit */_Bool) (~(arr_2 [i_0] [i_1]))))));
            }
        } 
    } 
    var_19 = var_4;
}
