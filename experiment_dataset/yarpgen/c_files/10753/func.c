/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10753
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 758863769)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)108))))) ? (((var_16) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))))) : (min((((/* implicit */unsigned int) (signed char)-18)), (3025945249U))))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) max((max((arr_5 [i_1 - 2]), (arr_5 [i_1 - 2]))), (((/* implicit */short) min((arr_3 [i_1 - 1] [i_0]), (((/* implicit */unsigned char) (_Bool)1)))))));
                arr_8 [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_19)))), (((/* implicit */int) arr_1 [i_0] [i_1]))))), (((((/* implicit */_Bool) var_14)) ? (((10ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1]))))) : (((/* implicit */unsigned long long int) ((-1508273364) + (376479049))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_17);
    var_21 = ((/* implicit */unsigned char) ((var_5) ? (max((var_9), (((/* implicit */long long int) var_8)))) : (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_18)) : (2097151LL))), ((-(var_2)))))));
    var_22 = ((/* implicit */int) (short)26910);
    var_23 -= ((/* implicit */int) var_13);
}
