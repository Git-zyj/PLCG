/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16217
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (~((~(var_14))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_20 = max((max((((/* implicit */long long int) var_4)), (var_16))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-26972)) && (((/* implicit */_Bool) var_4))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((long long int) var_9)))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 11; i_2 += 1) 
        {
            for (int i_3 = 4; i_3 < 12; i_3 += 1) 
            {
                {
                    var_22 = ((((/* implicit */_Bool) ((signed char) 3918794119U))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-91))) : (((((/* implicit */_Bool) -8988060172789624755LL)) ? (((((/* implicit */long long int) ((/* implicit */int) (short)17995))) + (-4606500450257460887LL))) : (((/* implicit */long long int) ((unsigned int) var_18))))));
                    var_23 -= ((((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_2] [i_2 + 3])) && (((/* implicit */_Bool) arr_9 [i_2] [i_2 - 3] [i_2 - 1])))) ? (((16U) << (((8988060172789624741LL) - (8988060172789624719LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((signed char) min((((/* implicit */long long int) ((unsigned int) var_4))), (-3097234009196157883LL)))))));
                    arr_11 [i_3] [i_3 - 2] [i_3 + 2] = ((/* implicit */signed char) (+(max((min((((/* implicit */unsigned long long int) arr_6 [i_3 + 1])), (arr_0 [i_2] [i_2]))), (((/* implicit */unsigned long long int) var_4))))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((int) max((((/* implicit */unsigned int) (unsigned short)34543)), (arr_3 [i_2 - 3])))))));
                }
            } 
        } 
        arr_12 [i_1] [i_1] |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned int) arr_4 [i_1] [i_1]))) ? (min((var_9), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))))), ((-(var_3)))));
    }
}
