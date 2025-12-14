/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147521
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned char) var_7)), ((unsigned char)192)))), (max((((/* implicit */long long int) (short)(-32767 - 1))), (var_13)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) ((_Bool) (-(1073217536))));
                            var_22 -= ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)51)) << (((((/* implicit */int) (unsigned char)44)) - (29)))))) && (max((arr_0 [i_3 - 3]), (arr_0 [i_3 - 3]))));
                            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (signed char)47)))))));
                            var_24 *= ((/* implicit */signed char) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8656602053452118755LL))))), (max((((/* implicit */unsigned int) (unsigned char)225)), (4294967288U)))))), (((long long int) 549755813760LL))));
                            var_25 = ((/* implicit */short) max((var_5), (((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_0 [i_1]), (var_14)))), (((((/* implicit */_Bool) (unsigned short)64919)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (signed char)68)))))))));
                        }
                    } 
                } 
                var_26 |= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-62)) % (((/* implicit */int) (unsigned char)186))));
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) min(((~(arr_1 [i_1]))), (((/* implicit */unsigned long long int) ((long long int) ((unsigned int) (signed char)19)))))))));
            }
        } 
    } 
}
