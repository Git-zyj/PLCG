/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134064
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
    var_13 = ((/* implicit */int) (unsigned char)21);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) ((unsigned int) ((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235))) : (arr_6 [i_0 + 1] [i_1]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (2977529873U))))))));
                var_15 += ((/* implicit */short) max((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))), ((((-(140767841U))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((67108864LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)53)))))) ? ((-(((/* implicit */int) (unsigned short)4)))) : ((~(((/* implicit */int) var_2)))))))));
}
