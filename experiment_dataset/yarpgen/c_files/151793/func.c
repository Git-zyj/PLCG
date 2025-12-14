/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151793
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
    var_12 ^= ((/* implicit */signed char) ((((/* implicit */long long int) var_2)) + (var_11)));
    var_13 = ((/* implicit */signed char) var_1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 *= ((/* implicit */_Bool) ((var_5) ? (((/* implicit */long long int) (+((~(((/* implicit */int) var_1))))))) : (arr_6 [0] [i_1] [i_2] [i_2])));
                    var_15 &= min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) 2320779318U)))))), (((((/* implicit */long long int) arr_2 [i_0 + 2] [i_1] [i_2 - 1])) - (-1857384225580099449LL))));
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((unsigned long long int) min((((/* implicit */int) max((arr_7 [i_0] [i_1] [i_0 + 1]), (arr_7 [i_1] [i_1] [i_2])))), (((int) -1857384225580099449LL))))))));
                    var_17 = ((/* implicit */long long int) arr_4 [(unsigned short)5] [i_2]);
                }
            } 
        } 
    } 
}
