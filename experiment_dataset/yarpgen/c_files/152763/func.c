/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152763
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
    var_15 = ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)(-127 - 1))));
    var_16 |= ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (signed char)127))));
    var_17 = ((/* implicit */signed char) ((min((((/* implicit */int) var_10)), (1218789537))) - (((/* implicit */int) var_9))));
    var_18 = ((/* implicit */int) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) -1300042297);
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) max((((/* implicit */int) (signed char)-127)), (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) (signed char)54)) ? (-241906856) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)127))))))))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) 1473470883);
                    var_20 = ((/* implicit */unsigned short) (~(max((((/* implicit */int) (unsigned char)18)), (((((/* implicit */int) arr_1 [i_1])) - (241906856)))))));
                }
            } 
        } 
    } 
}
