/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183649
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
    var_12 *= ((/* implicit */unsigned char) ((short) var_0));
    var_13 = ((/* implicit */unsigned long long int) (+(var_1)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [(unsigned short)4] = ((/* implicit */signed char) ((long long int) min((((/* implicit */long long int) arr_6 [i_2 - 1] [i_2] [i_2] [i_2 - 1])), (-6LL))));
                    var_14 = ((/* implicit */unsigned short) ((((arr_7 [i_2] [i_2 + 1] [i_1] [(_Bool)1]) ? (5LL) : (((/* implicit */long long int) -101332468)))) - (((/* implicit */long long int) ((int) arr_7 [(unsigned short)9] [i_2 + 1] [i_1] [i_2])))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (signed char)127);
    var_16 = ((/* implicit */_Bool) var_6);
}
