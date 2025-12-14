/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164235
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((8145381500014492178LL) % (4194303LL)));
                arr_6 [i_1] [i_1] = (~(((((/* implicit */_Bool) 2637287574651441751LL)) ? (-8145381500014492179LL) : (-2637287574651441768LL))));
                arr_7 [i_0] [i_0] |= ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) var_7))))), (min((min((((/* implicit */long long int) var_8)), (var_0))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) > (((/* implicit */int) arr_2 [(unsigned short)6] [i_1] [5ULL])))))))));
            }
        } 
    } 
    var_12 |= ((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (var_4)));
}
