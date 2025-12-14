/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168701
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) var_17)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))), ((+(((int) (_Bool)1))))));
                                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)28066))));
                                var_20 = ((/* implicit */_Bool) max((((4968756403879059612LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) min(((_Bool)1), ((_Bool)1))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) var_12);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) max((var_22), (min((((/* implicit */long long int) ((min((1507362404), (((/* implicit */int) (_Bool)0)))) - (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_12)))))))));
}
