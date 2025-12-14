/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104562
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)36321)) < (((/* implicit */int) (signed char)92)))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_2]))))) ? (((unsigned long long int) arr_3 [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) (_Bool)1))))))))));
                    arr_8 [i_1] [i_1] [i_1] [(_Bool)0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36321))) + (15164227574584117515ULL)));
                }
            } 
        } 
    } 
    var_20 = ((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)38))));
}
