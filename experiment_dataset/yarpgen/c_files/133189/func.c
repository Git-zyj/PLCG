/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133189
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
    var_14 = ((/* implicit */short) var_3);
    var_15 = ((((/* implicit */long long int) (+(((/* implicit */int) (short)-4057))))) + (var_2));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))) / (var_8))), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])))));
                    var_17 = arr_3 [i_0] [i_2];
                    var_18 -= ((/* implicit */short) (+(max((((/* implicit */unsigned int) min((((/* implicit */short) var_9)), (var_6)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)5] [i_2]))) : (var_5)))))));
                    arr_8 [i_0] [i_1] [i_2] = var_7;
                }
            } 
        } 
    } 
}
