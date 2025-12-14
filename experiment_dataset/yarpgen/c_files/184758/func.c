/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184758
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((unsigned long long int) arr_3 [i_1] [i_1 + 2])) - (((var_15) - (var_2))))))));
                    arr_6 [i_0] [i_1 + 2] [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((1948887745) >> (((((/* implicit */int) (unsigned char)143)) - (119))))));
                    arr_7 [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    arr_8 [i_1] [i_2 - 2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) -32584324)), (18446744073709551604ULL)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) -7888807961959724206LL)))));
}
