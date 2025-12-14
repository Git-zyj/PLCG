/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113037
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_18 -= ((/* implicit */long long int) arr_4 [i_0 + 1] [i_0] [i_0 + 1]);
                var_19 ^= ((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (5999887911145750866LL)))), (0ULL))));
                arr_7 [i_0] [i_0 + 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1] [i_0] [i_0])) * (((((/* implicit */_Bool) ((long long int) -2364812901445238533LL))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) -5999887911145750867LL)))))))));
                var_20 = ((/* implicit */_Bool) ((arr_3 [i_0 - 1] [i_0 - 1]) / (((/* implicit */int) (short)-17304))));
                var_21 = ((((/* implicit */_Bool) 7U)) ? (1030792151040ULL) : (((/* implicit */unsigned long long int) 5999887911145750866LL)));
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned char) min((((/* implicit */signed char) (_Bool)1)), (var_0)));
}
