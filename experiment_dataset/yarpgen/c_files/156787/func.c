/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156787
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
    var_11 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (~(((/* implicit */int) max(((short)16352), (((/* implicit */short) (unsigned char)99))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */int) min((arr_1 [i_0 - 1]), (((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_1 - 1]))))) <= (((/* implicit */int) ((signed char) (((_Bool)1) ? (((/* implicit */int) (short)-16353)) : (((/* implicit */int) (unsigned char)109)))))))))));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((0), (((/* implicit */int) (unsigned short)0))))), (((((/* implicit */_Bool) var_2)) ? (0ULL) : (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_3 [(unsigned short)9] [i_1] [(_Bool)1]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) && ((!((_Bool)1))))))));
            }
        } 
    } 
}
