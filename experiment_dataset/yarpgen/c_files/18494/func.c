/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18494
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])), (var_3)))) ? (((/* implicit */int) max((arr_2 [i_0] [i_1] [i_0]), (arr_2 [i_0] [i_1] [i_0])))) : (((/* implicit */int) (!(arr_1 [i_2 - 1])))));
                    var_15 = ((/* implicit */unsigned short) min((var_15), (var_12)));
                    arr_8 [i_0] = ((/* implicit */int) ((var_8) < (((/* implicit */int) ((signed char) arr_1 [i_0])))));
                    var_16 *= ((/* implicit */unsigned long long int) min((((unsigned int) arr_2 [i_2 - 1] [i_2 + 2] [12])), (((/* implicit */unsigned int) ((_Bool) arr_5 [i_2 + 2] [4ULL] [i_2 + 3] [i_2])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) != (-6787836552210464928LL)));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6787836552210464949LL)) ? (((/* implicit */int) var_6)) : ((~(var_1)))));
}
