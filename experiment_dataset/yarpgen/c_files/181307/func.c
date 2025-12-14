/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181307
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned short) var_7))), (68718952448ULL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_8 [i_0] [i_1 + 1] [i_2] [i_3])), (884694533U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))))))) ? (((((/* implicit */_Bool) ((68718952443ULL) << (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */int) var_12)), (var_2))) : (2147483647))) : (((int) var_4))));
                            var_15 = ((/* implicit */unsigned short) (-((~(((((((/* implicit */int) (signed char)-97)) + (2147483647))) << (((/* implicit */int) (_Bool)0))))))));
                            arr_11 [i_1 - 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((arr_3 [i_1]), (((/* implicit */unsigned short) var_6))))), (arr_7 [i_3 - 1])))) ? (68718952448ULL) : (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)1)) << (((var_10) - (4233320748U))))))))));
                            var_16 &= ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (-(var_2))))) << (((min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_5)))), (var_9))) - (31172)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_0);
    var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) var_10)))));
}
