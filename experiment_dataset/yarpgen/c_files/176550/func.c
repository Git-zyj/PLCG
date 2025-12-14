/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176550
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
    var_13 = ((/* implicit */unsigned char) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_2] [i_0]))) < (348578992U))) ? (max((3946388303U), (348578967U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) < (((/* implicit */int) (signed char)126))))))))) ? (348578992U) : (3946388304U)));
                            var_15 = ((/* implicit */int) ((3946388312U) < (min((348578992U), (((/* implicit */unsigned int) min(((short)26362), (((/* implicit */short) var_0)))))))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(1499215195793440967ULL)))) ? (16947528877916110648ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1] [8]))) / (3946388304U))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */signed char) ((((/* implicit */int) var_2)) < (((/* implicit */int) (unsigned char)15))))), ((signed char)107)))), (3946388303U)));
            }
        } 
    } 
}
