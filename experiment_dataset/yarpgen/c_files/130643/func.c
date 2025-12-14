/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130643
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
    var_16 = ((/* implicit */long long int) ((short) ((max((((/* implicit */long long int) var_3)), (-977384794771218358LL))) / (((/* implicit */long long int) ((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) var_4))))))));
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (+(((var_6) & (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_9))))))))));
    var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */int) (_Bool)1))))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (var_8)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [5U] = ((/* implicit */unsigned int) arr_3 [i_0]);
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) var_6)), (arr_5 [i_1 + 4]))) > (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1)))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 23; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) 909241873844460433ULL))))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) >= (2343160295U)));
                        }
                    } 
                } 
            }
        } 
    } 
}
