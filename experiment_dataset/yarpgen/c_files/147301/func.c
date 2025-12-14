/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147301
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
    var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) var_4)), (var_9))))))), (((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (8888051685590787704ULL))) : (((/* implicit */unsigned long long int) (-(1710721619))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_5 [i_1] [i_0])), (max((arr_0 [i_0]), ((unsigned char)0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)5)) - (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 2] [i_1 + 1]))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (1966080U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))) : ((~((~(1966080U)))))));
                var_20 = ((/* implicit */unsigned int) max((max((arr_5 [i_1] [i_1 - 1]), (arr_5 [i_0] [i_0]))), (((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0] [i_1 - 2] [i_0])) > ((-(((/* implicit */int) arr_0 [(signed char)8])))))))));
            }
        } 
    } 
}
