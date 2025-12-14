/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11848
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) max(((~(min((-152445), (((/* implicit */int) (signed char)117)))))), (((((/* implicit */_Bool) -8862624296716180143LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!((_Bool)1)))))))))));
                    arr_8 [i_1] [i_2] [i_0] [i_2] |= ((/* implicit */_Bool) arr_0 [i_1]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_3);
}
