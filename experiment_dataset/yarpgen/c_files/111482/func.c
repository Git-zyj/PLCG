/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111482
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
    var_15 = ((/* implicit */unsigned short) min((-2163993622370430537LL), (-2163993622370430537LL)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_6 [i_1] [i_1] [i_1] [12ULL] = (+(max((arr_1 [i_0] [(_Bool)0]), (arr_1 [i_1] [i_2]))));
                    var_16 = ((/* implicit */_Bool) (+(((unsigned int) var_2))));
                }
            } 
        } 
    } 
}
