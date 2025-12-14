/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109298
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
    var_17 = (signed char)124;
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) (signed char)124)), (var_3))) > (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) var_14)))), (((/* implicit */int) ((var_11) > (var_15)))))))));
                            var_19 = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) var_2);
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 4; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((min((var_3), (var_11))) << ((((-(var_3))) - (4710682841733028410ULL)))));
                                var_22 = max((13940730925349064968ULL), (((/* implicit */unsigned long long int) (signed char)-124)));
                                var_23 = var_14;
                                var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((var_16) << (((var_11) - (11491113515846358722ULL))))) > (((/* implicit */int) (unsigned char)202)))))));
                                var_25 = ((/* implicit */unsigned long long int) min((var_5), (((min((var_4), (((/* implicit */int) (signed char)125)))) > (((((/* implicit */int) var_14)) << (((/* implicit */int) var_6))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
