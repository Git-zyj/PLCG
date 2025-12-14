/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188757
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) (signed char)65)) : (((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)65535))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (max(((+(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) (signed char)8)))))))));
    var_14 = ((/* implicit */unsigned short) ((min((((18065691652877403036ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))))), (((/* implicit */unsigned long long int) var_10)))) - (((unsigned long long int) (short)-12441))));
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (var_9))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))) < (max((((/* implicit */unsigned int) (unsigned short)10163)), (1724004153U))))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (!((_Bool)1)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) min((((/* implicit */signed char) var_5)), ((signed char)-65)))), (max((var_11), (((/* implicit */unsigned short) var_5))))))) / (max((((1139055954) ^ (((/* implicit */int) (signed char)64)))), (((/* implicit */int) arr_4 [i_0]))))));
                            var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_9))))) ? (max((max((((/* implicit */unsigned int) var_7)), (312460809U))), (((/* implicit */unsigned int) arr_0 [(short)16])))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */_Bool) min((var_19), (((((((/* implicit */_Bool) arr_1 [i_1 - 3] [i_1 - 3])) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) var_0)))) != (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1])))))))));
            }
        } 
    } 
}
