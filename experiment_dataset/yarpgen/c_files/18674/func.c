/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18674
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
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
    var_14 = ((/* implicit */unsigned short) var_3);
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_2)))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)30142)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1 - 3] [i_1] = ((/* implicit */unsigned short) arr_0 [i_0]);
                var_16 = ((/* implicit */unsigned char) (((+(max((((/* implicit */long long int) arr_1 [i_0])), (9223372036854775807LL))))) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8128)))));
            }
        } 
    } 
}
