/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128084
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
    var_10 -= ((/* implicit */short) ((unsigned short) (-((~(((/* implicit */int) var_4)))))));
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (short)32606))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_4 [i_0 + 2] [i_0 + 2] [i_0 + 1] = ((/* implicit */short) var_2);
                arr_5 [i_0] = arr_1 [i_0];
                var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (signed char)-67))))), (((((/* implicit */_Bool) 2U)) ? (-1596398579) : (((/* implicit */int) var_1))))))), (((max((((/* implicit */unsigned long long int) (unsigned char)223)), (15744565594503079342ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 2])))))));
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) max((((4294967288U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101))))), (((/* implicit */unsigned int) max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 1])))))))));
                var_14 = ((/* implicit */short) max((((/* implicit */long long int) (-(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 6657513717547409655LL)))))))), (max((6657513717547409649LL), (((/* implicit */long long int) (short)32767))))));
            }
        } 
    } 
}
